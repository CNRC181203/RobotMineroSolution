#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace RobotMineroModel;
using namespace RobotMineroPersistencia;

namespace RobotMineroController {
	public ref class Controller
	{
	public : 
		static List<Usuario^>^ usuariosNew = gcnew List<Usuario^>();
		static int savedorId;

		static List<Peon^>^ ListPeon = gcnew List<Peon^>();
		static List<IngAmbiental^>^ ListAmbiental = gcnew List<IngAmbiental^>();
		static List<Operario^>^ ListOperario = gcnew List<Operario^>();
		static List<Supervisor^>^ ListSupervisor = gcnew List<Supervisor^>();
		static List<Actuador^>^ ListActuador = gcnew List<Actuador^>();
		
	public:
		//Métodos adicionales
		static void SaveId(int Id);
		static int returnId();

		//Métodos CRUD Usuario
		static int  AgregarUsuario(Usuario^ usuario);
		static List<Usuario^>^ ConsultarTodosUsuario();
		static int  ActualizarUsuario(Usuario^ usuario);
		static int  EliminarUsuario(int id);
		static Usuario^ DevolverUsuarioPorID(int usuarioID);
		static Usuario^ DevolverUsuarioPorNomUsuario(String^ NomUsuario);

		//Métodos CRUD Peon
		static int AgregarPeon(Peon^ peon);
		static List<Peon^>^ ConsultarTodosPeones();
		static int ActualizarPeon(Peon^ peon);
		static int EliminarPeon(int id);
		static Peon^ DevolverPeonPorID(int peonID);

		//Metodos GRUD ACtuador
		static int AgregarActuador(Actuador^ actuador);
		static List<Actuador^>^ ConsultarTodosActuadores();
		static int ActualizarActuador(Actuador^ actuador);
		static int EliminarActuador(int id);
		static Actuador^ DevolverActuadorPorID(int actuadorID);


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
