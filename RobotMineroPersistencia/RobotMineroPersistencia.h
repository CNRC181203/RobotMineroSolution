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


		//Parte Sql para el ususario
		static int DeleteUser(int userId);
		static Usuario^ ValidateUser(String^ username, String^ password);

		//Metodos tipo CRUD para los tipos de usuarios:
		static int AddIngAmbiental(IngAmbiental^ user);
		static int UpdateIngAmbiental(IngAmbiental^ user);
		static List<IngAmbiental^>^ QueryAllIngAmbiental();
		static IngAmbiental^ QueryIngAmbientalById(int userId);

	};
}
