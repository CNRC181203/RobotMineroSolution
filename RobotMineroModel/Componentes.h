#pragma once
using namespace System;

namespace RobotMineroModel {
	public enum class TipoComponente { ServoMotor, Motor,SensorCombustion, SensorHumedad, OtrosContaminantes};
	[Serializable]

	public ref class Componentes
	{
	public:

		int Id;
		int Cantidad;
		TipoComponente Tipo;
		String^ Estado;
		String^ Ubicacion;
		array<Byte>^ Imagen; //para guardar la imagen del actuador
		Componentes() {}
		Componentes(int id, int cantidad, TipoComponente tipo, String^ estado, String^ ubicacion, array<Byte>^ imagen)
		{
			Id = id;
			Cantidad = cantidad;
			Tipo = tipo;
			Estado = estado;
			Ubicacion = ubicacion;
			Imagen = imagen;
		}
	};
}


