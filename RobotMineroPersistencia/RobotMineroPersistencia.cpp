#include "pch.h"

#include "RobotMineroPersistencia.h"

using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

SqlConnection^ RobotMineroPersistencia::Persistance::GetConnection()
{
    SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "TwGg3N93EFqA$";
    String^ serverName = "200.16.7.140";
    conn->ConnectionString = "Server=" + serverName + ";Database=a20220681;User ID=a20220681;Password=" + password + ";";
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

/////////////Metodos CRUD//////////////

int RobotMineroPersistencia::Persistance::AddUsuarioP(Usuario^ usuario)
{
    int NewUserId;
    SqlConnection^ conn;
    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la llamada al procedimiento almacenado
        String^ sqlStr = "dbo.usp_AddUserP";  // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Paso 3: Definir los parámetros que acepta el procedimiento almacenado
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@NOMBREUSUARIO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@SALARIO", System::Data::SqlDbType::Decimal);
        cmd->Parameters->Add("@CONTRASENHA", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@FECHAFIRST", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@FECHAEND", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::VarBinary);
        cmd->Parameters->Add("@EDAD", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NUMEROTELEFONO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@CARGO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters["@ID"]->Direction = System::Data::ParameterDirection::Output;

        // Paso 4: Preparar los valores de los parámetros con los datos del usuario
        cmd->Prepare();
        cmd->Parameters["@NOMBRE"]->Value = usuario->Nombre;
        cmd->Parameters["@NOMBREUSUARIO"]->Value = usuario->NombreUsuario;
        cmd->Parameters["@APELLIDO"]->Value = usuario->Apelllido;
        cmd->Parameters["@SALARIO"]->Value = usuario->Salario;
        cmd->Parameters["@CONTRASENHA"]->Value = usuario->contrasenha;
        cmd->Parameters["@FECHAFIRST"]->Value = usuario->FechaFirst;
        cmd->Parameters["@FECHAEND"]->Value = usuario->FechaEnd;
        cmd->Parameters["@PHOTO"]->Value = usuario->Photo;
        cmd->Parameters["@EDAD"]->Value = usuario->Edad;
        cmd->Parameters["@NUMEROTELEFONO"]->Value = usuario->NumeroTelefono;
        cmd->Parameters["@CARGO"]->Value = usuario->Cargo;

        // Paso 5: Ejecutar el procedimiento almacenado
        cmd->ExecuteNonQuery();

        // Obtener el ID del nuevo usuario insertado (valor de salida)
        NewUserId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        // Si ocurre un error, lo lanzamos de nuevo
        throw ex;
    }
    finally {
        // Cerrar la conexión si no es nula
        if (conn != nullptr) conn->Close();
    }
    return NewUserId;
}














int RobotMineroPersistencia::Persistance::AddPeonP(Peon^ peon)
{
    int NewPeonId;
    SqlConnection^ conn;
    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la llamada al procedimiento almacenado
        String^ sqlStr = "dbo.usp_AddPeonP";  // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Paso 3: Definir los parámetros que acepta el procedimiento almacenado
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@NOMBREUSUARIO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@SALARIO", System::Data::SqlDbType::Decimal);
        cmd->Parameters->Add("@CONTRASENHA", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@FECHAFIRST", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@FECHAEND", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::VarBinary);
        cmd->Parameters->Add("@EDAD", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NUMEROTELEFONO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@CARGO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@CONTACTOEMERGENCIA", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@CONDICIONESSALUD", System::Data::SqlDbType::NVarChar, 255);
        cmd->Parameters->Add("@SEGUROMEDICO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@LASTCHECK", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters["@ID"]->Direction = System::Data::ParameterDirection::Output;

        // Paso 4: Preparar los valores de los parámetros con los datos del peón
        cmd->Prepare();
        cmd->Parameters["@NOMBRE"]->Value = peon->Nombre;
        cmd->Parameters["@NOMBREUSUARIO"]->Value = peon->NombreUsuario;
        cmd->Parameters["@APELLIDO"]->Value = peon->Apellido;
        cmd->Parameters["@SALARIO"]->Value = peon->Salario;
        cmd->Parameters["@CONTRASENHA"]->Value = peon->Contrasenha;
        cmd->Parameters["@FECHAFIRST"]->Value = peon->FechaFirst;
        cmd->Parameters["@FECHAEND"]->Value = peon->FechaEnd;
        cmd->Parameters["@PHOTO"]->Value = peon->Photo;
        cmd->Parameters["@EDAD"]->Value = peon->Edad;
        cmd->Parameters["@NUMEROTELEFONO"]->Value = peon->NumeroTelefono;
        cmd->Parameters["@CARGO"]->Value = peon->Cargo;
        cmd->Parameters["@CONTACTOEMERGENCIA"]->Value = peon->ContactoEmergencia;
        cmd->Parameters["@CONDICIONESSALUD"]->Value = peon->CondicionesSalud;
        cmd->Parameters["@SEGUROMEDICO"]->Value = peon->SeguroMedico;
        cmd->Parameters["@LASTCHECK"]->Value = peon->LastCheck;

        // Paso 5: Ejecutar el procedimiento almacenado
        cmd->ExecuteNonQuery();

        // Obtener el ID del nuevo peón insertado (valor de salida)
        NewPeonId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        // Si ocurre un error, lo lanzamos de nuevo
        throw ex;
    }
    finally {
        // Cerrar la conexión si no es nula
        if (conn != nullptr) conn->Close();
    }
    return NewPeonId;
}




int RobotMineroPersistencia::Persistance::AddSupervisorP(Supervisor^ supervisor)
{
    int NewSupervisorId;
    SqlConnection^ conn;
    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la llamada al procedimiento almacenado
        String^ sqlStr = "dbo.usp_AddSupervisorP";  // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Paso 3: Definir los parámetros que acepta el procedimiento almacenado
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@NOMBREUSUARIO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@SALARIO", System::Data::SqlDbType::Decimal);
        cmd->Parameters->Add("@CONTRASENHA", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@FECHAFIRST", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@FECHAEND", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::VarBinary);
        cmd->Parameters->Add("@EDAD", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NUMEROTELEFONO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@CARGO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@CAPACITACION", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@ENTCAPACITACION", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@SEGUROSUPERVISOR", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters["@ID"]->Direction = System::Data::ParameterDirection::Output;

        // Paso 4: Preparar los valores de los parámetros con los datos del supervisor
        cmd->Prepare();
        cmd->Parameters["@NOMBRE"]->Value = supervisor->Nombre;
        cmd->Parameters["@NOMBREUSUARIO"]->Value = supervisor->NombreUsuario;
        cmd->Parameters["@APELLIDO"]->Value = supervisor->Apellido;
        cmd->Parameters["@SALARIO"]->Value = supervisor->Salario;
        cmd->Parameters["@CONTRASENHA"]->Value = supervisor->Contrasenha;
        cmd->Parameters["@FECHAFIRST"]->Value = supervisor->FechaFirst;
        cmd->Parameters["@FECHAEND"]->Value = supervisor->FechaEnd;
        cmd->Parameters["@PHOTO"]->Value = supervisor->Photo;
        cmd->Parameters["@EDAD"]->Value = supervisor->Edad;
        cmd->Parameters["@NUMEROTELEFONO"]->Value = supervisor->NumeroTelefono;
        cmd->Parameters["@CARGO"]->Value = supervisor->Cargo;
        cmd->Parameters["@CAPACITACION"]->Value = supervisor->Capacitacion;
        cmd->Parameters["@ENTCAPACITACION"]->Value = supervisor->EntCapacitacion;
        cmd->Parameters["@SEGUROSUPERVISOR"]->Value = supervisor->SeguroSupervisor;

        // Paso 5: Ejecutar el procedimiento almacenado
        cmd->ExecuteNonQuery();

        // Obtener el ID del nuevo supervisor insertado (valor de salida)
        NewSupervisorId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        // Si ocurre un error, lo lanzamos de nuevo
        throw ex;
    }
    finally {
        // Cerrar la conexión si no es nula
        if (conn != nullptr) conn->Close();
    }
    return NewSupervisorId;
}




int RobotMineroPersistencia::Persistance::AddIngenieroP(IngAmbiental^ ingeniero)
{
    int NewIngenieroId;
    SqlConnection^ conn;
    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la llamada al procedimiento almacenado
        String^ sqlStr = "dbo.usp_AddIngenieroP";  // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Paso 3: Definir los parámetros que acepta el procedimiento almacenado
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@NOMBREUSUARIO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@SALARIO", System::Data::SqlDbType::Decimal);
        cmd->Parameters->Add("@CONTRASENHA", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@FECHAFIRST", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@FECHAEND", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::VarBinary);
        cmd->Parameters->Add("@EDAD", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NUMEROTELEFONO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@CARGO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@ESPECIALIZACION", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@NUMEROLICENCIA", System::Data::SqlDbType::NVarChar, 50);
        cmd->Parameters->Add("@ENTIDADCERTIFICADORA", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters["@ID"]->Direction = System::Data::ParameterDirection::Output;

        // Paso 4: Preparar los valores de los parámetros con los datos del ingeniero
        cmd->Prepare();
        cmd->Parameters["@NOMBRE"]->Value = ingeniero->Nombre;
        cmd->Parameters["@NOMBREUSUARIO"]->Value = ingeniero->NombreUsuario;
        cmd->Parameters["@APELLIDO"]->Value = ingeniero->Apellido;
        cmd->Parameters["@SALARIO"]->Value = ingeniero->Salario;
        cmd->Parameters["@CONTRASENHA"]->Value = ingeniero->Contrasenha;
        cmd->Parameters["@FECHAFIRST"]->Value = ingeniero->FechaFirst;
        cmd->Parameters["@FECHAEND"]->Value = ingeniero->FechaEnd;
        cmd->Parameters["@PHOTO"]->Value = ingeniero->Photo;
        cmd->Parameters["@EDAD"]->Value = ingeniero->Edad;
        cmd->Parameters["@NUMEROTELEFONO"]->Value = ingeniero->NumeroTelefono;
        cmd->Parameters["@CARGO"]->Value = ingeniero->Cargo;
        cmd->Parameters["@ESPECIALIZACION"]->Value = ingeniero->Especializacion;
        cmd->Parameters["@NUMEROLICENCIA"]->Value = ingeniero->NumeroLicencia;
        cmd->Parameters["@ENTIDADCERTIFICADORA"]->Value = ingeniero->EntidadCertificadora;

        // Paso 5: Ejecutar el procedimiento almacenado
        cmd->ExecuteNonQuery();

        // Obtener el ID del nuevo ingeniero insertado (valor de salida)
        NewIngenieroId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        // Si ocurre un error, lo lanzamos de nuevo
        throw ex;
    }
    finally {
        // Cerrar la conexión si no es nula
        if (conn != nullptr) conn->Close();
    }
    return NewIngenieroId;
}




int RobotMineroPersistencia::Persistance::AddOperarioP(Operario^ operario)
{
    int NewOperarioId;
    SqlConnection^ conn;
    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la llamada al procedimiento almacenado
        String^ sqlStr = "dbo.usp_AddOperarioP";  // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Paso 3: Definir los parámetros que acepta el procedimiento almacenado
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@NOMBREUSUARIO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@SALARIO", System::Data::SqlDbType::Decimal);
        cmd->Parameters->Add("@CONTRASENHA", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@FECHAFIRST", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@FECHAEND", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::VarBinary);
        cmd->Parameters->Add("@EDAD", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NUMEROTELEFONO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@CARGO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@ESPECIALIDAD", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@NUMEROINTERVENCIONES", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters["@ID"]->Direction = System::Data::ParameterDirection::Output;

        // Paso 4: Preparar los valores de los parámetros con los datos del operario
        cmd->Prepare();
        cmd->Parameters["@NOMBRE"]->Value = operario->Nombre;
        cmd->Parameters["@NOMBREUSUARIO"]->Value = operario->NombreUsuario;
        cmd->Parameters["@APELLIDO"]->Value = operario->Apellido;
        cmd->Parameters["@SALARIO"]->Value = operario->Salario;
        cmd->Parameters["@CONTRASENHA"]->Value = operario->Contrasenha;
        cmd->Parameters["@FECHAFIRST"]->Value = operario->FechaFirst;
        cmd->Parameters["@FECHAEND"]->Value = operario->FechaEnd;
        cmd->Parameters["@PHOTO"]->Value = operario->Photo;
        cmd->Parameters["@EDAD"]->Value = operario->Edad;
        cmd->Parameters["@NUMEROTELEFONO"]->Value = operario->NumeroTelefono;
        cmd->Parameters["@CARGO"]->Value = operario->Cargo;
        cmd->Parameters["@ESPECIALIDAD"]->Value = operario->Especialidad;
        cmd->Parameters["@NUMEROINTERVENCIONES"]->Value = operario->NumeroIntervenciones;

        // Paso 5: Ejecutar el procedimiento almacenado
        cmd->ExecuteNonQuery();

        // Obtener el ID del nuevo operario insertado (valor de salida)
        NewOperarioId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        // Si ocurre un error, lo lanzamos de nuevo
        throw ex;
    }
    finally {
        // Cerrar la conexión si no es nula
        if (conn != nullptr) conn->Close();
    }
    return NewOperarioId;
}



int RobotMineroPersistencia::Persistance::UpdateUsuarioP(Usuario^ usuario)
{
    SqlConnection^ conn;
    try {
        // Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_UpdateUserP";  // Procedimiento almacenado para actualizar un Usuario
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Definir los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@NOMBREUSUARIO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@SALARIO", System::Data::SqlDbType::Decimal);
        cmd->Parameters->Add("@CONTRASENHA", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@FECHAFIRST", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@FECHAEND", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::VarBinary);
        cmd->Parameters->Add("@EDAD", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NUMEROTELEFONO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@CARGO", System::Data::SqlDbType::NVarChar, 100);

        // Asignar valores a los parámetros
        cmd->Parameters["@ID"]->Value = usuario->Id;
        cmd->Parameters["@NOMBRE"]->Value = usuario->Nombre;
        cmd->Parameters["@NOMBREUSUARIO"]->Value = usuario->NombreUsuario;
        cmd->Parameters["@APELLIDO"]->Value = usuario->Apellido;
        cmd->Parameters["@SALARIO"]->Value = usuario->Salario;
        cmd->Parameters["@CONTRASENHA"]->Value = usuario->Contrasenha;
        cmd->Parameters["@FECHAFIRST"]->Value = usuario->FechaFirst;
        cmd->Parameters["@FECHAEND"]->Value = usuario->FechaEnd;
        cmd->Parameters["@PHOTO"]->Value = usuario->Photo;
        cmd->Parameters["@EDAD"]->Value = usuario->Edad;
        cmd->Parameters["@NUMEROTELEFONO"]->Value = usuario->NumeroTelefono;
        cmd->Parameters["@CARGO"]->Value = usuario->Cargo;

        // Paso 3: Ejecutar la sentencia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 4: Cerrar la conexión a la base de datos
        if (conn != nullptr) conn->Close();
    }
    return 1;  // Retornar 1 si la actualización es exitosa
}




int RobotMineroPersistencia::Persistance::UpdatePeonP(Peon^ peon)
{
    SqlConnection^ conn;
    try {
        // Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_UpdatePeonP";  // Procedimiento almacenado para actualizar un Peón
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Definir los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@NOMBREUSUARIO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@SALARIO", System::Data::SqlDbType::Decimal);
        cmd->Parameters->Add("@CONTRASENHA", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@FECHAFIRST", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@FECHAEND", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::VarBinary);
        cmd->Parameters->Add("@EDAD", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NUMEROTELEFONO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@CARGO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@CONTACTOEMERGENCIA", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@CONDICIONESSALUD", System::Data::SqlDbType::NVarChar, 255);
        cmd->Parameters->Add("@SEGUROMEDICO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@LASTCHECK", System::Data::SqlDbType::DateTime);

        // Asignar valores a los parámetros
        cmd->Parameters["@ID"]->Value = peon->Id;
        cmd->Parameters["@NOMBRE"]->Value = peon->Nombre;
        cmd->Parameters["@NOMBREUSUARIO"]->Value = peon->NombreUsuario;
        cmd->Parameters["@APELLIDO"]->Value = peon->Apellido;
        cmd->Parameters["@SALARIO"]->Value = peon->Salario;
        cmd->Parameters["@CONTRASENHA"]->Value = peon->Contrasenha;
        cmd->Parameters["@FECHAFIRST"]->Value = peon->FechaFirst;
        cmd->Parameters["@FECHAEND"]->Value = peon->FechaEnd;
        cmd->Parameters["@PHOTO"]->Value = peon->Photo;
        cmd->Parameters["@EDAD"]->Value = peon->Edad;
        cmd->Parameters["@NUMEROTELEFONO"]->Value = peon->NumeroTelefono;
        cmd->Parameters["@CARGO"]->Value = peon->Cargo;
        cmd->Parameters["@CONTACTOEMERGENCIA"]->Value = peon->ContactoEmergencia;
        cmd->Parameters["@CONDICIONESSALUD"]->Value = peon->CondicionesSalud;
        cmd->Parameters["@SEGUROMEDICO"]->Value = peon->SeguroMedico;
        cmd->Parameters["@LASTCHECK"]->Value = peon->LastCheck;

        // Paso 3: Ejecutar la sentencia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 4: Cerrar la conexión a la base de datos
        if (conn != nullptr) conn->Close();
    }
    return 1;  // Retornar 1 si la actualización es exitosa
}





int RobotMineroPersistencia::Persistance::UpdateSupervisorP(Supervisor^ supervisor)
{
    SqlConnection^ conn;
    try {
        // Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_UpdateSupervisorP";  // Procedimiento almacenado para actualizar un Supervisor
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Definir los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@NOMBREUSUARIO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@SALARIO", System::Data::SqlDbType::Decimal);
        cmd->Parameters->Add("@CONTRASENHA", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@FECHAFIRST", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@FECHAEND", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::VarBinary);
        cmd->Parameters->Add("@EDAD", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NUMEROTELEFONO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@CARGO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@CAPACITACION", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@ENTCAPACITACION", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@SEGUROSUPERVISOR", System::Data::SqlDbType::NVarChar, 100);

        // Asignar valores a los parámetros
        cmd->Parameters["@ID"]->Value = supervisor->Id;
        cmd->Parameters["@NOMBRE"]->Value = supervisor->Nombre;
        cmd->Parameters["@NOMBREUSUARIO"]->Value = supervisor->NombreUsuario;
        cmd->Parameters["@APELLIDO"]->Value = supervisor->Apellido;
        cmd->Parameters["@SALARIO"]->Value = supervisor->Salario;
        cmd->Parameters["@CONTRASENHA"]->Value = supervisor->Contrasenha;
        cmd->Parameters["@FECHAFIRST"]->Value = supervisor->FechaFirst;
        cmd->Parameters["@FECHAEND"]->Value = supervisor->FechaEnd;
        cmd->Parameters["@PHOTO"]->Value = supervisor->Photo;
        cmd->Parameters["@EDAD"]->Value = supervisor->Edad;
        cmd->Parameters["@NUMEROTELEFONO"]->Value = supervisor->NumeroTelefono;
        cmd->Parameters["@CARGO"]->Value = supervisor->Cargo;
        cmd->Parameters["@CAPACITACION"]->Value = supervisor->Capacitacion;
        cmd->Parameters["@ENTCAPACITACION"]->Value = supervisor->EntCapacitacion;
        cmd->Parameters["@SEGUROSUPERVISOR"]->Value = supervisor->SeguroSupervisor;

        // Paso 3: Ejecutar la sentencia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 4: Cerrar la conexión a la base de datos
        if (conn != nullptr) conn->Close();
    }
    return 1;  // Retornar 1 si la actualización es exitosa
}



int RobotMineroPersistencia::Persistance::UpdateIngenieroP(IngAmbiental^ ingeniero)
{
    SqlConnection^ conn;
    try {
        // Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_UpdateIngAmbientalP";  // Procedimiento almacenado para actualizar un Ingeniero Ambiental
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Definir los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@NOMBREUSUARIO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@SALARIO", System::Data::SqlDbType::Decimal);
        cmd->Parameters->Add("@CONTRASENHA", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@FECHAFIRST", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@FECHAEND", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::VarBinary);
        cmd->Parameters->Add("@EDAD", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NUMEROTELEFONO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@CARGO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@ESPECIALIZACION", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@NUMEROLICENCIA", System::Data::SqlDbType::NVarChar, 50);
        cmd->Parameters->Add("@ENTIDADCERTIFICADORA", System::Data::SqlDbType::NVarChar, 100);

        // Asignar valores a los parámetros
        cmd->Parameters["@ID"]->Value = ingeniero->Id;
        cmd->Parameters["@NOMBRE"]->Value = ingeniero->Nombre;
        cmd->Parameters["@NOMBREUSUARIO"]->Value = ingeniero->NombreUsuario;
        cmd->Parameters["@APELLIDO"]->Value = ingeniero->Apellido;
        cmd->Parameters["@SALARIO"]->Value = ingeniero->Salario;
        cmd->Parameters["@CONTRASENHA"]->Value = ingeniero->Contrasenha;
        cmd->Parameters["@FECHAFIRST"]->Value = ingeniero->FechaFirst;
        cmd->Parameters["@FECHAEND"]->Value = ingeniero->FechaEnd;
        cmd->Parameters["@PHOTO"]->Value = ingeniero->Photo;
        cmd->Parameters["@EDAD"]->Value = ingeniero->Edad;
        cmd->Parameters["@NUMEROTELEFONO"]->Value = ingeniero->NumeroTelefono;
        cmd->Parameters["@CARGO"]->Value = ingeniero->Cargo;
        cmd->Parameters["@ESPECIALIZACION"]->Value = ingeniero->Especializacion;
        cmd->Parameters["@NUMEROLICENCIA"]->Value = ingeniero->NumeroLicencia;
        cmd->Parameters["@ENTIDADCERTIFICADORA"]->Value = ingeniero->EntidadCertificadora;

        // Paso 3: Ejecutar la sentencia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 4: Cerrar la conexión a la base de datos
        if (conn != nullptr) conn->Close();
    }
    return 1;  // Retornar 1 si la actualización es exitosa
}



int RobotMineroPersistencia::Persistance::UpdateOperarioP(Operario^ operario)
{
    SqlConnection^ conn;
    try {
        // Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_UpdateOperarioP";  // Procedimiento almacenado para actualizar un Operario
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Definir los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@NOMBREUSUARIO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@SALARIO", System::Data::SqlDbType::Decimal);
        cmd->Parameters->Add("@CONTRASENHA", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@FECHAFIRST", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@FECHAEND", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::VarBinary);
        cmd->Parameters->Add("@EDAD", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NUMEROTELEFONO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@CARGO", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@ESPECIALIDAD", System::Data::SqlDbType::NVarChar, 100);
        cmd->Parameters->Add("@NUMEROINTERVENCIONES", System::Data::SqlDbType::Int);

        // Asignar valores a los parámetros
        cmd->Parameters["@ID"]->Value = operario->Id;
        cmd->Parameters["@NOMBRE"]->Value = operario->Nombre;
        cmd->Parameters["@NOMBREUSUARIO"]->Value = operario->NombreUsuario;
        cmd->Parameters["@APELLIDO"]->Value = operario->Apellido;
        cmd->Parameters["@SALARIO"]->Value = operario->Salario;
        cmd->Parameters["@CONTRASENHA"]->Value = operario->Contrasenha;
        cmd->Parameters["@FECHAFIRST"]->Value = operario->FechaFirst;
        cmd->Parameters["@FECHAEND"]->Value = operario->FechaEnd;
        cmd->Parameters["@PHOTO"]->Value = operario->Photo;
        cmd->Parameters["@EDAD"]->Value = operario->Edad;
        cmd->Parameters["@NUMEROTELEFONO"]->Value = operario->NumeroTelefono;
        cmd->Parameters["@CARGO"]->Value = operario->Cargo;
        cmd->Parameters["@ESPECIALIDAD"]->Value = operario->Especialidad;
        cmd->Parameters["@NUMEROINTERVENCIONES"]->Value = operario->NumeroIntervenciones;

        // Paso 3: Ejecutar la sentencia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 4: Cerrar la conexión a la base de datos
        if (conn != nullptr) conn->Close();
    }
    return 1;  // Retornar 1 si la actualización es exitosa
}



















int RobotMineroPersistencia::Persistance::DeleteUsuarioP(int usuarioId)
{
    SqlConnection^ conn;
    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_DeleteUserP";  // Procedimiento almacenado para eliminar un Usuario
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters["@ID"]->Value = usuarioId;

        // Paso 3: Ejecutar la sentencia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 4: Cerrar la conexión a la base de datos
        if (conn != nullptr) conn->Close();
    }
    return 1;  // Retornar 1 si la eliminación es exitosa
}


int RobotMineroPersistencia::Persistance::DeletePeonP(int peonId)
{
    SqlConnection^ conn;
    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_DeletePeonP";  // Procedimiento almacenado para eliminar un Peón
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters["@ID"]->Value = peonId;

        // Paso 3: Ejecutar la sentencia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 4: Cerrar la conexión a la base de datos
        if (conn != nullptr) conn->Close();
    }
    return 1;  // Retornar 1 si la eliminación es exitosa
}



int RobotMineroPersistencia::Persistance::DeleteSupervisorP(int supervisorId)
{
    SqlConnection^ conn;
    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_DeleteSupervisorP";  // Procedimiento almacenado para eliminar un Supervisor
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters["@ID"]->Value = supervisorId;

        // Paso 3: Ejecutar la sentencia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 4: Cerrar la conexión a la base de datos
        if (conn != nullptr) conn->Close();
    }
    return 1;  // Retornar 1 si la eliminación es exitosa
}




