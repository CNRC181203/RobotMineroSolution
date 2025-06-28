#pragma once
using namespace System;
#include"Usuario.h"

namespace RobotMineroModel {
	[Serializable]
	public ref class JefeInventario :public Usuario
	{
	public:
		property String^ HorarioTrabajo;
		JefeInventario() {
			HorarioTrabajo = "";
		}
	};
}


