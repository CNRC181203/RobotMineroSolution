#pragma once
#include "Componentes.h"
using namespace System;

namespace RobotMineroModel {
	[Serializable]
	public ref class Motor: public Componentes
	{
	public:
		property double Rpm; 
		property String^ Modelo;         // p. ej. “MD-12V-3000”

		property double TorqueNominal;   // Nm
		property double VoltajeNominal;  // V
		property double CorrienteNominal;// A
		
		Motor() {}
	private:
		void CalcularRpm();
	};
}
//falta ver el tema de los encoders