int RobotMineroPersistencia::Persistance::DeleteIngenieroP(int ingenieroId)
{
    SqlConnection^ conn;
    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_DeleteIngenieroP";  // Procedimiento almacenado para eliminar un Ingeniero Ambiental
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters["@ID"]->Value = ingenieroId;

        // Paso 3: Ejecutar la sentencia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 4: Cerrar la conexión a la base de datos
        if (conn != nullptr) conn->Close();
    }
    return 1;  // Retornar 1 si la eliminación es exitosa
}


int RobotMineroPersistencia::Persistance::DeleteOperarioP(int operarioId)
{
    SqlConnection^ conn;
    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la sentencia de BD
        String^ sqlStr = "dbo.usp_DeleteOperarioP";  // Procedimiento almacenado para eliminar un Operario
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters["@ID"]->Value = operarioId;

        // Paso 3: Ejecutar la sentencia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 4: Cerrar la conexión a la base de datos
        if (conn != nullptr) conn->Close();
    }
    return 1;  // Retornar 1 si la eliminación es exitosa
}







List<Usuario^>^ RobotMineroPersistencia::Persistance::QueryAllUsuariosP()
{
    List<Usuario^>^ usuariosList = gcnew List<Usuario^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        // Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllUsersP";  // Procedimiento almacenado para consultar todos los usuarios
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Procesar los resultados
        while (reader->Read()) {
            Usuario^ usuario = gcnew Usuario();
            usuario->Id = Convert::ToInt32(reader["ID"]->ToString());
            usuario->Nombre = reader["NOMBRE"]->ToString();
            usuario->NombreUsuario = reader["NOMBREUSUARIO"]->ToString();
            usuario->Apellido = reader["APELLIDO"]->ToString();
            usuario->Salario = Convert::ToDecimal(reader["SALARIO"]->ToString());
            usuario->Contrasenha = reader["CONTRASENHA"]->ToString();
            usuario->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]->ToString());
            usuario->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]->ToString());
            usuario->Photo = (array<Byte>^)reader["PHOTO"];
            usuario->Edad = Convert::ToInt32(reader["EDAD"]->ToString());
            usuario->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]->ToString());
            usuario->Cargo = reader["CARGO"]->ToString();

            usuariosList->Add(usuario);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Cerrar la conexión a la base de datos
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return usuariosList;
}


