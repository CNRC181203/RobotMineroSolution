#pragma once
#include"Usuario.h"

namespace RobotMineroModel {
	[Serializable]
	public ref class Peon: public Usuario
	{
	public:
		property String^ SeguroMedico;
		property int edad;
		property String^ EppOptimus;
		property int tanquesDeOxigeno;
		property String^ MedicKit;
		property int LastCheck;
		property array<Byte>^ PhotoSimple;

	};
}
