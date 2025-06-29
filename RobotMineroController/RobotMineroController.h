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
		static List<JefeInventario^>^ListJefeInventario = gcnew List<JefeInventario^>();
		static List<Componentes^>^ ListComponentes = gcnew List<Componentes^>();
		static List<CarroMinero^>^ ListCarroMinero = gcnew List<CarroMinero^>();
		
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

		//Métodos CRUD Operario
		static Operario^ DevolverOperarioPorID(int operarioId);
		static int ActualizarOperario(Operario^ operario);
		static List<Operario^>^ ConsultarTodosOperarios();
		static int EliminarOperario(int oprarioId);

		//Métodos CRUD Peon
		static List<Peon^>^ ConsultarTodosPeones();
		static int ActualizarPeon(Peon^ peon);
		static int EliminarPeon(int id);
		static Peon^ DevolverPeonPorID(int peonID);

		//Métodos CRUD Supervisor
		static Supervisor^ DevolverSupervisorPorID(int supervisorId);
		static int ActualizarSupervisor(Supervisor^ supervisor);
		static List<Supervisor^>^ ConsultarTodosSupervisores();
		static int EliminarSupervisor(int supervisorId);

		//Métodos CRUD IngAmbiental
		static IngAmbiental^ DevolverIngAmbientalPorID(int IngAmbientalId);
		static int ActualizarIngAmbiental(IngAmbiental^ IngAmbiental);
		static List<IngAmbiental^>^ ConsultarTodosIngAmbientales();
		static int EliminarIngAmbiental(int IngAmbientalId);

		//Métodos CRUD Jeje de inventario
		static JefeInventario^ DevolverJefeInventarioPorID(int JefeInventarioId);
		static int ActualizarJefeInventario(JefeInventario^ jefeInventario);
		static List<JefeInventario^>^ ConsultarJefeInventario();
		static int EliminarJefeInventario(int JefeInventarioId);

		//Métodos CRUD Actuador
		static int AgregarComponete(Componentes^ componente);
		static List<Componentes^>^ ConsultarTodosComponentes();
		static int ActualizarComponete(Componentes^ componente);
		static int EliminarComponete(int id);
		static Componentes^ DevolverComponentePorID(int componenteID);

		// Métodos CRUD Carro Minero
		static int AgregarCarroMinero(CarroMinero^ carro);
		static List<CarroMinero^>^ ConsultarTodosCarrosMinero();
		static int ActualizarCarroMinero(CarroMinero^ carro);
		static int EliminarCarroMinero(int carroId);
		static CarroMinero^ DevolverCarroMineroPorID(int carroId);

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