List<Peon^>^ RobotMineroPersistencia::Persistance::QueryAllPeonesP()
{
    List<Peon^>^ peonesList = gcnew List<Peon^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        // Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllPeonsP";  // Procedimiento almacenado para consultar todos los peones
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Procesar los resultados
        while (reader->Read()) {
            Peon^ peon = gcnew Peon();
            peon->Id = Convert::ToInt32(reader["ID"]->ToString());
            peon->Nombre = reader["NOMBRE"]->ToString();
            peon->NombreUsuario = reader["NOMBREUSUARIO"]->ToString();
            peon->Apellido = reader["APELLIDO"]->ToString();
            peon->Salario = Convert::ToDecimal(reader["SALARIO"]->ToString());
            peon->Contrasenha = reader["CONTRASENHA"]->ToString();
            peon->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]->ToString());
            peon->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]->ToString());
            peon->Photo = (array<Byte>^)reader["PHOTO"];
            peon->Edad = Convert::ToInt32(reader["EDAD"]->ToString());
            peon->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]->ToString());
            peon->Cargo = reader["CARGO"]->ToString();
            peon->ContactoEmergencia = Convert::ToInt32(reader["CONTACTOEMERGENCIA"]->ToString());
            peon->CondicionesSalud = reader["CONDICIONESSALUD"]->ToString();
            peon->SeguroMedico = reader["SEGUROMEDICO"]->ToString();
            peon->LastCheck = Convert::ToDateTime(reader["LASTCHECK"]->ToString());

            peonesList->Add(peon);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Cerrar la conexión a la base de datos
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return peonesList;
}


