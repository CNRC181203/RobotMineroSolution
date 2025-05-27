#pragma once
#include "LoginForm.h"
#include "LogingChambersForm.h"

namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FirstStepForm
	/// </summary>
	public ref class FirstStepForm : public System::Windows::Forms::Form
	{
	public:
		FirstStepForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FirstStepForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ bttnMantenimiento;

	private: System::Windows::Forms::Button^ bttnLogin;


	protected:


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FirstStepForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bttnMantenimiento = (gcnew System::Windows::Forms::Button());
			this->bttnLogin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkRed;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(225, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(470, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido a la interfaz del Robot Minero";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DarkRed;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(307, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(301, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Seleccione alguna de las opciones:";
			// 
			// bttnMantenimiento
			// 
			this->bttnMantenimiento->BackColor = System::Drawing::Color::ForestGreen;
			this->bttnMantenimiento->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnMantenimiento->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bttnMantenimiento->Location = System::Drawing::Point(229, 200);
			this->bttnMantenimiento->Name = L"bttnMantenimiento";
			this->bttnMantenimiento->Size = System::Drawing::Size(142, 28);
			this->bttnMantenimiento->TabIndex = 2;
			this->bttnMantenimiento->Text = L"Mantenimiento";
			this->bttnMantenimiento->UseVisualStyleBackColor = false;
			this->bttnMantenimiento->Click += gcnew System::EventHandler(this, &FirstStepForm::bttnMantenimiento_Click);
			// 
			// bttnLogin
			// 
			this->bttnLogin->BackColor = System::Drawing::Color::ForestGreen;
			this->bttnLogin->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnLogin->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bttnLogin->Location = System::Drawing::Point(553, 200);
			this->bttnLogin->Name = L"bttnLogin";
			this->bttnLogin->Size = System::Drawing::Size(152, 28);
			this->bttnLogin->TabIndex = 3;
			this->bttnLogin->Text = L"Iniciar Sesión";
			this->bttnLogin->UseVisualStyleBackColor = false;
			this->bttnLogin->Click += gcnew System::EventHandler(this, &FirstStepForm::bttnLogin_Click);
			// 
			// FirstStepForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(952, 345);
			this->Controls->Add(this->bttnLogin);
			this->Controls->Add(this->bttnMantenimiento);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Name = L"FirstStepForm";
			this->Text = L"FirstStepForm";
			this->Load += gcnew System::EventHandler(this, &FirstStepForm::FirstStepForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FirstStepForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void bttnMantenimiento_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ LogObject = gcnew LoginForm();
	LogObject->Show();
}
private: System::Void bttnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	LogingChambersForm^ objectForm = gcnew LogingChambersForm();
	objectForm->Show();
}
};
}
