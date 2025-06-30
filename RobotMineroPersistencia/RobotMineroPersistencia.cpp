#include "pch.h"

#include "RobotMineroPersistencia.h"

using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

SqlConnection^ RobotMineroPersistencia::Persistance::GetConnection()
{
	SqlConnection^ conn = gcnew SqlConnection();
	String^ password = "NwFYdtbznVTc$";
	String^ serverName = "200.16.7.140";
	conn->ConnectionString = "Server=" + serverName + ";Database = a20226315; User ID =a20226315; Password = " +
		password + ";";
	conn->Open();
	return conn;
}

void RobotMineroPersistencia::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject)
{
	FileStream^ file;
	BinaryFormatter^ formatter = gcnew BinaryFormatter();

	try {
		file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
		formatter->Serialize(file, persistObject);
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (file != nullptr) file->Close();
		delete file;
	}
}

Object^ RobotMineroPersistencia::Persistance::LoadBinaryFile(String^ fileName)
{
	FileStream^ file;
	Object^ result;
	BinaryFormatter^ formatter;

	try {
		if (File::Exists(fileName)) {
			file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
			formatter = gcnew BinaryFormatter();
			result = formatter->Deserialize(file);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (file != nullptr) file->Close();
		delete file;
	}
	return result;
}

int RobotMineroPersistencia::Persistance::DeleteUser(int userId)
{
	int res = 0;
	SqlConnection^ conn;
	try {
		/* Paso 1: Se obtiene la oconexión a la BD */
		conn = GetConnection();

		/* Paso 2: Se prepara la sentencia SQL */
		String^ sqlStr = "dbo.usp_DeleteUser";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@id", System::Data::SqlDbType::Int);
		cmd->Prepare();
		cmd->Parameters["@id"]->Value = userId;
		/* Paso 3: Se ejecuta la sentencia SQL */
		res = cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		/* Paso 4: Se cierra la conexión */
		if (conn != nullptr) conn->Close();
	}
	return res;
}

Usuario^ RobotMineroPersistencia::Persistance::ValidateUser(String^ username, String^ password)
{
    Usuario^ user = nullptr;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_ValidateUser";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Agregar los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 100);
        cmd->Prepare();

        // Asignar los valores a los parámetros
        cmd->Parameters["@USERNAME"]->Value = username;
        cmd->Parameters["@PASSWORD"]->Value = password;

        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Procesar los resultados
        if (reader->Read()) {
            // Validar el tipo de usuario y asignar la clase correspondiente
            String^ userTypeStr = reader["USER_TYPE"]->ToString();
            UserType userType = static_cast<UserType>(Int32::Parse(userTypeStr));

            if (userType == UserType::IngAmbiental) {
                user = gcnew IngAmbiental();
                ((IngAmbiental^)user)->Especializacion = reader["ESPECIALIZACION"]->ToString();
                ((IngAmbiental^)user)->NumeroLicencia = reader["NUMEROLICENCIA"]->ToString();
                ((IngAmbiental^)user)->EntidadCertificadora = reader["ENTIDADCERTIFICADORA"]->ToString();
            }
            else if (userType == UserType::Supervisor) {
                user = gcnew Supervisor();
                ((Supervisor^)user)->Capacitacion = reader["CAPACITACION"]->ToString();
                ((Supervisor^)user)->EntCapacitacion = reader["ENTCAPACITACION"]->ToString();
                ((Supervisor^)user)->SeguroSupervisor = reader["SEGUROSUPERVISOR"]->ToString();
            }
            else if (userType == UserType::Operario) {
                user = gcnew Operario();
                ((Operario^)user)->Especialidad = reader["ESPECIALIDAD"]->ToString();
                ((Operario^)user)->NumeroIntervenciones = Convert::ToInt32(reader["NUMEROINTERVENCIONES"]->ToString());
            }
            else if (userType == UserType::Peon) {
                user = gcnew Peon();
                ((Peon^)user)->ContactoEmergencia = Convert::ToInt32(reader["CONTACTOEMERGENCIA"]->ToString());
                ((Peon^)user)->CondicionesSalud = reader["CONDICIONESSALUD"]->ToString();
                ((Peon^)user)->SeguroMedico = reader["SEGUROMEDICO"]->ToString();
                if (!DBNull::Value->Equals(reader["LASTCHECK"]))
                    ((Peon^)user)->LastCheck = Convert::ToDateTime(reader["LASTCHECK"]);
            }

            // Asignación de propiedades comunes de Usuario
            user->Id = Convert::ToInt32(reader["ID"]->ToString());
            user->Nombre = reader["NOMBRE"]->ToString();
            user->NombreUsuario = reader["NOMBREUSUARIO"]->ToString();
            user->Apelllido = reader["APELLIDO"]->ToString();
            user->Salario = Convert::ToDouble(reader["SALARIO"]->ToString());
            user->Contrasenha = reader["CONTRASENHA"]->ToString();
            user->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]);
            user->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]);
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                user->Photo = (array<Byte>^)reader["PHOTO"];
            user->Edad = Convert::ToInt32(reader["EDAD"]->ToString());
            user->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]->ToString());
        }
    }
    catch (Exception^ ex) {
        throw ex;  // Lanzar la excepción si ocurre algún error
    }
    finally {
        // Paso 5: Cerrar los objetos de conexión
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return user;  // Devolver el objeto usuario encontrado o nullptr si no se encuentra
}