List<Supervisor^>^ RobotMineroPersistencia::Persistance::QueryAllSupervisoresP()
{
    List<Supervisor^>^ supervisoresList = gcnew List<Supervisor^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        // Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllSupervisorsP";  // Procedimiento almacenado para consultar todos los supervisores
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Procesar los resultados
        while (reader->Read()) {
            Supervisor^ supervisor = gcnew Supervisor();
            supervisor->Id = Convert::ToInt32(reader["ID"]->ToString());
            supervisor->Nombre = reader["NOMBRE"]->ToString();
            supervisor->NombreUsuario = reader["NOMBREUSUARIO"]->ToString();
            supervisor->Apellido = reader["APELLIDO"]->ToString();
            supervisor->Salario = Convert::ToDecimal(reader["SALARIO"]->ToString());
            supervisor->Contrasenha = reader["CONTRASENHA"]->ToString();
            supervisor->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]->ToString());
            supervisor->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]->ToString());
            supervisor->Photo = (array<Byte>^)reader["PHOTO"];
            supervisor->Edad = Convert::ToInt32(reader["EDAD"]->ToString());
            supervisor->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]->ToString());
            supervisor->Cargo = reader["CARGO"]->ToString();
            supervisor->Capacitacion = reader["CAPACITACION"]->ToString();
            supervisor->EntCapacitacion = reader["ENTCAPACITACION"]->ToString();
            supervisor->SeguroSupervisor = reader["SEGUROSUPERVISOR"]->ToString();

            supervisoresList->Add(supervisor);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Cerrar la conexión a la base de datos
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return supervisoresList;
}


