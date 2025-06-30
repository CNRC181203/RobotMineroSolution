#include "pch.h"
#include "RobotMineroController.h"


int RobotMineroController::Controller::AgregarUsuario(Usuario^ usuario)
{
	/*try {
		usuariosNew->Add(usuario);
		Persistance::PersistBinaryFile("usuariosNew.bin", usuariosNew);
		if (usuario->GetType() == Peon::typeid) {
			ListPeon->Add((Peon^)usuario);
			Persistance::PersistBinaryFile("Peones.bin", ListPeon);
		}	
		if (usuario->GetType() == Operario::typeid) {
			ListOperario->Add((Operario^)usuario);
			Persistance::PersistBinaryFile("Operarios.bin", ListOperario);
		}
		if (usuario->GetType() == IngAmbiental::typeid) {
			ListAmbiental->Add((IngAmbiental^)usuario);
			Persistance::PersistBinaryFile("IngAmbiental.bin", ListAmbiental);
		}
		if (usuario->GetType() == Supervisor::typeid) {
			ListSupervisor->Add((Supervisor^)usuario);
			Persistance::PersistBinaryFile("Supervisor.bin", ListSupervisor);
		}
		if (usuario->GetType() == JefeInventario::typeid) {
			ListJefeInventario->Add((JefeInventario^)usuario);
			Persistance::PersistBinaryFile("JefeInventario.bin", ListJefeInventario);
		}
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;*/
	int result = 0;
	if (usuario->GetType() == IngAmbiental::typeid) {
		result = Persistance::AddIngAmbiental((IngAmbiental^)usuario);
	}
	else  if (usuario->GetType() == Supervisor::typeid) {
		result = Persistance::AddSupervisor((Supervisor^)usuario);
	}
	else  if (usuario->GetType() == Operario::typeid) {
		result = Persistance::AddOperario((Operario^)usuario);
	}
	else  if (usuario->GetType() == Peon::typeid) {
		result = Persistance::AddPeon((Peon^)usuario);
	}
	return result;
}

