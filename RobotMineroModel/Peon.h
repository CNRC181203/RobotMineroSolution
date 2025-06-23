#pragma once
#include"Usuario.h"

namespace RobotMineroModel {
	[Serializable]
	public ref class Peon: public Usuario
	{
	public:
		property int ContactoEmergencia;
		property String^ CondicionesSalud;
		property String^ SeguroMedico;
		property DateTime^ LastCheck;
		//property String^ EppOptimus;
		//property int tanquesDeOxigeno;
		//property String^ MedicKit;
	};
}