List<IngAmbiental^>^ RobotMineroPersistencia::Persistance::QueryAllIngenierosP()
{
    List<IngAmbiental^>^ ingenierosList = gcnew List<IngAmbiental^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllIngAmbientalsP";  // Procedimiento almacenado para consultar todos los ingenieros ambientales
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Procesar los resultados
        while (reader->Read()) {
            IngAmbiental^ ingeniero = gcnew IngAmbiental();
            ingeniero->Id = Convert::ToInt32(reader["ID"]->ToString());
            ingeniero->Nombre = reader["NOMBRE"]->ToString();
            ingeniero->NombreUsuario = reader["NOMBREUSUARIO"]->ToString();
            ingeniero->Apellido = reader["APELLIDO"]->ToString();
            ingeniero->Salario = Convert::ToDecimal(reader["SALARIO"]->ToString());
            ingeniero->Contrasenha = reader["CONTRASENHA"]->ToString();
            ingeniero->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]->ToString());
            ingeniero->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]->ToString());
            ingeniero->Photo = (array<Byte>^)reader["PHOTO"];
            ingeniero->Edad = Convert::ToInt32(reader["EDAD"]->ToString());
            ingeniero->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]->ToString());
            ingeniero->Cargo = reader["CARGO"]->ToString();
            ingeniero->Especializacion = reader["ESPECIALIZACION"]->ToString();
            ingeniero->NumeroLicencia = reader["NUMEROLICENCIA"]->ToString();
            ingeniero->EntidadCertificadora = reader["ENTIDADCERTIFICADORA"]->ToString();

            ingenierosList->Add(ingeniero);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Cerrar la conexión a la base de datos
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return ingenierosList;
}


