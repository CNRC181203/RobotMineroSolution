#include "FirstStepForm.h"

using namespace RobotMineroGUIApp;

[STAThreadAttribute]
int main() {
	FirstStepForm^ mainForm = gcnew FirstStepForm();
	Application::Run(mainForm);
	return 0;
}
