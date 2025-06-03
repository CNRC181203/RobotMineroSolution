#pragma once
#include "OperarioForm.h"
#include "PeonForm.h"
#include "SuperivsorForm.h"
#include "IngAmbientalForm.h"

#include "ShowDatesUserForm.h"

namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace RobotMineroController;
	using namespace RobotMineroModel;
	using namespace System::Collections::Generic;

	using namespace RobotMineroGUIApp;

	/// <summary>
	/// Resumen de LogingChambersForm
	/// </summary>
	public ref class LogingChambersForm : public System::Windows::Forms::Form
	{
	public:


		LogingChambersForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->AcceptButton = this->bttnAceppt2;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LogingChambersForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textIDLoginChamb;

	private: System::Windows::Forms::TextBox^ txtPasswordLoginChamb;
	private: System::Windows::Forms::Button^ bttnAceppt2;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textIDLoginChamb = (gcnew System::Windows::Forms::TextBox());
			this->txtPasswordLoginChamb = (gcnew System::Windows::Forms::TextBox());
			this->bttnAceppt2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(76, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(76, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña:";
			// 
			// textIDLoginChamb
			// 
			this->textIDLoginChamb->Location = System::Drawing::Point(216, 77);
			this->textIDLoginChamb->Name = L"textIDLoginChamb";
			this->textIDLoginChamb->Size = System::Drawing::Size(100, 20);
			this->textIDLoginChamb->TabIndex = 2;
			// 
			// txtPasswordLoginChamb
			// 
			this->txtPasswordLoginChamb->Location = System::Drawing::Point(216, 114);
			this->txtPasswordLoginChamb->Name = L"txtPasswordLoginChamb";
			this->txtPasswordLoginChamb->Size = System::Drawing::Size(100, 20);
			this->txtPasswordLoginChamb->TabIndex = 3;
			// 
			// bttnAceppt2
			// 
			this->bttnAceppt2->Location = System::Drawing::Point(159, 175);
			this->bttnAceppt2->Name = L"bttnAceppt2";
			this->bttnAceppt2->Size = System::Drawing::Size(75, 23);
			this->bttnAceppt2->TabIndex = 4;
			this->bttnAceppt2->Text = L"Aceptar";
			this->bttnAceppt2->UseVisualStyleBackColor = true;
			this->bttnAceppt2->UseWaitCursor = true;
			this->bttnAceppt2->Click += gcnew System::EventHandler(this, &LogingChambersForm::bttnAceppt2_Click);
			// 
			// LogingChambersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 225);
			this->Controls->Add(this->bttnAceppt2);
			this->Controls->Add(this->txtPasswordLoginChamb);
			this->Controls->Add(this->textIDLoginChamb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LogingChambersForm";
			this->Text = L"LogingChambersForm";
			this->Load += gcnew System::EventHandler(this, &LogingChambersForm::LogingChambersForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LogingChambersForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void bttnAceppt2_Click(System::Object^ sender, System::EventArgs^ e) {
	int extractID = Int32::Parse(textIDLoginChamb->Text);
	List<Usuario^>^ ususarioLoginChamb = Controller::ConsultarTodosUsuario();
	bool centinel_valid = 0;
	for (int i = 0; i < ususarioLoginChamb->Count; i++)
	{
		if (ususarioLoginChamb[i]->Id == extractID) {
			centinel_valid = 1;
			break;
		}
	}
	if (centinel_valid == 0) {
		MessageBox::Show("No se encontro la ID");
	}
	else {
		Usuario^ Users_Valid = Controller::DevolverUsuarioPorID(extractID);
		Controller::SaveId(extractID);
		String^ extractPassword = txtPasswordLoginChamb->Text;

		if (extractPassword == Users_Valid->contrasenha) {
			String^ mensaje = String::Format("Bienvenido {0} {1}", Users_Valid->Nombre, Users_Valid->Apelllido);
			MessageBox::Show(mensaje);
			Controller::SaveId(Users_Valid->Id);

			if (Users_Valid->Cargo == "Operario") {

				OperarioForm^ showOperario = gcnew OperarioForm();

				showOperario->Show();
			}
			else {
				if (Users_Valid->Cargo == "IngAmbiental") {
					IngAmbientalForm^ showIng = gcnew IngAmbientalForm();

					showIng->Show();
				}
				else {
					if (Users_Valid->Cargo == "Supervisor") {
						SuperivsorForm^ showSupervisor = gcnew SuperivsorForm();

						showSupervisor->Show();
					}
					else {
						if (Users_Valid->Cargo == "Peon") {
							PeonForm^ showPeon = gcnew PeonForm();

							showPeon->Show();
						}
					}
				}
			}
		}
		else {
			MessageBox::Show("La contraseña es incorrecta");
		}
	}
}
};
}
