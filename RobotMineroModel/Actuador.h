#pragma once
using namespace System;
namespace RobotMineroModel {
	[Serializable]
	public ref class Actuador
	{
	public:
		//servomotor, actuador, motor.
		int Id;
		//String^  Tipo; //servomotor, actuador, motor.
		int Cantidad;
		String^ Estado;
		String^ Ubicacion;
		array<Byte>^ Imagen ; //para guardar la imagen del actuador
		Actuador() {}
		Actuador(int id, int cantidad, String^ estado, String^ ubicacion, array<Byte>^ imagen)
		{
			Id = id;
			Cantidad = cantidad;
			Estado = estado;
			Ubicacion = ubicacion;
			Imagen = imagen;
		}	
	};	
}
