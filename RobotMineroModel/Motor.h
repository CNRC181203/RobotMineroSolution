#pragma once
#include"Actuador.h"
namespace RobotMineroModel {
	[Serializable]
	public ref class Motor: public Actuador
	{
	public:
		double Rpm; 
		Motor() {}
	private:
		void CalcularRpm();
	};
}
//falta ver el tema de los encoders