List<Operario^>^ RobotMineroPersistencia::Persistance::QueryAllOperariosP()
{
    List<Operario^>^ operariosList = gcnew List<Operario^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllOperariosP";  // Procedimiento almacenado para consultar todos los operarios
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Procesar los resultados
        while (reader->Read()) {
            Operario^ operario = gcnew Operario();
            operario->Id = Convert::ToInt32(reader["ID"]->ToString());
            operario->Nombre = reader["NOMBRE"]->ToString();
            operario->NombreUsuario = reader["NOMBREUSUARIO"]->ToString();
            operario->Apellido = reader["APELLIDO"]->ToString();
            operario->Salario = Convert::ToDecimal(reader["SALARIO"]->ToString());
            operario->Contrasenha = reader["CONTRASENHA"]->ToString();
            operario->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]->ToString());
            operario->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]->ToString());
            operario->Photo = (array<Byte>^)reader["PHOTO"];
            operario->Edad = Convert::ToInt32(reader["EDAD"]->ToString());
            operario->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]->ToString());
            operario->Cargo = reader["CARGO"]->ToString();
            operario->Especialidad = reader["ESPECIALIDAD"]->ToString();
            operario->NumeroIntervenciones = Convert::ToInt32(reader["NUMEROINTERVENCIONES"]->ToString());

            operariosList->Add(operario);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Cerrar la conexión a la base de datos
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return operariosList;
}






















