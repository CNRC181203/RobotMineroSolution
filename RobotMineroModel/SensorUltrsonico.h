#pragma once
#include"Sensor.h"

namespace RobotMineroModel {
	public ref class SensorUltrsonico: public Sensor
	{
	private:
		double DistanciaMedida;
	public:
		double MedirDistancia();
	};
}
