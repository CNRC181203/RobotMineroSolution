#include "LogingChambersForm.h"
#include "FirstStepForm.h"

System::Void RobotMineroGUIApp::LogingChambersForm::LogingChambersForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	if (!cerradoPorCodigo) {
		// Aqu� s� asumimos que el usuario cerr� con la X
		FirstStepForm^ firstForm = gcnew FirstStepForm();
		firstForm->Show();
	}
}