Usuario^ RobotMineroPersistencia::Persistance::QueryUsuarioByIdP(int usuarioId)
{
    Usuario^ usuario = nullptr;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        // Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryUserByIdP";  // Procedimiento almacenado para consultar un Usuario por ID
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters["@ID"]->Value = usuarioId;

        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Procesar los resultados
        if (reader->Read()) {
            usuario = gcnew Usuario();
            usuario->Id = Convert::ToInt32(reader["ID"]->ToString());
            usuario->Nombre = reader["NOMBRE"]->ToString();
            usuario->NombreUsuario = reader["NOMBREUSUARIO"]->ToString();
            usuario->Apellido = reader["APELLIDO"]->ToString();
            usuario->Salario = Convert::ToDecimal(reader["SALARIO"]->ToString());
            usuario->Contrasenha = reader["CONTRASENHA"]->ToString();
            usuario->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]->ToString());
            usuario->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]->ToString());
            usuario->Photo = (array<Byte>^)reader["PHOTO"];
            usuario->Edad = Convert::ToInt32(reader["EDAD"]->ToString());
            usuario->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]->ToString());
            usuario->Cargo = reader["CARGO"]->ToString();
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Cerrar la conexión a la base de datos
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return usuario;
}


Peon^ RobotMineroPersistencia::Persistance::QueryPeonByIdP(int peonId)
{
    Peon^ peon = nullptr;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        // Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryPeonByIdP";  // Procedimiento almacenado para consultar un Peón por ID
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters["@ID"]->Value = peonId;

        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Procesar los resultados
        if (reader->Read()) {
            peon = gcnew Peon();
            peon->Id = Convert::ToInt32(reader["ID"]->ToString());
            peon->Nombre = reader["NOMBRE"]->ToString();
            peon->NombreUsuario = reader["NOMBREUSUARIO"]->ToString();
            peon->Apellido = reader["APELLIDO"]->ToString();
            peon->Salario = Convert::ToDecimal(reader["SALARIO"]->ToString());
            peon->Contrasenha = reader["CONTRASENHA"]->ToString();
            peon->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]->ToString());
            peon->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]->ToString());
            peon->Photo = (array<Byte>^)reader["PHOTO"];
            peon->Edad = Convert::ToInt32(reader["EDAD"]->ToString());
            peon->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]->ToString());
            peon->Cargo = reader["CARGO"]->ToString();
            peon->ContactoEmergencia = Convert::ToInt32(reader["CONTACTOEMERGENCIA"]->ToString());
            peon->CondicionesSalud = reader["CONDICIONESSALUD"]->ToString();
            peon->SeguroMedico = reader["SEGUROMEDICO"]->ToString();
            peon->LastCheck = Convert::ToDateTime(reader["LASTCHECK"]->ToString());
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Cerrar la conexión a la base de datos
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return peon;
}



