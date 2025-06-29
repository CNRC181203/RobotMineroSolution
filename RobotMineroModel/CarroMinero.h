#pragma once
#include "Componentes.h"
using namespace System;
using namespace System::Collections::Generic;

namespace RobotMineroModel {
	[Serializable]
	public ref class CarroMinero
	{
	public: 
		property int Id;
		property String^ Modelo;
		property String^ NumeroSerie;
		property String^ Ubicacion;
		property int Bateria;
		property array<Byte>^ Imagen;
		property List< Componentes^>^ Componentes;
		CarroMinero() {
		}

		void Mover();
		void Sensar();
	};
}


