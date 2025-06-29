#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace RobotMineroModel;
using namespace System::Xml::Serialization;
using namespace System::Data::SqlClient;

namespace RobotMineroPersistencia {
	public ref class Persistance
	{
	private:
		static SqlConnection^ GetConnection();
	public:
		/*static void PersisTextFile(String^ fileName, Object^ persistObject);
		static Object^ LoadResourcetextFile(String^ fileName);*/

		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFile(String^ fileName);

		//Presistencia en base de datos para el usuario:

		static int AddUsuarioP(Usuario^ usuario);
		static int UpdateUsuarioP(Usuario^ usuario);
		static int DeleteUsuarioP(int usuarioId);
		static List<Usuario^>^ QueryAllUsuariosP();
		static Usuario^ QueryUsuarioByIdP(int usuarioId);






		//Presistencia en base de datos para el peon:

		static int AddPeonP(Peon^ peon);
		static int UpdatePeonP(Peon^ peon);
		static int DeletePeonP(int peonId);
		static List<Peon^>^ QueryAllPeonesP();
		static Peon^ QueryPeonByIdP(int peonId);

		//Presistencia en base de datos para el supervisor:

		static int AddSupervisorP(Supervisor^ supervisor);
		static int UpdateSupervisorP(Supervisor^ supervisor);
		static int DeleteSupervisorP(int supervisorId);
		static List<Supervisor^>^ QueryAllSupervisoresP();
		static Supervisor^ QuerySupervisorByIdP(int supervisorId);

		//Presistencia en base de datos para el ingeniero:

		static int AddIngenieroP(IngAmbiental^ ingeniero);
		static int UpdateIngenieroP(IngAmbiental^ ingeniero);
		static int DeleteIngenieroP(int ingenieroId);
		static List<IngAmbiental^>^ QueryAllIngenierosP();
		static IngAmbiental^ QueryIngenieroByIdP(int ingenieroId);

		//Presistencia en base de datos para el operario:

		static int AddOperarioP(Operario^ operario);
		static int UpdateOperarioP(Operario^ operario);
		static int DeleteOperarioP(int operarioId);
		static List<Operario^>^ QueryAllOperariosP();
		static Operario^ QueryOperarioByIdP(int operarioId);

	};
}
