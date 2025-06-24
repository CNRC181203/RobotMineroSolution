#pragma once
#include"Actuador.h"

namespace RobotMineroModel {
	[Serializable]
	public ref class Servomotor : public Actuador
	{
	public: 
		double angulo;
		Servomotor() {}
	};
}
//