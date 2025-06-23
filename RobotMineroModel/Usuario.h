#pragma once
using namespace System;
using namespace System::Collections::Generic;
namespace RobotMineroModel {
	[Serializable]
	public ref class Usuario
	{
	public:
		property int Id;
		property String^ Nombre;
		property String^ NombreUsuario;
		property String^ Apelllido;
		property double Salario;
		property String^ Cargo;
		property String^ contrasenha;
		property DateTime^ FechaFirst;
		property DateTime^ FechaEnd;
		property array<Byte>^ Photo;
		property int Edad;
		property int NumeroTelefono;

		Usuario() {}

		Usuario(int id,String^ nombre, String^ apellido, double salario, String^ cargo) {
			Id = id;
			Nombre = nombre; 
			Apelllido = apellido;
			Salario = salario;
			Cargo = cargo;
			
		}
	};

}
