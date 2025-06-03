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
		usuariosNew->Add(usuario);
		Persistance::PersistBinaryFile("usuariosNew.bin", usuariosNew);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
}

List<Usuario^>^ RobotMineroController::Controller::ConsultarTodosUsuario()
{
	usuariosNew = (List<Usuario^>^) Persistance::LoadBinaryFile("usuariosNew.bin");
	if (usuariosNew == nullptr)
		usuariosNew = gcnew List<Usuario^>();
	return usuariosNew;
}

int RobotMineroController::Controller::ActualizarUsuario(Usuario^ usuario)
{

	for (int i = 0; i < usuariosNew->Count; i++)
	{
		if (usuariosNew[i]->Id == usuario->Id) {
			usuariosNew[i] = usuario;
			Persistance::PersistBinaryFile("usuariosNew.bin", usuariosNew);
			return 1;
		}
	}
	return 0;
}

int RobotMineroController::Controller::EliminarUsuario(int id)
{
	for (int i = 0; i < usuariosNew->Count; i++)
	{
		if (usuariosNew[i]->Id == id) {
			usuariosNew->RemoveAt(i);
			Persistance::PersistBinaryFile("usuariosNew.bin", usuariosNew);
			return 1;
		}
	}
	return 0;
}

Usuario^ RobotMineroController::Controller::DevolverUsuarioPorID(int usuarioID) {
	//Persistance::PersistancetextFile("resource.txt", repoResource);
	for each (Usuario ^ resource in usuariosNew)
	{
		if (resource->Id == usuarioID) {
			return resource;
		}
	}
	return nullptr;
}

int RobotMineroController::Controller::AgregarPeon(Peon^ peon)
{
	try {
		ListPeones->Add(peon);
		Persistance::PersistBinaryFile("Peon.bin", ListPeones);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
}

List<Peon^>^ RobotMineroController::Controller::ConsultarTodosPeones()
{
	ListPeones = (List<Peon^>^) Persistance::LoadBinaryFile("Peon.bin");
	if (ListPeones == nullptr)
		ListPeones = gcnew List<Peon^>();
	return ListPeones;
}

int RobotMineroController::Controller::ActualizarPeon(Peon^ peon)
{
	for (int i = 0; i < ListPeones->Count; i++)
	{
		if (ListPeones[i]->Id == peon->Id) {
			ListPeones[i] = peon;
			Persistance::PersistBinaryFile("Peon.bin", ListPeones);
			return 1;
		}
	}
	return 0;
}

int RobotMineroController::Controller::EliminarPeon(int id)
{
	for (int i = 0; i < ListPeones->Count; i++)
	{
		if (ListPeones[i]->Id == id) {
			ListPeones->RemoveAt(i);
			Persistance::PersistBinaryFile("Peon.bin", ListPeones);
			return 1;
		}
	}
	return 0;
}
Peon^ RobotMineroController::Controller::DevolverPeonPorID(int peonID) {
	//Persistance::PersistancetextFile("resource.txt", repoResource);
	for each (Peon ^ resource in ListPeones)
	{
		if (resource->Id == peonID) {
			return resource;
		}
	}
	return nullptr;
}
void RobotMineroController::Controller::SaveId(int Id)
{
	savedorId = Id;  // inicializado
}

int RobotMineroController::Controller::returnId()
{
	return savedorId;
}