int RobotMineroPersistencia::Persistance::AddIngAmbiental(IngAmbiental^ user)
{
    int userId;
    SqlConnection^ conn;
    try {
        /* Paso 1: Se obtiene la conexión */
        conn = GetConnection();

        /* Paso 2: Se prepara la sentencia SQL */
        String^ sqlStr = "dbo.usp_AddIngAmbiental";  // Asume que tienes el procedimiento almacenado creado para IngAmbiental
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Definir los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@password", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@lastname", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@status", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@document_number", System::Data::SqlDbType::VarChar, 11);
        cmd->Parameters->Add("@document_type", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@birthday", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@address", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@gender", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@phone_number", System::Data::SqlDbType::VarChar, 15);
        cmd->Parameters->Add("@photo", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@specialization", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@license_number", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@certifying_entity", System::Data::SqlDbType::VarChar, 100);

        // Parámetro de salida para el ID
        SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);

        cmd->Prepare();

        // Asignar valores a los parámetros
        cmd->Parameters["@username"]->Value = user->NombreUsuario;
        cmd->Parameters["@password"]->Value = user->Contrasenha;
        cmd->Parameters["@name"]->Value = user->Nombre;
        cmd->Parameters["@lastname"]->Value = user->Apelllido;
        cmd->Parameters["@status"]->Value = 'A';  // Asumiendo que el estado es 'A' (activo)
        cmd->Parameters["@document_number"]->Value = user->NumeroTelefono.ToString();
        cmd->Parameters["@document_type"]->Value = '1';  // Suponiendo que es un DNI
        cmd->Parameters["@birthday"]->Value = user->FechaFirst;
        cmd->Parameters["@address"]->Value = "Dirección ejemplo";  // Asegúrate de asignar un valor a la dirección
        cmd->Parameters["@gender"]->Value = 'M';  // Suponiendo que es masculino
        cmd->Parameters["@phone_number"]->Value = user->NumeroTelefono.ToString();

        // Manejo de la foto
        if (user->Photo == nullptr)
            cmd->Parameters["@photo"]->Value = DBNull::Value;  // Si no hay foto, asignar DBNull
        else
            cmd->Parameters["@photo"]->Value = user->Photo;  // Asignar la foto si existe

        cmd->Parameters["@specialization"]->Value = user->Especializacion;
        cmd->Parameters["@license_number"]->Value = user->NumeroLicencia;
        cmd->Parameters["@certifying_entity"]->Value = user->EntidadCertificadora;

        /* Paso 3: Se ejecuta la sentencia SQL */
        cmd->ExecuteNonQuery();

        /* Paso 4: Se procesan los resultados */
        userId = Convert::ToInt32(cmd->Parameters["@id"]->Value);
    }
    catch (Exception^ ex) {
        // Guardar en el log o mandar un correo electrónico al Administrador
        throw ex;
    }
    finally {
        /* Paso 5: Se cierran los objetos de conexión */
        if (conn != nullptr) conn->Close();
    }
    return userId;
}

