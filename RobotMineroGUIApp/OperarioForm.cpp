#include "OperarioForm.h"
#include "FirstStepForm.h"

System::Void RobotMineroGUIApp::OperarioForm::OperarioVolver_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	FirstStepForm^ menuInicio = gcnew FirstStepForm();
	menuInicio->Show();
	this->Close();
}

System::Void RobotMineroGUIApp::OperarioForm::OperarioForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	FirstStepForm^ menuInicio = gcnew FirstStepForm();
	menuInicio->Show();
}
