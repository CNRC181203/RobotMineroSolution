#include "RobotMineroForm.h"
#include"FirstStepForm.h"

System::Void RobotMineroGUIApp::RobotMineroForm::RobotMineroForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	FirstStepForm^ firstForm = gcnew FirstStepForm();
	firstForm->Show();
}
