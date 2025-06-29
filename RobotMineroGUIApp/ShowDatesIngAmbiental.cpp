#include "ShowDatesIngAmbiental.h"
#include "IngAmbientalForm.h"


System::Void RobotMineroGUIApp::ShowDatesIngAmbiental::btnAtras_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	IngAmbientalForm^ ingAmbientalForm = gcnew IngAmbientalForm();
	ingAmbientalForm->Show();
}