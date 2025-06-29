#include "ShowDatesSupervisor.h"
#include"SuperivsorForm.h"

System::Void RobotMineroGUIApp::ShowDatesSupervisor::btnAtras_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	SuperivsorForm^ supervisorForm = gcnew SuperivsorForm();
	supervisorForm->Show();
}

