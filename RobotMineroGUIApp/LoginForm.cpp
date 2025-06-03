#include "LoginForm.h"
#include "FirstStepForm.h"

namespace RobotMineroGUIApp {
	System::Void LoginForm::LoginForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		if (!cerradoPorCodigo) {
			// Aquí sí asumimos que el usuario cerró con la X
			FirstStepForm^ firstForm = gcnew FirstStepForm();
			firstForm->Show();
		}
	}
}
