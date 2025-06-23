#pragma once
#include"Usuario.h"

namespace RobotMineroModel {
	public ref class Supervisor:public Usuario
	{
	public:	
		property String^Capacitacion;
		property String^EntCapacitacion;
		property String^SeguroSupervisor;
		void VisualizarMapaAvanzado();
	};
}
