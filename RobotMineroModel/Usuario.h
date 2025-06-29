#pragma once
using namespace System;
using namespace System::Collections::Generic;
namespace RobotMineroModel {

	//Crecion de los tipos de Usariosque tendremos
	public enum class UserType { IngAmbiental, Supervisor, Operario, Peon};

	[Serializable]
	public ref class Usuario
	{
	public:
		property int Id;
		property String^ Nombre;
		property String^ NombreUsuario;
		property String^ Apelllido;
		property double Salario;
		//property String^ Cargo;
		property String^ Contrasenha;
		property DateTime^ FechaFirst;
		property DateTime^ FechaEnd;
		property array<Byte>^ Photo;
		property int Edad;
		property int NumeroTelefono;

		Usuario() {
			Edad = 0;
			NumeroTelefono = 0;
		}

		//Constructor with all attributes:
		Usuario(int id, String^ nombre, String^ nombreUsuario, String^ apellido, double salario,
			String^ contrasenha, DateTime^ fechaFirst, DateTime^ fechaEnd, array<Byte>^ photo, int edad, int numeroTelefono) {
			this->Id = id;
			this->Nombre = nombre;
			this->NombreUsuario = nombreUsuario;
			this->Apelllido = apellido;
			this->Salario = salario;
			this->Contrasenha = contrasenha;
			this->FechaFirst = fechaFirst;
			this->FechaEnd = fechaEnd;
			this->Photo = photo;
			this->Edad = edad;
			this->NumeroTelefono = numeroTelefono;
		}

	};

}
