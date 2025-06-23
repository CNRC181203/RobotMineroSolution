#pragma once
#include"Usuario.h"

namespace RobotMineroModel {
	public ref class Operario:public Usuario
	{
	public:
		property String^Especialidad;
		property int NumeroIntervenciones;
		void IniciarAnalisis();
		void VisualizarReporteSimple();
	};
}
