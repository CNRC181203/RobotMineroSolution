#include "ShowDatesPeonForm.h"
#include"PeonForm.h"

System::Void RobotMineroGUIApp::ShowDatesPeonForm::btnAtras_Click(System::Object^ sender, System::EventArgs^ e)
{
    PeonForm^ menuPeon = gcnew PeonForm();
    menuPeon->Show();
    this->Close();
}