int RobotMineroPersistencia::Persistance::UpdateIngAmbiental(IngAmbiental^ user)
{
    int res = 0;
    SqlConnection^ conn;
    try {
        // Paso 1: Se obtiene la conexión a la BD
        conn = GetConnection();

        // Paso 2: Se prepara la sentencia SQL
        String^ sqlStr = "dbo.usp_UpdateIngAmbiental";  // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Añadir los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@id", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@password", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@lastname", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@status", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@document_number", System::Data::SqlDbType::VarChar, 11);
        cmd->Parameters->Add("@document_type", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@birthday", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@address", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@gender", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@phone_number", System::Data::SqlDbType::VarChar, 15);
        cmd->Parameters->Add("@photo", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@specialization", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@license_number", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@certifying_entity", System::Data::SqlDbType::VarChar, 100);

        // Preparar la sentencia para ejecución
        cmd->Prepare();

        // Asignar valores a los parámetros
        cmd->Parameters["@id"]->Value = user->Id;
        cmd->Parameters["@username"]->Value = user->NombreUsuario;
        cmd->Parameters["@password"]->Value = user->Contrasenha;
        cmd->Parameters["@name"]->Value = user->Nombre;
        cmd->Parameters["@lastname"]->Value = user->Apelllido;
        cmd->Parameters["@status"]->Value = 'A';  // Asumiendo que el estado es activo 'A'
        cmd->Parameters["@document_number"]->Value = user->NumeroTelefono.ToString();
        cmd->Parameters["@document_type"]->Value = '1';  // Suponiendo que el tipo de documento es DNI (1)
        cmd->Parameters["@birthday"]->Value = user->FechaFirst;
        cmd->Parameters["@address"]->Value = "Dirección ejemplo";  // Asegúrate de asignar la dirección correctamente
        cmd->Parameters["@gender"]->Value = 'M';  // Suponiendo que el género es 'M' (masculino)
        cmd->Parameters["@phone_number"]->Value = user->NumeroTelefono.ToString();

        // Manejo de la propiedad Photo
        if (user->Photo == nullptr)
            cmd->Parameters["@photo"]->Value = DBNull::Value;  // Si no hay foto, asignamos DBNull
        else
            cmd->Parameters["@photo"]->Value = user->Photo;  // Asignamos la foto si existe

        cmd->Parameters["@specialization"]->Value = user->Especializacion;
        cmd->Parameters["@license_number"]->Value = user->NumeroLicencia;
        cmd->Parameters["@certifying_entity"]->Value = user->EntidadCertificadora;

        // Paso 3: Ejecutar la sentencia SQL
        res = cmd->ExecuteNonQuery();  // Ejecutar el procedimiento almacenado

    }
    catch (Exception^ ex) {
        // Guardar en el log o mandar un correo electrónico al Administrador en caso de error
        throw ex;
    }
    finally {
        // Paso 5: Cerrar la conexión
        if (conn != nullptr) conn->Close();
    }

    return res;  // Retornar el número de filas afectadas o el resultado de la operación
}

List<IngAmbiental^>^ RobotMineroPersistencia::Persistance::QueryAllIngAmbiental()
{
    List<IngAmbiental^>^ usersList = gcnew List<IngAmbiental^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        // Paso 1: Se obtiene la conexión
        conn = GetConnection();
        // Paso 2: Se prepara la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllIngAmbiental";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        // Paso 3: Se ejecuta la sentencia
        reader = cmd->ExecuteReader();

        // Paso 4: Se procesan los resultados
        while (reader->Read()) {
            IngAmbiental^ user = gcnew IngAmbiental();

            // Asignamos los valores a las propiedades del objeto
            user->Id = Convert::ToInt32(reader["ID"]->ToString());
            user->Nombre = reader["NOMBRE"]->ToString();
            user->NombreUsuario = reader["NOMBREUSUARIO"]->ToString();
            user->Apelllido = reader["APELLIDO"]->ToString();
            user->Salario = Convert::ToDouble(reader["SALARIO"]->ToString());
            user->Contrasenha = reader["CONTRASENHA"]->ToString();
            user->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]);
            user->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]);
            user->Edad = Convert::ToInt32(reader["EDAD"]->ToString());
            user->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]->ToString());

            // Si existe una foto, la asignamos
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                user->Photo = (array<Byte>^)reader["PHOTO"];

            // Asignamos los atributos específicos de IngAmbiental
            user->Especializacion = reader["ESPECIALIZACION"]->ToString();
            user->NumeroLicencia = reader["NUMEROLICENCIA"]->ToString();
            user->EntidadCertificadora = reader["ENTIDADCERTIFICADORA"]->ToString();

            // Añadimos el usuario a la lista
            usersList->Add(user);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Se cierran los objetos de conexión
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return usersList;  // Devolvemos la lista de usuarios
}

IngAmbiental^ RobotMineroPersistencia::Persistance::QueryIngAmbientalById(int userId)
{
    IngAmbiental^ user;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        // Paso 1: Se obtiene la conexión
        conn = GetConnection();

        // Paso 2: Se prepara la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryIngAmbientalById";  // Procedimiento almacenado para obtener IngAmbiental por ID
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@id"]->Value = userId;  // Asignamos el ID al parámetro

        // Paso 3: Se ejecuta la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Se procesan los resultados
        if (reader->Read()) {
            user = gcnew IngAmbiental();  // Creamos un nuevo objeto IngAmbiental

            // Asignamos los valores a las propiedades de IngAmbiental
            user->Id = Convert::ToInt32(reader["ID"]->ToString());
            user->Nombre = reader["NOMBRE"]->ToString();
            user->NombreUsuario = reader["NOMBREUSUARIO"]->ToString();
            user->Apelllido = reader["APELLIDO"]->ToString();
            user->Salario = Convert::ToDouble(reader["SALARIO"]->ToString());
            user->Contrasenha = reader["CONTRASENHA"]->ToString();
            user->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]);
            user->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]);
            user->Edad = Convert::ToInt32(reader["EDAD"]->ToString());
            user->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]->ToString());

            // Si existe una foto, la asignamos
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                user->Photo = (array<Byte>^)reader["PHOTO"];

            // Asignamos los atributos específicos de IngAmbiental
            user->Especializacion = reader["ESPECIALIZACION"]->ToString();
            user->NumeroLicencia = reader["NUMEROLICENCIA"]->ToString();
            user->EntidadCertificadora = reader["ENTIDADCERTIFICADORA"]->ToString();
        }
    }
    catch (Exception^ ex) {
        throw ex;  // Lanzamos la excepción si ocurre un error
    }
    finally {
        // Paso 5: Se cierran los objetos de conexión
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return user;  // Devolvemos el objeto IngAmbiental con los datos
}

