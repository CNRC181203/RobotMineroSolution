#pragma once
#include "ShowDatesSupervisor.h"
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
	private: System::Windows::Forms::LinkLabel^ LinkVolver;

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
			this->LinkVolver = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// bttnShowMapaS
			// 
			this->bttnShowMapaS->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnShowMapaS->Location = System::Drawing::Point(58, 83);
			this->bttnShowMapaS->Margin = System::Windows::Forms::Padding(4);
			this->bttnShowMapaS->Name = L"bttnShowMapaS";
			this->bttnShowMapaS->Size = System::Drawing::Size(181, 36);
			this->bttnShowMapaS->TabIndex = 3;
			this->bttnShowMapaS->Text = L"Mapa de gases";
			this->bttnShowMapaS->UseVisualStyleBackColor = true;
			// 
			// bttnShowMydatesS
			// 
			this->bttnShowMydatesS->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnShowMydatesS->Location = System::Drawing::Point(367, 83);
			this->bttnShowMydatesS->Margin = System::Windows::Forms::Padding(4);
			this->bttnShowMydatesS->Name = L"bttnShowMydatesS";
			this->bttnShowMydatesS->Size = System::Drawing::Size(253, 36);
			this->bttnShowMydatesS->TabIndex = 5;
			this->bttnShowMydatesS->Text = L"Visualizar mis datos";
			this->bttnShowMydatesS->UseVisualStyleBackColor = true;
			this->bttnShowMydatesS->Click += gcnew System::EventHandler(this, &SuperivsorForm::bttnShowMydatesS_Click);
			// 
			// LinkVolver
			// 
			this->LinkVolver->AutoSize = true;
			this->LinkVolver->Location = System::Drawing::Point(579, 197);
			this->LinkVolver->Name = L"LinkVolver";
			this->LinkVolver->Size = System::Drawing::Size(87, 16);
			this->LinkVolver->TabIndex = 9;
			this->LinkVolver->TabStop = true;
			this->LinkVolver->Text = L"Cerrar sesión";
			this->LinkVolver->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &SuperivsorForm::LinkVolver_LinkClicked);
			// 
			// SuperivsorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(687, 222);
			this->Controls->Add(this->LinkVolver);
			this->Controls->Add(this->bttnShowMydatesS);
			this->Controls->Add(this->bttnShowMapaS);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"SuperivsorForm";
			this->Text = L"SuperivsorForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &SuperivsorForm::SuperivsorForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &SuperivsorForm::SuperivsorForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SuperivsorForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bttnShowMydatesS_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowDatesSupervisor^ pantallaSupervisor = gcnew ShowDatesSupervisor();
		pantallaSupervisor->Show();
		this->Hide();
	}
	private: System::Void LinkVolver_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
private: System::Void SuperivsorForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
