#include "PeonForm.h"
#include "FirstStepForm.h"

System::Void RobotMineroGUIApp::PeonForm::LinkVolver_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	FirstStepForm^ menuInicio = gcnew FirstStepForm();
	menuInicio->Show();
	this->Close();
}

System::Void RobotMineroGUIApp::PeonForm::PeonForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	FirstStepForm^ menuInicio = gcnew FirstStepForm();
	menuInicio->Show();
}