int RobotMineroPersistencia::Persistance::AddSupervisor(Supervisor^ user)
{
    int userId;
    SqlConnection^ conn;
    try {
        /* Paso 1: Se obtiene la conexión */
        conn = GetConnection();

        /* Paso 2: Se prepara la sentencia SQL */
        String^ sqlStr = "dbo.usp_AddSupervisor";  // Asegúrate de que el procedimiento almacenado esté creado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Definir los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@password", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@lastname", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@status", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@document_number", System::Data::SqlDbType::VarChar, 11);
        cmd->Parameters->Add("@document_type", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@birthday", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@address", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@gender", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@phone_number", System::Data::SqlDbType::VarChar, 15);
        cmd->Parameters->Add("@photo", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@salary", System::Data::SqlDbType::Decimal);
        cmd->Parameters->Add("@schedule", System::Data::SqlDbType::VarChar, 20);
        cmd->Parameters->Add("@hire_date", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@training", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@training_entity", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@supervisor_insurance", System::Data::SqlDbType::VarChar, 100);

        // Parámetro de salida para el ID
        SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);

        cmd->Prepare();

        // Asignar valores a los parámetros
        cmd->Parameters["@username"]->Value = user->NombreUsuario;
        cmd->Parameters["@password"]->Value = user->Contrasenha;
        cmd->Parameters["@name"]->Value = user->Nombre;
        cmd->Parameters["@lastname"]->Value = user->Apelllido;
        cmd->Parameters["@status"]->Value = 'A';  // Asumiendo que el estado es 'A' (activo)
        cmd->Parameters["@document_number"]->Value = user->NumeroTelefono.ToString();
        cmd->Parameters["@document_type"]->Value = '1';  // Suponiendo que es un DNI
        cmd->Parameters["@birthday"]->Value = user->FechaFirst;
        cmd->Parameters["@address"]->Value = "Dirección ejemplo";  // Asegúrate de asignar un valor a la dirección
        cmd->Parameters["@gender"]->Value = 'M';  // Suponiendo que es masculino
        cmd->Parameters["@phone_number"]->Value = user->NumeroTelefono.ToString();

        // Manejo de la foto
        if (user->Photo == nullptr)
            cmd->Parameters["@photo"]->Value = DBNull::Value;  // Si no hay foto, asignar DBNull
        else
            cmd->Parameters["@photo"]->Value = user->Photo;  // Asignar la foto si existe

        // Propiedades específicas del Supervisor
        cmd->Parameters["@salary"]->Value = user->Salario;
        cmd->Parameters["@schedule"]->Value = "Full Time";  // Horario por defecto
        cmd->Parameters["@hire_date"]->Value = user->FechaFirst;
        cmd->Parameters["@training"]->Value = user->Capacitacion;
        cmd->Parameters["@training_entity"]->Value = user->EntCapacitacion;
        cmd->Parameters["@supervisor_insurance"]->Value = user->SeguroSupervisor;

        /* Paso 3: Se ejecuta la sentencia SQL */
        cmd->ExecuteNonQuery();

        /* Paso 4: Se procesan los resultados */
        userId = Convert::ToInt32(cmd->Parameters["@id"]->Value);
    }
    catch (Exception^ ex) {
        // Guardar en el log o mandar un correo electrónico al Administrador
        throw ex;
    }
    finally {
        /* Paso 5: Se cierran los objetos de conexión */
        if (conn != nullptr) conn->Close();
    }
    return userId;  // Devuelve el ID del Supervisor insertado
}

int RobotMineroPersistencia::Persistance::UpdateSupervisor(Supervisor^ user)
{
    int res = 0;
    SqlConnection^ conn;
    try {
        /* Paso 1: Se obtiene la conexión */
        conn = GetConnection();

        /* Paso 2: Se prepara la sentencia SQL */
        String^ sqlStr = "dbo.usp_UpdateSupervisor";  // Asegúrate de tener este procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Definir los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@id", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@password", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@lastname", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@status", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@document_number", System::Data::SqlDbType::VarChar, 11);
        cmd->Parameters->Add("@document_type", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@birthday", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@address", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@gender", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@phone_number", System::Data::SqlDbType::VarChar, 15);
        cmd->Parameters->Add("@photo", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@salary", System::Data::SqlDbType::Decimal);
        cmd->Parameters->Add("@schedule", System::Data::SqlDbType::VarChar, 20);
        cmd->Parameters->Add("@hire_date", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@training", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@training_entity", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@supervisor_insurance", System::Data::SqlDbType::VarChar, 100);

        // Asignar valores a los parámetros
        cmd->Parameters["@id"]->Value = user->Id;
        cmd->Parameters["@username"]->Value = user->NombreUsuario;
        cmd->Parameters["@password"]->Value = user->Contrasenha;
        cmd->Parameters["@name"]->Value = user->Nombre;
        cmd->Parameters["@lastname"]->Value = user->Apelllido;
        cmd->Parameters["@status"]->Value = 'A';  // Asumiendo que el estado es 'A' (activo)
        cmd->Parameters["@document_number"]->Value = user->NumeroTelefono.ToString();
        cmd->Parameters["@document_type"]->Value = '1';  // Suponiendo que es un DNI
        cmd->Parameters["@birthday"]->Value = user->FechaFirst;
        cmd->Parameters["@address"]->Value = "Dirección ejemplo";  // Asegúrate de asignar un valor a la dirección
        cmd->Parameters["@gender"]->Value = 'M';  // Suponiendo que es masculino
        cmd->Parameters["@phone_number"]->Value = user->NumeroTelefono.ToString();

        // Manejo de la foto
        if (user->Photo == nullptr)
            cmd->Parameters["@photo"]->Value = DBNull::Value;  // Si no hay foto, asignar DBNull
        else
            cmd->Parameters["@photo"]->Value = user->Photo;  // Asignar la foto si existe

        // Propiedades específicas del Supervisor
        cmd->Parameters["@salary"]->Value = user->Salario;
        cmd->Parameters["@schedule"]->Value = "Full Time";  // Horario por defecto
        cmd->Parameters["@hire_date"]->Value = user->FechaFirst;
        cmd->Parameters["@training"]->Value = user->Capacitacion;
        cmd->Parameters["@training_entity"]->Value = user->EntCapacitacion;
        cmd->Parameters["@supervisor_insurance"]->Value = user->SeguroSupervisor;

        /* Paso 3: Se ejecuta la sentencia SQL */
        res = cmd->ExecuteNonQuery(); // Ejecuta la actualización

    }
    catch (Exception^ ex) {
        // Guardar en el log o mandar un correo electrónico al Administrador
        throw ex;
    }
    finally {
        /* Paso 5: Se cierran los objetos de conexión */
        if (conn != nullptr) conn->Close();
    }
    return res;  // Devuelve el número de filas afectadas
}

List<Supervisor^>^ RobotMineroPersistencia::Persistance::QueryAllSupervisor()
{
    List<Supervisor^>^ supervisorsList = gcnew List<Supervisor^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        // Paso 1: Se obtiene la conexión
        conn = GetConnection();

        // Paso 2: Se prepara la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllSupervisor";  // Asegúrate de que este procedimiento almacenado exista
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        // Paso 3: Se ejecuta la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Se procesa los resultados
        while (reader->Read()) {
            Supervisor^ supervisor = gcnew Supervisor();
            supervisor->Id = Convert::ToInt32(reader["ID"]->ToString());
            supervisor->NombreUsuario = reader["USERNAME"]->ToString();
            supervisor->Contrasenha = reader["PASSWORD"]->ToString();
            supervisor->Nombre = reader["NAME"]->ToString();
            supervisor->Apelllido = reader["LASTNAME"]->ToString();
            supervisor->NumeroTelefono = Convert::ToInt32(reader["PHONE_NUMBER"]->ToString());
            supervisor->Edad = Convert::ToInt32(reader["EDAD"]->ToString());

            // Asignar valores a las propiedades específicas del Supervisor
            supervisor->Capacitacion = reader["CAPACITACION"]->ToString();
            supervisor->EntCapacitacion = reader["ENTCAPACITACION"]->ToString();
            supervisor->SeguroSupervisor = reader["SEGUROSUPERVISOR"]->ToString();

            // Añadir el Supervisor a la lista
            supervisorsList->Add(supervisor);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Se cierran los objetos de conexión
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return supervisorsList;
}

Supervisor^ RobotMineroPersistencia::Persistance::QuerySupervisorById(int userId)
{
    Supervisor^ supervisor;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        // Paso 1: Se obtiene la conexión
        conn = GetConnection();

        // Paso 2: Se prepara la sentencia SQL
        String^ sqlStr = "dbo.usp_QuerySupervisorById";  // Asegúrate de que este procedimiento almacenado exista
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@id"]->Value = userId;

        // Paso 3: Se ejecuta la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Se procesa los resultados
        if (reader->Read()) {
            supervisor = gcnew Supervisor();
            supervisor->Id = Convert::ToInt32(reader["ID"]->ToString());
            supervisor->NombreUsuario = reader["USERNAME"]->ToString();
            supervisor->Contrasenha = reader["PASSWORD"]->ToString();
            supervisor->Nombre = reader["NAME"]->ToString();
            supervisor->Apelllido = reader["LASTNAME"]->ToString();
            supervisor->NumeroTelefono = Convert::ToInt32(reader["PHONE_NUMBER"]->ToString());
            supervisor->Edad = Convert::ToInt32(reader["EDAD"]->ToString());

            // Asignar valores a las propiedades específicas del Supervisor
            supervisor->Capacitacion = reader["CAPACITACION"]->ToString();
            supervisor->EntCapacitacion = reader["ENTCAPACITACION"]->ToString();
            supervisor->SeguroSupervisor = reader["SEGUROSUPERVISOR"]->ToString();
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Se cierran los objetos de conexión
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return supervisor;
}

int RobotMineroPersistencia::Persistance::AddOperario(Operario^ user)
{
    int userId;
    SqlConnection^ conn;
    try {
        // Paso 1: Se obtiene la conexión
        conn = GetConnection();

        // Paso 2: Se prepara la sentencia SQL
        String^ sqlStr = "dbo.usp_AddOperario";  // Asegúrate de tener el procedimiento almacenado correspondiente
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Definir los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@password", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@lastname", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@status", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@document_number", System::Data::SqlDbType::VarChar, 11);
        cmd->Parameters->Add("@document_type", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@birthday", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@address", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@gender", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@phone_number", System::Data::SqlDbType::VarChar, 15);
        cmd->Parameters->Add("@photo", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@specialty", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@intervention_count", System::Data::SqlDbType::Int);

        // Parámetro de salida para el ID
        SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);

        cmd->Prepare();

        // Asignar valores a los parámetros
        cmd->Parameters["@username"]->Value = user->NombreUsuario;
        cmd->Parameters["@password"]->Value = user->Contrasenha;
        cmd->Parameters["@name"]->Value = user->Nombre;
        cmd->Parameters["@lastname"]->Value = user->Apelllido;
        cmd->Parameters["@status"]->Value = 'A';  // Suponiendo que el estado es 'A' (activo)
        cmd->Parameters["@document_number"]->Value = user->NumeroTelefono.ToString();
        cmd->Parameters["@document_type"]->Value = '1';  // Suponiendo que es un DNI
        cmd->Parameters["@birthday"]->Value = user->FechaFirst;
        cmd->Parameters["@address"]->Value = "Dirección ejemplo";  // Asegúrate de asignar un valor a la dirección
        cmd->Parameters["@gender"]->Value = 'M';  // Suponiendo que es masculino
        cmd->Parameters["@phone_number"]->Value = user->NumeroTelefono.ToString();

        // Manejo de la foto
        if (user->Photo == nullptr)
            cmd->Parameters["@photo"]->Value = DBNull::Value;  // Si no hay foto, asignar DBNull
        else
            cmd->Parameters["@photo"]->Value = user->Photo;  // Asignar la foto si existe

        cmd->Parameters["@specialty"]->Value = user->Especialidad;
        cmd->Parameters["@intervention_count"]->Value = user->NumeroIntervenciones;

        /* Paso 3: Se ejecuta la sentencia SQL */
        cmd->ExecuteNonQuery();

        /* Paso 4: Se procesan los resultados */
        userId = Convert::ToInt32(cmd->Parameters["@id"]->Value);
    }
    catch (Exception^ ex) {
        // Guardar en el log o mandar un correo electrónico al Administrador
        throw ex;
    }
    finally {
        /* Paso 5: Se cierran los objetos de conexión */
        if (conn != nullptr) conn->Close();
    }
    return userId;
}

int RobotMineroPersistencia::Persistance::UpdateOperario(Operario^ user)
{
    int res = 0;
    SqlConnection^ conn;
    try {
        /* Paso 1: Se obtiene la conexión */
        conn = GetConnection();

        /* Paso 2: Se prepara la sentencia SQL */
        String^ sqlStr = "dbo.usp_UpdateOperario";  // Asegúrate de tener el procedimiento almacenado correspondiente
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Definir los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@id", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@password", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@lastname", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@status", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@document_number", System::Data::SqlDbType::VarChar, 11);
        cmd->Parameters->Add("@document_type", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@birthday", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@address", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@gender", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@phone_number", System::Data::SqlDbType::VarChar, 15);
        cmd->Parameters->Add("@photo", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@specialty", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@intervention_count", System::Data::SqlDbType::Int);

        cmd->Prepare();

        // Asignar valores a los parámetros
        cmd->Parameters["@id"]->Value = user->Id;
        cmd->Parameters["@username"]->Value = user->NombreUsuario;
        cmd->Parameters["@password"]->Value = user->Contrasenha;
        cmd->Parameters["@name"]->Value = user->Nombre;
        cmd->Parameters["@lastname"]->Value = user->Apelllido;
        cmd->Parameters["@status"]->Value = 'A';  // Suponiendo que el estado es 'A' (activo)
        cmd->Parameters["@document_number"]->Value = user->NumeroTelefono.ToString();
        cmd->Parameters["@document_type"]->Value = '1';  // Suponiendo que es un DNI
        cmd->Parameters["@birthday"]->Value = user->FechaFirst;
        cmd->Parameters["@address"]->Value = "Dirección ejemplo";  // Asegúrate de asignar un valor a la dirección
        cmd->Parameters["@gender"]->Value = 'M';  // Suponiendo que es masculino
        cmd->Parameters["@phone_number"]->Value = user->NumeroTelefono.ToString();

        // Manejo de la foto
        if (user->Photo == nullptr)
            cmd->Parameters["@photo"]->Value = DBNull::Value;  // Si no hay foto, asignar DBNull
        else
            cmd->Parameters["@photo"]->Value = user->Photo;  // Asignar la foto si existe

        cmd->Parameters["@specialty"]->Value = user->Especialidad;
        cmd->Parameters["@intervention_count"]->Value = user->NumeroIntervenciones;

        /* Paso 3: Se ejecuta la sentencia SQL */
        res = cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        // Guardar en el log o mandar un correo electrónico al Administrador
        throw ex;
    }
    finally {
        /* Paso 5: Se cierran los objetos de conexión */
        if (conn != nullptr) conn->Close();
    }
    return res;
}

List<Operario^>^ RobotMineroPersistencia::Persistance::QueryAllOperario()
{
    List<Operario^>^ operariosList = gcnew List<Operario^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        // Paso 1: Se obtiene la conexión
        conn = GetConnection();

        // Paso 2: Se prepara la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllOperarios";  // Asume que tienes el procedimiento almacenado creado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        // Paso 3: Se ejecuta la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Se procesan los resultados
        while (reader->Read()) {
            Operario^ operario = gcnew Operario();
            operario->Id = Convert::ToInt32(reader["ID"]->ToString());
            operario->NombreUsuario = reader["USERNAME"]->ToString();
            operario->Contrasenha = reader["PASSWORD"]->ToString();
            operario->Nombre = reader["NAME"]->ToString();
            operario->Apelllido = reader["LASTNAME"]->ToString();
            operario->Salario = Convert::ToDouble(reader["SALARY"]->ToString());
            operario->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]);
            operario->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]);
            operario->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]);
            operario->Edad = Convert::ToInt32(reader["EDAD"]);

            // Verificar si la foto está presente
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                operario->Photo = (array<Byte>^)reader["PHOTO"];

            // Añadir a la lista
            operariosList->Add(operario);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Se cierran los objetos de conexión
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return operariosList;
}

