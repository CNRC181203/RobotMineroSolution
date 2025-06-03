#include "SuperivsorForm.h"
#include"FirstStepForm.h"

System::Void RobotMineroGUIApp::SuperivsorForm::LinkVolver_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	FirstStepForm^ menuInicio = gcnew FirstStepForm();
	menuInicio->Show();
	this->Close();
}

System::Void RobotMineroGUIApp::SuperivsorForm::SuperivsorForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	FirstStepForm^ menuInicio = gcnew FirstStepForm();
	menuInicio->Show();
}
