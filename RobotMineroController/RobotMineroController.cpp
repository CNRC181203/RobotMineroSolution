#include "pch.h"
#include "RobotMineroController.h"


int RobotMineroController::Controller::AgregarUsuario(Usuario^ usuario)
{
	try {
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
	return 0;
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

	try {
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
	}
}

int RobotMineroController::Controller::EliminarUsuario(int id)
{
	try {
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
	}
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
/////////	OPERARIO
Operario^ RobotMineroController::Controller::DevolverOperarioPorID(int operarioId)
{
	ListOperario = ConsultarTodosOperarios();
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
	}
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
	try {
		ListOperario = (List<Operario^>^) Persistance::LoadBinaryFile("Operarios.bin");
		if (ListOperario== nullptr)
			ListOperario = gcnew List<Operario^>();
		return ListOperario;
	}
	catch (Exception^ ex) {
		throw ex;
	}
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

/////////	PEON
List<Peon^>^ RobotMineroController::Controller::ConsultarTodosPeones()
{	
	try {
		ListPeon = (List<Peon^>^) Persistance::LoadBinaryFile("Peones.bin");
		if (ListPeon == nullptr)
			ListPeon = gcnew List<Peon^>();
		return ListPeon;
	}
	catch (Exception^ ex) {
		throw ex;
	}
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
	ListPeon = ConsultarTodosPeones();
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
	}
}

////////	SUPERVISOR															
Supervisor^ RobotMineroController::Controller::DevolverSupervisorPorID(int supervisorId)
{
	try {
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
	}
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
	try {
		ListSupervisor = (List<Supervisor^>^) Persistance::LoadBinaryFile("Supervisor.bin");
		if (ListSupervisor == nullptr)
			ListSupervisor = gcnew List<Supervisor^>();
		return ListSupervisor;
	}
	catch (Exception^ ex) {
		throw ex;
	}
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

////////	ING AMBIENTAL
IngAmbiental^ RobotMineroController::Controller::DevolverIngAmbientalPorID(int IngAmbientalId)
{
	try {
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
	}
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
	try {
		ListAmbiental = (List<IngAmbiental^>^) Persistance::LoadBinaryFile("IngAmbiental.bin");
		if (ListAmbiental == nullptr)
			ListAmbiental = gcnew List<IngAmbiental^>();
		return ListAmbiental;
	}
	catch (Exception^ ex) {
		throw ex;
	}
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

////////	JEFE INVENTARIO
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

/* ====================== Actuadores ==================*/

int RobotMineroController::Controller::AgregarComponete(Componentes^ componente)
{
	try {
		ListComponentes->Add(componente);
		Persistance::PersistBinaryFile("Componentes.bin", ListComponentes);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
}

List<Componentes^>^ RobotMineroController::Controller::ConsultarTodosComponentes()
{
	try {
		ListComponentes = (List<Componentes^>^) Persistance::LoadBinaryFile("Componentes.bin");
		if (ListComponentes == nullptr)
			ListComponentes = gcnew List<Componentes^>();
		return ListComponentes;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}

int RobotMineroController::Controller::ActualizarComponete(Componentes^ componente)
{
	try {
		for (int i = 0; i < ListComponentes->Count; i++)
		{
			if (ListComponentes[i]->Id == componente->Id) {
				ListComponentes[i] = componente;
				Persistance::PersistBinaryFile("Componentes.bin", ListComponentes);
				return 1;
			}
		}
		return 0;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}

int RobotMineroController::Controller::EliminarComponete(int id)
{
	try {
		for (int i = 0; i < ListComponentes->Count; i++)
		{
			if (ListComponentes[i]->Id == id) {
				ListComponentes->RemoveAt(i);
				Persistance::PersistBinaryFile("Componentes.bin", ListComponentes);
				return 1;
			}
		}
		return 0;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}

Componentes^ RobotMineroController::Controller::DevolverComponentePorID(int componenteID)
{
	try {
		ListComponentes = ConsultarTodosComponentes();
		for each (Componentes ^ componente in ListComponentes)
		{
			if (componente->Id == componenteID) {
				return componente;
			}
		}
		return nullptr;
	}
	catch (Exception^ ex) {
		throw ex;
	}
}
///* ====================== Carro Minero ==================*/
int RobotMineroController::Controller::AgregarCarroMinero(CarroMinero^ carro)
{
	try {
		ListCarroMinero->Add(carro);
		Persistance::PersistBinaryFile("CarroMinero.bin", ListCarroMinero);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
	
}

List<CarroMinero^>^ RobotMineroController::Controller::ConsultarTodosCarrosMinero()
{
	try {
		ListCarroMinero = (List<CarroMinero^>^) Persistance::LoadBinaryFile("CarroMinero.bin");
		if (ListCarroMinero == nullptr)
			ListCarroMinero = gcnew List<CarroMinero^>();
		return ListCarroMinero;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	
}

int RobotMineroController::Controller::ActualizarCarroMinero(CarroMinero^ carro)
{
	try {
		for (int i = 0; i < ListCarroMinero->Count; i++)
		{
			if (ListCarroMinero[i]->Id == carro->Id) {
				ListCarroMinero[i] = carro;
				Persistance::PersistBinaryFile("CarroMinero.bin", ListCarroMinero);
				return 1;
			}
		}
		return 0;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	
}

int RobotMineroController::Controller::EliminarCarroMinero(int carroId)
{
	try {
		for (int i = 0; i < ListCarroMinero->Count; i++)
		{
			if (ListCarroMinero[i]->Id == carroId) {
				ListCarroMinero->RemoveAt(i);
				Persistance::PersistBinaryFile("CarroMinero.bin", ListCarroMinero);
				return 1;
			}
		}
		return 0;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	
}

CarroMinero^ RobotMineroController::Controller::DevolverCarroMineroPorID(int carroId)
{
	ListCarroMinero = ConsultarTodosCarrosMinero();
	try {
		for each (CarroMinero ^ carro in ListCarroMinero)
		{
			if (carro->Id == carroId) {
				return carro;
			}
		}
		return nullptr;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	
}




/* */

void RobotMineroController::Controller::SaveId(int Id)
{
	savedorId = Id;
	return ;
}

int RobotMineroController::Controller::returnId()
{
	return savedorId;
}
