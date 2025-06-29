#pragma once
#include "Componentes.h"
using namespace System;

namespace RobotMineroModel {
	public enum class SensorTipo {Humedad,Combustion,GasesContaminantes };
	[Serializable]
	public ref class Sensor: public Componentes

	{
	public:
		int Id;
		property SensorTipo^ Tipo;
		property double RangoMaximo; // en metros
		property double Frecuencia; // en Hz
		Sensor() {}
	};
}
