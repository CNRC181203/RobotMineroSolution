#pragma once
using namespace System;

namespace RobotMineroModel {
	public ref class CarroMinero
	{
	public: 
		int Id;
		int NumeroSerie;
		String^ Nombre;
		int Bateria;	
		String^ Modelo;
		//Falta funcion constructora

		void Mover();
		void Sensar();
	};
}


