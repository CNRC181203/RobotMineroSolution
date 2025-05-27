#pragma once
#include"Actuador.h"
namespace RobotMineroModel {
	public ref class Motor: public Actuador
	{
	public:
		double Rpm; 
	private:
		void CalcularRpm();
	};
}
//falta ver el tema de los encoders