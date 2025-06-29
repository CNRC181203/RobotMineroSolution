#include "ShowDatesOperario.h"
#include"OperarioForm.h"

System::Void RobotMineroGUIApp::ShowDatesOperario::btnAtras_Click(System::Object^ sender, System::EventArgs^ e)
{
    OperarioForm^ menuOperario = gcnew OperarioForm();
    menuOperario->Show();
    this->Close();
}
