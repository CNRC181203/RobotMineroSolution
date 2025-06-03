#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace RobotMineroModel;
using namespace System::Xml::Serialization;


namespace RobotMineroPersistencia {
	public ref class Persistance
	{
	public:
		/*static void PersisTextFile(String^ fileName, Object^ persistObject);
		static Object^ LoadResourcetextFile(String^ fileName);*/

		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFile(String^ fileName);
	};
}
