#pragma once
#include"Sensor.h"

namespace RobotMineroModel {
	public ref class SensorGas: public Sensor
	{
	private:
		double ConcentracionHumo;
		double ConcetracionMetano;
		double ConcentracionMonoxido;
		double ConcetracionAmoniaco;
	public:
		double MedirHumo();
		double MedirMetano();
		double MedirMonoxido();
		double MedirAmoniaco();

	};
}
