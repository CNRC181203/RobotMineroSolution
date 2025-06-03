#pragma once
#include"Sensor.h"

namespace RobotMineroModel {
	public ref class SensorTemperatura:public Sensor
	{
	private:
		double Temperatura;
	public: 
		double MedirTemperatura();
	};
}
