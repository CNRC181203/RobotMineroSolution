#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace RobotMineroModel {
	public ref class MapaMinaAvanzado
	{
	public:
		List<List<double>^>^PosicionGasHumo;//Coordenadas donde hay gases con concentraciones elevadas
	private:
		void GenerarMapaAvanzado();
	};
}