Operario^ RobotMineroPersistencia::Persistance::QueryOperarioById(int userId)
{
    Operario^ operario = nullptr;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        // Paso 1: Se obtiene la conexión
        conn = GetConnection();

        // Paso 2: Se prepara la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryOperarioById";  // Asume que tienes el procedimiento almacenado creado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@id"]->Value = userId;

        // Paso 3: Se ejecuta la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Se procesa el resultado
        if (reader->Read()) {
            operario = gcnew Operario();
            operario->Id = Convert::ToInt32(reader["ID"]->ToString());
            operario->NombreUsuario = reader["USERNAME"]->ToString();
            operario->Contrasenha = reader["PASSWORD"]->ToString();
            operario->Nombre = reader["NAME"]->ToString();
            operario->Apelllido = reader["LASTNAME"]->ToString();
            operario->Salario = Convert::ToDouble(reader["SALARY"]->ToString());
            operario->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]);
            operario->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]);
            operario->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]);
            operario->Edad = Convert::ToInt32(reader["EDAD"]);

            // Verificar si la foto está presente
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                operario->Photo = (array<Byte>^)reader["PHOTO"];
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Se cierran los objetos de conexión
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return operario;
}

int RobotMineroPersistencia::Persistance::AddPeon(Peon^ user)
{
    int userId;
    SqlConnection^ conn;
    try {
        /* Paso 1: Se obtiene la conexión */
        conn = GetConnection();

        /* Paso 2: Se prepara la sentencia SQL */
        String^ sqlStr = "dbo.usp_AddPeon";  // Asume que tienes el procedimiento almacenado creado para agregar un Peon
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Definir los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@password", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@lastname", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@status", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@document_number", System::Data::SqlDbType::VarChar, 11);
        cmd->Parameters->Add("@document_type", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@birthday", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@address", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@gender", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@phone_number", System::Data::SqlDbType::VarChar, 15);
        cmd->Parameters->Add("@photo", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@contacto_emergencia", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@condiciones_salud", System::Data::SqlDbType::VarChar, 255);
        cmd->Parameters->Add("@seguro_medico", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@last_check", System::Data::SqlDbType::DateTime);

        // Parámetro de salida para el ID
        SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);

        cmd->Prepare();

        // Asignar valores a los parámetros
        cmd->Parameters["@username"]->Value = user->NombreUsuario;
        cmd->Parameters["@password"]->Value = user->Contrasenha;
        cmd->Parameters["@name"]->Value = user->Nombre;
        cmd->Parameters["@lastname"]->Value = user->Apelllido;
        cmd->Parameters["@status"]->Value = 'A';  // Asumiendo que el estado es 'A' (activo)
        cmd->Parameters["@document_number"]->Value = user->NumeroTelefono.ToString();
        cmd->Parameters["@document_type"]->Value = '1';  // Suponiendo que es un DNI
        cmd->Parameters["@birthday"]->Value = user->FechaFirst;
        cmd->Parameters["@address"]->Value = "Dirección ejemplo";  // Asegúrate de asignar un valor a la dirección
        cmd->Parameters["@gender"]->Value = 'M';  // Suponiendo que es masculino
        cmd->Parameters["@phone_number"]->Value = user->NumeroTelefono.ToString();

        // Manejo de la foto
        if (user->Photo == nullptr)
            cmd->Parameters["@photo"]->Value = DBNull::Value;  // Si no hay foto, asignar DBNull
        else
            cmd->Parameters["@photo"]->Value = user->Photo;  // Asignar la foto si existe

        // Asignar los valores específicos para Peon
        cmd->Parameters["@contacto_emergencia"]->Value = user->ContactoEmergencia;
        cmd->Parameters["@condiciones_salud"]->Value = user->CondicionesSalud;
        cmd->Parameters["@seguro_medico"]->Value = user->SeguroMedico;
        cmd->Parameters["@last_check"]->Value = user->LastCheck;

        /* Paso 3: Se ejecuta la sentencia SQL */
        cmd->ExecuteNonQuery();

        /* Paso 4: Se procesan los resultados */
        userId = Convert::ToInt32(cmd->Parameters["@id"]->Value);
    }
    catch (Exception^ ex) {
        // Guardar en el log o mandar un correo electrónico al Administrador
        throw ex;
    }
    finally {
        /* Paso 5: Se cierran los objetos de conexión */
        if (conn != nullptr) conn->Close();
    }
    return userId;
}