Supervisor^ RobotMineroPersistencia::Persistance::QuerySupervisorByIdP(int supervisorId)
{
    Supervisor^ supervisor = nullptr;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        // Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QuerySupervisorByIdP";  // Procedimiento almacenado para consultar un Supervisor por ID
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters["@ID"]->Value = supervisorId;

        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Procesar los resultados
        if (reader->Read()) {
            supervisor = gcnew Supervisor();
            supervisor->Id = Convert::ToInt32(reader["ID"]->ToString());
            supervisor->Nombre = reader["NOMBRE"]->ToString();
            supervisor->NombreUsuario = reader["NOMBREUSUARIO"]->ToString();
            supervisor->Apellido = reader["APELLIDO"]->ToString();
            supervisor->Salario = Convert::ToDecimal(reader["SALARIO"]->ToString());
            supervisor->Contrasenha = reader["CONTRASENHA"]->ToString();
            supervisor->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]->ToString());
            supervisor->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]->ToString());
            supervisor->Photo = (array<Byte>^)reader["PHOTO"];
            supervisor->Edad = Convert::ToInt32(reader["EDAD"]->ToString());
            supervisor->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]->ToString());
            supervisor->Cargo = reader["CARGO"]->ToString();
            supervisor->Capacitacion = reader["CAPACITACION"]->ToString();
            supervisor->EntCapacitacion = reader["ENTCAPACITACION"]->ToString();
            supervisor->SeguroSupervisor = reader["SEGUROSUPERVISOR"]->ToString();
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Cerrar la conexión a la base de datos
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return supervisor;
}



IngAmbiental^ RobotMineroPersistencia::Persistance::QueryIngenieroByIdP(int ingenieroId)
{
    IngAmbiental^ ingeniero = nullptr;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryIngenieroByIdP";  // Procedimiento almacenado para consultar un Ingeniero Ambiental por ID
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters["@ID"]->Value = ingenieroId;

        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Procesar los resultados
        if (reader->Read()) {
            ingeniero = gcnew IngAmbiental();
            ingeniero->Id = Convert::ToInt32(reader["ID"]->ToString());
            ingeniero->Nombre = reader["NOMBRE"]->ToString();
            ingeniero->NombreUsuario = reader["NOMBREUSUARIO"]->ToString();
            ingeniero->Apellido = reader["APELLIDO"]->ToString();
            ingeniero->Salario = Convert::ToDecimal(reader["SALARIO"]->ToString());
            ingeniero->Contrasenha = reader["CONTRASENHA"]->ToString();
            ingeniero->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]->ToString());
            ingeniero->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]->ToString());
            ingeniero->Photo = (array<Byte>^)reader["PHOTO"];
            ingeniero->Edad = Convert::ToInt32(reader["EDAD"]->ToString());
            ingeniero->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]->ToString());
            ingeniero->Cargo = reader["CARGO"]->ToString();
            ingeniero->Especializacion = reader["ESPECIALIZACION"]->ToString();
            ingeniero->NumeroLicencia = reader["NUMEROLICENCIA"]->ToString();
            ingeniero->EntidadCertificadora = reader["ENTIDADCERTIFICADORA"]->ToString();
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Cerrar la conexión a la base de datos
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return ingeniero;
}




Operario^ RobotMineroPersistencia::Persistance::QueryOperarioByIdP(int operarioId)
{
    Operario^ operario = nullptr;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryOperarioByIdP";  // Procedimiento almacenado para consultar un Operario por ID
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters["@ID"]->Value = operarioId;

        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Procesar los resultados
        if (reader->Read()) {
            operario = gcnew Operario();
            operario->Id = Convert::ToInt32(reader["ID"]->ToString());
            operario->Nombre = reader["NOMBRE"]->ToString();
            operario->NombreUsuario = reader["NOMBREUSUARIO"]->ToString();
            operario->Apellido = reader["APELLIDO"]->ToString();
            operario->Salario = Convert::ToDecimal(reader["SALARIO"]->ToString());
            operario->Contrasenha = reader["CONTRASENHA"]->ToString();
            operario->FechaFirst = Convert::ToDateTime(reader["FECHAFIRST"]->ToString());
            operario->FechaEnd = Convert::ToDateTime(reader["FECHAEND"]->ToString());
            operario->Photo = (array<Byte>^)reader["PHOTO"];
            operario->Edad = Convert::ToInt32(reader["EDAD"]->ToString());
            operario->NumeroTelefono = Convert::ToInt32(reader["NUMEROTELEFONO"]->ToString());
            operario->Cargo = reader["CARGO"]->ToString();
            operario->Especialidad = reader["ESPECIALIDAD"]->ToString();
            operario->NumeroIntervenciones = Convert::ToInt32(reader["NUMEROINTERVENCIONES"]->ToString());
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Cerrar la conexión a la base de datos
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return operario;
}
