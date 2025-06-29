#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace RobotMineroModel;
using namespace RobotMineroPersistencia;
//ARDUINO
using namespace System::IO;
using namespace System::IO::Ports;

namespace RobotMineroController {
	public enum class Protocol {
		UART,
		NMEA
	};
	public ref class Controller
	{
	public : 
		static List<Usuario^>^ usuariosNew = gcnew List<Usuario^>();
		static int savedorId;

		static List<Peon^>^ ListPeones = gcnew List<Peon^>();

		//ARDUINO
		static List<double>^ valoresMQ2 = gcnew List<double>();
		static List<double>^ valoresMQ135 = gcnew List<double>();
		static List<double>^ valoresHumedad = gcnew List<double>();
		
	public:
		//Meotodo adicionales
		static void SaveId(int Id);
		static int returnId();

		//Métodos CRUD Usuario
		static int  AgregarUsuario(Usuario^ usuario);
		static List<Usuario^>^ ConsultarTodosUsuario();
		static int  ActualizarUsuario(Usuario^ usuario);
		static int  EliminarUsuario(int id);
		static Usuario^ DevolverUsuarioPorID(int usuarioID);

		//Meotodos CRUD Peon
		static int AgregarPeon(Peon^ peon);
		static List<Peon^>^ ConsultarTodosPeones();
		static int ActualizarPeon(Peon^ peon);
		static int EliminarPeon(int id);
		static Peon^ DevolverPeonPorID(int peonID);

		//ARDUINO
		//completado
		static SerialPort^ ArduinoPort;
		//Diccionario con los protocolos de comunicación UART y NMEA
		static Dictionary<String^, Protocol>^ protocolDictionary = gcnew Dictionary<String^, Protocol>();

		static Controller() {
			// Agrega elementos al diccionario
			protocolDictionary->Add("UART", Protocol::UART);
			protocolDictionary->Add("NMEA", Protocol::NMEA);
		}
		static void OpenPort();
		static void ClosePort();
		static String^ IniciarMovimientoYLeerSensores();


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