List<Usuario^>^ RobotMineroController::Controller::ConsultarTodosUsuario()
{
	try {
		usuariosNew = (List<Usuario^>^) Persistance::LoadBinaryFile("usuariosNew.bin");
		if (usuariosNew == nullptr)
			usuariosNew = gcnew List<Usuario^>();
		return usuariosNew;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}

int RobotMineroController::Controller::ActualizarUsuario(Usuario^ usuario)
{

	/*try {
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
	catch (Exception^ ex) {
		throw ex;
	}*/
	int result = 0;
	if (usuario->GetType() == IngAmbiental::typeid) {
		result = Persistance::UpdateIngAmbiental((IngAmbiental^)usuario);
	}
	else  if (usuario->GetType() == Supervisor::typeid) {
		result = Persistance::UpdateSupervisor((Supervisor^)usuario);
	}
	else  if (usuario->GetType() == Operario::typeid) {
		result = Persistance::UpdateOperario((Operario^)usuario);
	}
	else  if (usuario->GetType() == Peon::typeid) {
		result = Persistance::UpdatePeon((Peon^)usuario);
	}
	return result;
}

int RobotMineroController::Controller::EliminarUsuario(int id)
{
	/*try {
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
	catch (Exception^ ex) {
		throw ex;
	}*/
	return Persistance::DeleteUser(id);
}

Usuario^ RobotMineroController::Controller::DevolverUsuarioPorID(int usuarioID) {
	//Persistance::PersistancetextFile("resource.txt", repoResource);
	try {
		usuariosNew = ConsultarTodosUsuario();
		for each (Usuario ^ usuario in usuariosNew)
		{
			if (usuario->Id == usuarioID) {
				return usuario;
			}
		}
		return nullptr;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}

Usuario^ RobotMineroController::Controller::DevolverUsuarioPorNomUsuario(String^ NomUsuario)
{
	try {
		usuariosNew = ConsultarTodosUsuario();
		for each (Usuario ^ usuario in usuariosNew)
		{
			if (usuario->NombreUsuario == NomUsuario) {
				return usuario;
			}
		}
		return nullptr;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////	OPERARIO
Operario^ RobotMineroController::Controller::DevolverOperarioPorID(int operarioId)
{
	/*ListOperario = ConsultarTodosOperarios();
	try {
		for each (Operario ^ operario in ListOperario)
		{
			if (operario->Id == operarioId) {
				return operario;
			}
		}
		return nullptr;
	}
	catch (Exception^ ex) {
		throw ex;
	}*/
	return Persistance::QueryOperarioById(operarioId);
}

int RobotMineroController::Controller::ActualizarOperario(Operario^ operario)
{
	try {
		for (int i = 0; i < ListOperario->Count; i++)
		{
			if (ListOperario[i]->Id == operario->Id) {
				ListOperario[i] = operario;
				Persistance::PersistBinaryFile("Operarios.bin", ListOperario);
				return 1;
			}
		}
		return 0;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}

List<Operario^>^ RobotMineroController::Controller::ConsultarTodosOperarios()
{
	/*try {
		ListOperario = (List<Operario^>^) Persistance::LoadBinaryFile("Operarios.bin");
		if (ListOperario== nullptr)
			ListOperario = gcnew List<Operario^>();
		return ListOperario;
	}
	catch (Exception^ ex) {
		throw ex;
	}*/
	return Persistance::QueryAllOperario();
}

int RobotMineroController::Controller::EliminarOperario(int oprarioId)
{
	try {
		for (int i = 0; i < ListOperario->Count; i++)
		{
			if (ListOperario[i]->Id == oprarioId) {
				ListOperario->RemoveAt(i);
				Persistance::PersistBinaryFile("Operarios.bin", ListOperario);
				return 1;
			}
		}
		return 0;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////	PEON
List<Peon^>^ RobotMineroController::Controller::ConsultarTodosPeones()
{	
	/*try {
		ListPeon = (List<Peon^>^) Persistance::LoadBinaryFile("Peones.bin");
		if (ListPeon == nullptr)
			ListPeon = gcnew List<Peon^>();
		return ListPeon;
	}
	catch (Exception^ ex) {
		throw ex;
	}*/
	return Persistance::QueryAllPeon();
}

int RobotMineroController::Controller::ActualizarPeon(Peon^ peon)
{
	try {
		for (int i = 0; i < ListPeon->Count; i++)
		{
			if (ListPeon[i]->Id == peon->Id) {
				ListPeon[i] = peon;
				Persistance::PersistBinaryFile("Peon.bin", ListPeon);
				return 1;
			}
		}
		return 0;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}

int RobotMineroController::Controller::EliminarPeon(int id)
{
	try{
		for (int i = 0; i < ListPeon->Count; i++)
		{
			if (ListPeon[i]->Id == id) {
				ListPeon->RemoveAt(i);
				Persistance::PersistBinaryFile("Peon.bin", ListPeon);
				return 1;
			}
		}
		return 0;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}
Peon^ RobotMineroController::Controller::DevolverPeonPorID(int peonID) {
	/*ListPeon = ConsultarTodosPeones();
	try {
		for each (Peon ^ resource in ListPeon)
		{
			if (resource->Id == peonID) {
				return resource;
			}
		}
		return nullptr;
	}
	catch (Exception^ ex) {
		throw ex;
	}*/
	return Persistance::QueryPeonById(peonID);
}
/////////////////////////////////////////////////////////////////////////////////////////////	SUPERVISOR															
Supervisor^ RobotMineroController::Controller::DevolverSupervisorPorID(int supervisorId)
{
	/*try {
		for each (Supervisor ^ supervisor in ListSupervisor)
		{
			if (supervisor->Id == supervisorId) {
				return supervisor;
			}
		}
		return nullptr;
	}
	catch (Exception^ ex) {
		throw ex;
	}*/
	return Persistance::QuerySupervisorById(supervisorId);
}
int RobotMineroController::Controller::ActualizarSupervisor(Supervisor^ supervisor)
{
	try {
		for (int i = 0; i < ListSupervisor->Count; i++)
		{
			if (ListSupervisor[i]->Id == supervisor->Id) {
				ListSupervisor[i] = supervisor;
				Persistance::PersistBinaryFile("Supervisor.bin", ListSupervisor);
				return 1;
			}
		}
		return 0;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}
List<Supervisor^>^ RobotMineroController::Controller::ConsultarTodosSupervisores()
{
	/*try {
		ListSupervisor = (List<Supervisor^>^) Persistance::LoadBinaryFile("Supervisor.bin");
		if (ListSupervisor == nullptr)
			ListSupervisor = gcnew List<Supervisor^>();
		return ListSupervisor;
	}
	catch (Exception^ ex) {
		throw ex;
	}*/
	return Persistance::QueryAllSupervisor();
}
int RobotMineroController::Controller::EliminarSupervisor(int supervisorId)
{
	try {
		for (int i = 0; i < ListSupervisor->Count; i++)
		{
			if (ListSupervisor[i]->Id == supervisorId) {
				ListSupervisor->RemoveAt(i);
				Persistance::PersistBinaryFile("Supervisor.bin", ListSupervisor);
				return 1;
			}
		}
		return 0;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////	ING AMBIENTAL
IngAmbiental^ RobotMineroController::Controller::DevolverIngAmbientalPorID(int IngAmbientalId)
{
	/*try {
		for each (IngAmbiental ^ ingAmbiental in ListAmbiental)
		{
			if (ingAmbiental->Id == IngAmbientalId) {
				return ingAmbiental;
			}
		}
		return nullptr;
	}
	catch (Exception^ ex) {
		throw ex;
	}*/
	return Persistance::QueryIngAmbientalById(IngAmbientalId);
}

int RobotMineroController::Controller::ActualizarIngAmbiental(IngAmbiental^ IngAmbiental)
{
	try {
		for (int i = 0; i < ListAmbiental->Count; i++)
		{
			if (ListAmbiental[i]->Id == IngAmbiental->Id) {
				ListAmbiental[i] = IngAmbiental;
				Persistance::PersistBinaryFile("IngAmbiental.bin", ListSupervisor);
				return 1;
			}
		}
		return 0;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}

List<IngAmbiental^>^ RobotMineroController::Controller::ConsultarTodosIngAmbientales()
{
	/*try {
		ListAmbiental = (List<IngAmbiental^>^) Persistance::LoadBinaryFile("IngAmbiental.bin");
		if (ListAmbiental == nullptr)
			ListAmbiental = gcnew List<IngAmbiental^>();
		return ListAmbiental;
	}
	catch (Exception^ ex) {
		throw ex;
	}*/
	return Persistance::QueryAllIngAmbiental();
}
int RobotMineroController::Controller::EliminarIngAmbiental(int IngAmbientalId)
{
	try {
		for (int i = 0; i < ListSupervisor->Count; i++)
		{
			if (ListAmbiental[i]->Id == IngAmbientalId) {
				ListAmbiental->RemoveAt(i);
				Persistance::PersistBinaryFile("IngAmbiental.bin", ListAmbiental);
				return 1;
			}
		}
		return 0;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////	JEFE INVENTARIO
JefeInventario^ RobotMineroController::Controller::DevolverJefeInventarioPorID(int JefeInventarioId)
{
	try {
		for each (JefeInventario ^ jefeInventario in ListJefeInventario)
		{
			if (jefeInventario->Id == JefeInventarioId) {
				return jefeInventario;
			}
		}
		return nullptr;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}
int RobotMineroController::Controller::ActualizarJefeInventario(JefeInventario^ jefeInventario)
{
	try {
		for (int i = 0; i < ListJefeInventario->Count; i++)
		{
			if (ListJefeInventario[i]->Id == jefeInventario->Id) {
				ListJefeInventario[i] = jefeInventario;
				Persistance::PersistBinaryFile("JefeInventario.bin", ListJefeInventario);
				return 1;
			}
		}
		return 0;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}
List<JefeInventario^>^ RobotMineroController::Controller::ConsultarJefeInventario()
{
	try {
		ListJefeInventario = (List<JefeInventario^>^) Persistance::LoadBinaryFile("JefeInventario.bin");
		if (ListJefeInventario == nullptr)
			ListJefeInventario = gcnew List<JefeInventario^>();
		return ListJefeInventario;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}
int RobotMineroController::Controller::EliminarJefeInventario(int JefeInventarioId)
{
	try {
		for (int i = 0; i < ListJefeInventario->Count; i++)
		{
			if (ListJefeInventario[i]->Id == JefeInventarioId) {
				ListJefeInventario->RemoveAt(i);
				Persistance::PersistBinaryFile("JefeInventario.bin", ListJefeInventario);
				return 1;
			}
		}
		return 0;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////	

void RobotMineroController::Controller::SaveId(int Id)
{
	savedorId = Id;
	return ;
}

int RobotMineroController::Controller::returnId()
{
	return savedorId;
}
