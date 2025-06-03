#include "LoginForm.h"
#include "FirstStepForm.h"

namespace RobotMineroGUIApp {
	System::Void LoginForm::LoginForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		if (!cerradoPorCodigo) {
			// Aqu� s� asumimos que el usuario cerr� con la X
			FirstStepForm^ firstForm = gcnew FirstStepForm();
			firstForm->Show();
		}
	}
}
