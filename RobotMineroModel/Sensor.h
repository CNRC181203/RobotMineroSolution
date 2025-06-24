#pragma once
using namespace System;
#include"Actuador.h"

namespace RobotMineroModel {
	[Serializable]
	public ref class Sensor : public Actuador
	{
	public:
		int Id;
		String^ NumeroSerie;
		Sensor() {}
	};
}
