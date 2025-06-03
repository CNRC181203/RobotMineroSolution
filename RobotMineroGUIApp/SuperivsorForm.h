#pragma once
#include "ShowDatesUserForm.h"
namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SuperivsorForm
	/// </summary>
	public ref class SuperivsorForm : public System::Windows::Forms::Form
	{
	public:
		SuperivsorForm(void)
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
		~SuperivsorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bttnShowMapaS;
	private: System::Windows::Forms::Button^ bttnShowMydatesS;
	private: System::Windows::Forms::Button^ bttnInputMoreDatesS;
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
			this->bttnShowMapaS = (gcnew System::Windows::Forms::Button());
			this->bttnShowMydatesS = (gcnew System::Windows::Forms::Button());
			this->bttnInputMoreDatesS = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bttnShowMapaS
			// 
			this->bttnShowMapaS->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnShowMapaS->Location = System::Drawing::Point(41, 39);
			this->bttnShowMapaS->Name = L"bttnShowMapaS";
			this->bttnShowMapaS->Size = System::Drawing::Size(136, 29);
			this->bttnShowMapaS->TabIndex = 3;
			this->bttnShowMapaS->Text = L"Mapa de gases";
			this->bttnShowMapaS->UseVisualStyleBackColor = true;
			// 
			// bttnShowMydatesS
			// 
			this->bttnShowMydatesS->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnShowMydatesS->Location = System::Drawing::Point(277, 39);
			this->bttnShowMydatesS->Name = L"bttnShowMydatesS";
			this->bttnShowMydatesS->Size = System::Drawing::Size(190, 29);
			this->bttnShowMydatesS->TabIndex = 5;
			this->bttnShowMydatesS->Text = L"Visualizar mis datos";
			this->bttnShowMydatesS->UseVisualStyleBackColor = true;
			this->bttnShowMydatesS->Click += gcnew System::EventHandler(this, &SuperivsorForm::bttnShowMydatesS_Click);
			// 
			// bttnInputMoreDatesS
			// 
			this->bttnInputMoreDatesS->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnInputMoreDatesS->Location = System::Drawing::Point(41, 112);
			this->bttnInputMoreDatesS->Name = L"bttnInputMoreDatesS";
			this->bttnInputMoreDatesS->Size = System::Drawing::Size(190, 29);
			this->bttnInputMoreDatesS->TabIndex = 6;
			this->bttnInputMoreDatesS->Text = L"Ingresar datos adicionales";
			this->bttnInputMoreDatesS->UseVisualStyleBackColor = true;
			// 
			// SuperivsorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(515, 180);
			this->Controls->Add(this->bttnInputMoreDatesS);
			this->Controls->Add(this->bttnShowMydatesS);
			this->Controls->Add(this->bttnShowMapaS);
			this->Name = L"SuperivsorForm";
			this->Text = L"SuperivsorForm";
			this->Load += gcnew System::EventHandler(this, &SuperivsorForm::SuperivsorForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SuperivsorForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bttnShowMydatesS_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowDatesUserForm^ pantallaSupervisor = gcnew ShowDatesUserForm();
		pantallaSupervisor->Show();
	}
	};
}
