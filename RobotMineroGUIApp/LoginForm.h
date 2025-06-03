#pragma once
#include "RobotMineroForm.h"

namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

			// Asociar tecla Enter al botón de aceptar
			this->AcceptButton = this->bttnAddPassword;

			// Asociar tecla Esc al botón de cancelar
			this->CancelButton = this->bttnCancelPassword;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textPasswordInput;
	private: System::Windows::Forms::Button^ bttnAddPassword;
	private: System::Windows::Forms::Button^ bttnCancelPassword;



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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textPasswordInput = (gcnew System::Windows::Forms::TextBox());
			this->bttnAddPassword = (gcnew System::Windows::Forms::Button());
			this->bttnCancelPassword = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(163, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(351, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese la contraseña para modificar o";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(198, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(275, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"actualizar los datos del equipo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(90, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contraseña:";
			// 
			// textPasswordInput
			// 
			this->textPasswordInput->Location = System::Drawing::Point(228, 125);
			this->textPasswordInput->Name = L"textPasswordInput";
			this->textPasswordInput->PasswordChar = '*';
			this->textPasswordInput->Size = System::Drawing::Size(121, 20);
			this->textPasswordInput->TabIndex = 3;
			// 
			// bttnAddPassword
			// 
			this->bttnAddPassword->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bttnAddPassword->Location = System::Drawing::Point(93, 187);
			this->bttnAddPassword->Name = L"bttnAddPassword";
			this->bttnAddPassword->Size = System::Drawing::Size(75, 23);
			this->bttnAddPassword->TabIndex = 4;
			this->bttnAddPassword->Text = L"Aceptar";
			this->bttnAddPassword->UseVisualStyleBackColor = false;
			this->bttnAddPassword->Click += gcnew System::EventHandler(this, &LoginForm::bttnAddPassword_Click);
			// 
			// bttnCancelPassword
			// 
			this->bttnCancelPassword->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bttnCancelPassword->Location = System::Drawing::Point(274, 187);
			this->bttnCancelPassword->Name = L"bttnCancelPassword";
			this->bttnCancelPassword->Size = System::Drawing::Size(75, 23);
			this->bttnCancelPassword->TabIndex = 5;
			this->bttnCancelPassword->Text = L"Cancelar";
			this->bttnCancelPassword->UseVisualStyleBackColor = false;
			this->bttnCancelPassword->Click += gcnew System::EventHandler(this, &LoginForm::bttnCancelPassword_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(708, 287);
			this->Controls->Add(this->bttnCancelPassword);
			this->Controls->Add(this->bttnAddPassword);
			this->Controls->Add(this->textPasswordInput);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bttnAddPassword_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ contrasenha = textPasswordInput->Text->Trim();
		if (contrasenha == nullptr) {
			MessageBox::Show("Debe ingresar alguna contraseña");
		}
		else if (contrasenha == "password123") {
			MessageBox::Show("Bienvedido a la interfaz. Por favor haga click en 'Aceptar'");
			RobotMineroForm^ robotMineroForm = gcnew RobotMineroForm();
			robotMineroForm->Show();
			this->Close();
		}
		else {
			MessageBox::Show("La contraseña es incorrecta");
		}
	}
	private: System::Void bttnCancelPassword_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
