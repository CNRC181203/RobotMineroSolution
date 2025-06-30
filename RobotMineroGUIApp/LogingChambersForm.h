#pragma once
#include "OperarioForm.h"
#include "PeonForm.h"
#include "SuperivsorForm.h"
#include "IngAmbientalForm.h"
#include "JefeInventarioForm.h"


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
	private: System::Windows::Forms::TextBox^ textUsuario;


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
			this->textUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtPasswordLoginChamb = (gcnew System::Windows::Forms::TextBox());
			this->bttnAceppt2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(101, 95);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(101, 140);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña:";
			// 
			// textUsuario
			// 
			this->textUsuario->Location = System::Drawing::Point(288, 95);
			this->textUsuario->Margin = System::Windows::Forms::Padding(4);
			this->textUsuario->Name = L"textUsuario";
			this->textUsuario->Size = System::Drawing::Size(132, 22);
			this->textUsuario->TabIndex = 2;
			// 
			// txtPasswordLoginChamb
			// 
			this->txtPasswordLoginChamb->Location = System::Drawing::Point(288, 140);
			this->txtPasswordLoginChamb->Margin = System::Windows::Forms::Padding(4);
			this->txtPasswordLoginChamb->Name = L"txtPasswordLoginChamb";
			this->txtPasswordLoginChamb->Size = System::Drawing::Size(132, 22);
			this->txtPasswordLoginChamb->TabIndex = 3;
			// 
			// bttnAceppt2
			// 
			this->bttnAceppt2->Location = System::Drawing::Point(212, 215);
			this->bttnAceppt2->Margin = System::Windows::Forms::Padding(4);
			this->bttnAceppt2->Name = L"bttnAceppt2";
			this->bttnAceppt2->Size = System::Drawing::Size(100, 28);
			this->bttnAceppt2->TabIndex = 4;
			this->bttnAceppt2->Text = L"Aceptar";
			this->bttnAceppt2->UseVisualStyleBackColor = true;
			this->bttnAceppt2->UseWaitCursor = true;
			this->bttnAceppt2->Click += gcnew System::EventHandler(this, &LogingChambersForm::bttnAceppt2_Click);
			// 
			// LogingChambersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 277);
			this->Controls->Add(this->bttnAceppt2);
			this->Controls->Add(this->txtPasswordLoginChamb);
			this->Controls->Add(this->textUsuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"LogingChambersForm";
			this->Text = L"LogingChambersForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &LogingChambersForm::LogingChambersForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &LogingChambersForm::LogingChambersForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void LogingChambersForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: bool cerradoPorCodigo = false;
	
private: System::Void bttnAceppt2_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ NombreUsuario = textUsuario->Text->Trim();
		if (Controller::DevolverUsuarioPorNomUsuario(NombreUsuario) != nullptr) {
			Usuario^ user = Controller::DevolverUsuarioPorNomUsuario(NombreUsuario);
			String^ extractPassword = txtPasswordLoginChamb->Text;

			if (extractPassword == user->Contrasenha) {
				String^ mensaje = String::Format("Bienvenido {0} {1}", user->Nombre, user->Apelllido);
				MessageBox::Show(mensaje);
				Controller::SaveId(user->Id);
				cerradoPorCodigo = true;
				this->Close();
				if (user->GetType() == Operario::typeid) {

					OperarioForm^ showOperario = gcnew OperarioForm();

					showOperario->Show();
				}
				else {
					if (user->GetType() == IngAmbiental::typeid) {
						IngAmbientalForm^ showIng = gcnew IngAmbientalForm();

						showIng->Show();
					}
					else {
						if (user->GetType() == Supervisor::typeid) {
							SuperivsorForm^ showSupervisor = gcnew SuperivsorForm();

							showSupervisor->Show();
						}
						else {
							if (user->GetType() == Peon::typeid) {
								PeonForm^ showPeon = gcnew PeonForm();

								showPeon->Show();
							}
							else {
								if (user->GetType() == JefeInventario::typeid) {
									JefeInventarioForm^ showJefeInv = gcnew JefeInventarioForm();
									showJefeInv->Show();
								}
								else {
									MessageBox::Show("Tipo de usuario no reconocido");
								}
							}
						}
					}
				}
			}
			else {
				MessageBox::Show("La contraseña es incorrecta");
			}
		}
		else {
			MessageBox::Show("Nombre de usuario no encontrado");
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
}
private: System::Void LogingChambersForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
