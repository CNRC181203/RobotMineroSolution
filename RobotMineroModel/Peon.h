#pragma once
#include"Usuario.h"

namespace RobotMineroModel {
	public ref class Peon: public Usuario
	{
	public:
		String^ Seguro;
		int DíasCompletados;
		DateTime^ FechaRevisionMedica;
		void VisualizarMapa();
	};
}
