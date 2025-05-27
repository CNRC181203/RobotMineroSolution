#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace RobotMineroModel;
using namespace RobotMineroPersistencia;

namespace RobotMineroController {
	public ref class Controller
	{
	public :   // hola mundo, Ayar esta loco 
		static List<Usuario^>^ usuarios = gcnew List<Usuario^>(); 
		
	public:

		//Métodos CRUD Usuario
		static int  AgregarUsuario(Usuario^ usuario);
		static List<Usuario^>^ ConsultarTodosUsuario();
		static int  ActualizarUsuario(Usuario^ usuario);
		static int  EliminarUsuario(int id);
		static Usuario^ DevolverUsuarioPorID(int usuarioID);

		//=== falta definir ==== 
		//Métodos CRUD Carro Minero
		/*
		void AgregarCarro();
		void ConsultarCarro();
		void ActualizarCarro();
		void EliminarCarro();
		//Métodos CRUD Sensores
		void AgregarSensor();
		void ConsultarSensor();
		void ActualizarSensor();
		void EliminarSensor();
		//Métodos CRUD Actuadores
		void AgregarActuador();
		void ConsultarActuador();
		void ActualizarActuador();
		void EliminarActuador();

		/*private:

		static List<Usuario^>^ DataPeones = gcnew List <Usuario^>();

		static List<TaskToDo^>^ QueueTasks = gcnew List <TaskToDo^>();

	public:	
		//Metodos para los peones:

		static bool AddPeon(Usuario^ user);
		static void QueryAllPeones();
		static void QueryPeonByID(int ID);
		static void DeletatedPeon(int ID);
		static void MinerFitToWork(Peon^ minero);

		static bool AddTask(TaskToDo^ Task);
		static void QueryAllTasks();
		*/


	};
}