int RobotMineroPersistencia::Persistance::UpdatePeon(Peon^ user)
{
    int res = 0;
    SqlConnection^ conn;
    try {
        /* Paso 1: Se obtiene la conexión */
        conn = GetConnection();

        /* Paso 2: Se prepara la sentencia SQL */
        String^ sqlStr = "dbo.usp_UpdatePeon";  // Asegúrate de que el procedimiento almacenado exista en la base de datos
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Definir los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@id", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@password", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@lastname", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@status", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@document_number", System::Data::SqlDbType::VarChar, 11);
        cmd->Parameters->Add("@document_type", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@birthday", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@address", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@gender", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@phone_number", System::Data::SqlDbType::VarChar, 15);
        cmd->Parameters->Add("@photo", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@contacto_emergencia", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@condiciones_salud", System::Data::SqlDbType::VarChar, 255);
        cmd->Parameters->Add("@seguro_medico", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@last_check", System::Data::SqlDbType::DateTime);

        cmd->Prepare();

        // Asignar valores a los parámetros
        cmd->Parameters["@id"]->Value = user->Id;
        cmd->Parameters["@username"]->Value = user->NombreUsuario;
        cmd->Parameters["@password"]->Value = user->Contrasenha;
        cmd->Parameters["@name"]->Value = user->Nombre;
        cmd->Parameters["@lastname"]->Value = user->Apelllido;
        cmd->Parameters["@status"]->Value = 'A';  // Suponiendo que el estado es 'A' (activo)
        cmd->Parameters["@document_number"]->Value = user->NumeroTelefono.ToString();
        cmd->Parameters["@document_type"]->Value = '1';  // Suponiendo que es un DNI
        cmd->Parameters["@birthday"]->Value = user->FechaFirst;
        cmd->Parameters["@address"]->Value = "Dirección ejemplo";  // Asegúrate de asignar un valor a la dirección
        cmd->Parameters["@gender"]->Value = 'M';  // Suponiendo que es masculino
        cmd->Parameters["@phone_number"]->Value = user->NumeroTelefono.ToString();

        // Manejo de la foto
        if (user->Photo == nullptr)
            cmd->Parameters["@photo"]->Value = DBNull::Value;  // Si no hay foto, asignar DBNull
        else
            cmd->Parameters["@photo"]->Value = user->Photo;  // Asignar la foto si existe

        // Asignar los valores específicos para Peon
        cmd->Parameters["@contacto_emergencia"]->Value = user->ContactoEmergencia;
        cmd->Parameters["@condiciones_salud"]->Value = user->CondicionesSalud;
        cmd->Parameters["@seguro_medico"]->Value = user->SeguroMedico;
        cmd->Parameters["@last_check"]->Value = user->LastCheck;

        /* Paso 3: Se ejecuta la sentencia SQL */
        res = cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        // Guardar en el log o mandar un correo electrónico al Administrador
        throw ex;
    }
    finally {
        /* Paso 4: Se cierran los objetos de conexión */
        if (conn != nullptr) conn->Close();
    }
    return res;
}

List<Peon^>^ RobotMineroPersistencia::Persistance::QueryAllPeon()
{
    List<Peon^>^ peonList = gcnew List<Peon^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        // Paso 1: Se obtiene la conexión
        conn = GetConnection();

        // Paso 2: Se prepara la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllPeon";  // Asegúrate de que el procedimiento almacenado exista
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        // Paso 3: Se ejecuta la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Se procesan los resultados
        while (reader->Read()) {
            Peon^ peon = gcnew Peon();

            peon->Id = Convert::ToInt32(reader["ID"]->ToString());
            peon->NombreUsuario = reader["USERNAME"]->ToString();
            peon->Contrasenha = reader["PASSWORD"]->ToString();
            peon->Nombre = reader["NAME"]->ToString();
            peon->Apelllido = reader["LASTNAME"]->ToString();
            peon->Salario = Convert::ToDouble(reader["SALARY"]->ToString());
            peon->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]);
            peon->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]);
            peon->Edad = Convert::ToInt32(reader["EDAD"]->ToString());
            peon->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]->ToString());

            // Asignar el valor de Photo si no es DBNull
            if (!DBNull::Value->Equals(reader["PHOTO"])) {
                peon->Photo = (array<Byte>^)reader["PHOTO"];
            }

            peon->ContactoEmergencia = Convert::ToInt32(reader["CONTACTOEMERGENCIA"]->ToString());
            peon->CondicionesSalud = reader["CONDICIONESSALUD"]->ToString();
            peon->SeguroMedico = reader["SEGUROMEDICO"]->ToString();
            peon->LastCheck = Convert::ToDateTime(reader["LASTCHECK"]);

            peonList->Add(peon);  // Agregar el Peon a la lista
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Se cierran los objetos de conexión
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return peonList;
}

