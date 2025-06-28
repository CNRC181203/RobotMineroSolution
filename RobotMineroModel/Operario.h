#pragma once
#include"Usuario.h"

namespace RobotMineroModel {
	[Serializable]
	public ref class Operario:public Usuario
	{
	public:
		property String^Especialidad;
		property int NumeroIntervenciones;
		Operario() {
			Especialidad = "";
			NumeroIntervenciones = 0;
		}
		void IniciarAnalisis();
		void VisualizarReporteSimple();
	};
}
