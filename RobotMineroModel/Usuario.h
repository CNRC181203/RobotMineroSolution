#pragma once
using namespace System;
using namespace System::Collections::Generic;
namespace RobotMineroModel {
	[Serializable]
	public ref class Usuario
	{
	public:
		 int Id;
		String^ Nombre;
		String^ Apelllido;
		double Salario;
		String^ Cargo;
		DateTime^ fechaInicioContrato;
		DateTime^ fechaFinContrato;
		String^ contrasenha;

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