Peon^ RobotMineroPersistencia::Persistance::QueryPeonById(int userId)
{
    Peon^ peon = nullptr;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        // Paso 1: Se obtiene la conexión
        conn = GetConnection();

        // Paso 2: Se prepara la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryPeonById";  // Asegúrate de que el procedimiento almacenado exista
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@id"]->Value = userId;

        // Paso 3: Se ejecuta la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Se procesan los resultados
        if (reader->Read()) {
            peon = gcnew Peon();

            peon->Id = Convert::ToInt32(reader["ID"]->ToString());
            peon->NombreUsuario = reader["USERNAME"]->ToString();
            peon->Contrasenha = reader["PASSWORD"]->ToString();
            peon->Nombre = reader["NAME"]->ToString();
            peon->Apelllido = reader["LASTNAME"]->ToString();
            peon->Salario = Convert::ToDouble(reader["SALARY"]->ToString());
            peon->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]);
            peon->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]);
            peon->Edad = Convert::ToInt32(reader["EDAD"]->ToString());
            peon->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]->ToString());

            // Asignar el valor de Photo si no es DBNull
            if (!DBNull::Value->Equals(reader["PHOTO"])) {
                peon->Photo = (array<Byte>^)reader["PHOTO"];
            }

            peon->ContactoEmergencia = Convert::ToInt32(reader["CONTACTOEMERGENCIA"]->ToString());
            peon->CondicionesSalud = reader["CONDICIONESSALUD"]->ToString();
            peon->SeguroMedico = reader["SEGUROMEDICO"]->ToString();
            peon->LastCheck = Convert::ToDateTime(reader["LASTCHECK"]);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Se cierran los objetos de conexión
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return peon;
}


