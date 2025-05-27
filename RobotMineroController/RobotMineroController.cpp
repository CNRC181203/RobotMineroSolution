#include "pch.h"
#include "RobotMineroController.h"

// #include "RobotMineroController.h"

/*
bool RobotMineroController::Controller::AddPeon(Usuario^ user)
{
	try {
		DataPeones->Add(user);

		return 1;
	}
	catch (Exception^ ex){
		throw ex;
	}
	return 0;
}

void RobotMineroController::Controller::QueryAllPeones(){

	for each (Peon ^ worker in DataPeones) {

		Console::WriteLine("Seguro Medico: {0}", worker->SeguroMedico);
		Console::WriteLine("Edad: {0}", worker->edad);
		Console::WriteLine("EPP Óptimo? {0}: ", worker->EppOptimus);
		Console::WriteLine("Tiene tanques de oxigeno? {0}: ", worker->tanquesDeOxigeno);
		Console::WriteLine("Tiene algun MedicKit? {0}: ", worker->MedicKit);
	}
}

void RobotMineroController::Controller::QueryPeonByID(int ID){

	for each (Peon ^ worker in DataPeones) {
		if (worker->ID == ID) {
			Console::WriteLine("Seguro Medico: {0}", worker->SeguroMedico);
			Console::WriteLine("Edad: {0}", worker->edad);
			Console::WriteLine("EPP Óptimo? {0}: ", worker->EppOptimus);
			Console::WriteLine("Tiene tanques de oxigeno? {0}: ", worker->tanquesDeOxigeno);
			Console::WriteLine("Tiene algun MedicKit? {0}: ", worker->MedicKit);
		}
	}
}

void RobotMineroController::Controller::DeletatedPeon(int ID){

	for (int i = 0; i < DataPeones->Count; i++) {
		if (DataPeones[i]->ID == ID) {
			DataPeones->RemoveAt(i);

		}
	}
}

void RobotMineroController::Controller::MinerFitToWork(Peon^ minero)
{
	//En base a los atributos del minero el robot decide si el trabajador es pato para trabajar
	//Y devuelve un texto
}



bool RobotMineroController::Controller::AddTask(TaskToDo^ Task){

	try {
		QueueTasks->Add(Task);

		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;

}

void RobotMineroController::Controller::QueryAllTasks(){

	for each (Usuario^ ShowUsers in QueueTasks) {

		Console::WriteLine();
	}
}
*/

int RobotMineroController::Controller::AgregarUsuario(Usuario^ usuario)
{
	try {
		usuarios->Add(usuario);
		Persistance::PersistBinaryFile("usuarios.bin", usuarios);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
}

List<Usuario^>^ RobotMineroController::Controller::ConsultarTodosUsuario()
{
	usuarios = (List<Usuario^>^) Persistance::LoadBinaryFile("usuarios.bin");
	if (usuarios == nullptr)
		usuarios = gcnew List<Usuario^>();
	return usuarios;
}

int RobotMineroController::Controller::ActualizarUsuario(Usuario^ usuario)
{

	for (int i = 0; i < usuarios->Count; i++)
	{
		if (usuarios[i]->Id == usuario->Id) {
			usuarios[i] = usuario;
			Persistance::PersistBinaryFile("usuarios.bin", usuarios);
			return 1;
		}
	}
	return 0;
}

int RobotMineroController::Controller::EliminarUsuario(int id)
{
	for (int i = 0; i < usuarios->Count; i++)
	{
		if (usuarios[i]->Id == id) {
			usuarios->RemoveAt(i);
			Persistance::PersistBinaryFile("usuarios.bin", usuarios);
			return 1;
		}
	}
	return 0;
}

Usuario^ RobotMineroController::Controller::DevolverUsuarioPorID(int usuarioID) {
	//Persistance::PersistancetextFile("resource.txt", repoResource);
	for each (Usuario ^ resource in usuarios)
	{
		if (resource->Id == usuarioID) {
			return resource;
		}
	}
	return nullptr;
}
