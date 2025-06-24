#pragma once

#include "ShowDatesUserForm.h"
#include "ReporteFuncionamientoForm.h"
#include "OpcionesCarritoForm.h"
namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de OperarioForm
	/// </summary>
	public ref class OperarioForm : public System::Windows::Forms::Form
	{
	public:
		OperarioForm(void)
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
		~OperarioForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ bttnStartAnalisis;
	private: System::Windows::Forms::Button^ bttnReport;
	private: System::Windows::Forms::Button^ bttnShowMydatesO;
	private: System::Windows::Forms::LinkLabel^ OperarioVolver;
	private: System::Windows::Forms::Button^ btnElecionCarro;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bttnStartAnalisis = (gcnew System::Windows::Forms::Button());
			this->bttnReport = (gcnew System::Windows::Forms::Button());
			this->bttnShowMydatesO = (gcnew System::Windows::Forms::Button());
			this->OperarioVolver = (gcnew System::Windows::Forms::LinkLabel());
			this->btnElecionCarro = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Elija una opción:";
			// 
			// bttnStartAnalisis
			// 
			this->bttnStartAnalisis->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnStartAnalisis->Location = System::Drawing::Point(328, 115);
			this->bttnStartAnalisis->Name = L"bttnStartAnalisis";
			this->bttnStartAnalisis->Size = System::Drawing::Size(115, 29);
			this->bttnStartAnalisis->TabIndex = 1;
			this->bttnStartAnalisis->Text = L"Iniciar Analisis";
			this->bttnStartAnalisis->UseVisualStyleBackColor = true;
			// 
			// bttnReport
			// 
			this->bttnReport->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnReport->Location = System::Drawing::Point(38, 190);
			this->bttnReport->Name = L"bttnReport";
			this->bttnReport->Size = System::Drawing::Size(190, 29);
			this->bttnReport->TabIndex = 3;
			this->bttnReport->Text = L"Reporte de funcionamiento";
			this->bttnReport->UseVisualStyleBackColor = true;
			this->bttnReport->Click += gcnew System::EventHandler(this, &OperarioForm::bttnReport_Click);
			// 
			// bttnShowMydatesO
			// 
			this->bttnShowMydatesO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnShowMydatesO->Location = System::Drawing::Point(290, 190);
			this->bttnShowMydatesO->Name = L"bttnShowMydatesO";
			this->bttnShowMydatesO->Size = System::Drawing::Size(190, 29);
			this->bttnShowMydatesO->TabIndex = 4;
			this->bttnShowMydatesO->Text = L"Visualizar mis datos";
			this->bttnShowMydatesO->UseVisualStyleBackColor = true;
			this->bttnShowMydatesO->Click += gcnew System::EventHandler(this, &OperarioForm::bttnShowMydatesO_Click);
			// 
			// OperarioVolver
			// 
			this->OperarioVolver->AutoSize = true;
			this->OperarioVolver->Location = System::Drawing::Point(531, 271);
			this->OperarioVolver->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->OperarioVolver->Name = L"OperarioVolver";
			this->OperarioVolver->Size = System::Drawing::Size(68, 13);
			this->OperarioVolver->TabIndex = 5;
			this->OperarioVolver->TabStop = true;
			this->OperarioVolver->Text = L"Cerrar sesión";
			this->OperarioVolver->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &OperarioForm::OperarioVolver_LinkClicked);
			// 
			// btnElecionCarro
			// 
			this->btnElecionCarro->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnElecionCarro->Location = System::Drawing::Point(55, 115);
			this->btnElecionCarro->Name = L"btnElecionCarro";
			this->btnElecionCarro->Size = System::Drawing::Size(160, 29);
			this->btnElecionCarro->TabIndex = 6;
			this->btnElecionCarro->Text = L"Elegir un Carro";
			this->btnElecionCarro->UseVisualStyleBackColor = true;
			this->btnElecionCarro->Click += gcnew System::EventHandler(this, &OperarioForm::btnElecionCarro_Click);
			// 
			// OperarioForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 292);
			this->Controls->Add(this->btnElecionCarro);
			this->Controls->Add(this->OperarioVolver);
			this->Controls->Add(this->bttnShowMydatesO);
			this->Controls->Add(this->bttnReport);
			this->Controls->Add(this->bttnStartAnalisis);
			this->Controls->Add(this->label1);
			this->Name = L"OperarioForm";
			this->Text = L"Opciones";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &OperarioForm::OperarioForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &OperarioForm::OperarioForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void OperarioForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bttnShowMydatesO_Click(System::Object^ sender, System::EventArgs^ e) {
	ShowDatesUserForm^pantallaOperario = gcnew ShowDatesUserForm();
	pantallaOperario->Show();
	this->Hide();
}
private: System::Void bttnReport_Click(System::Object^ sender, System::EventArgs^ e) {
	ReporteFuncionamientoForm^ reporteFuncionario = gcnew ReporteFuncionamientoForm();
	reporteFuncionario->Show();
	this->Hide();
}
private: System::Void OperarioVolver_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
private: System::Void OperarioForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
private: System::Void btnElecionCarro_Click(System::Object^ sender, System::EventArgs^ e) {
	OpcionesCarritoForm^ elecionCarro = gcnew OpcionesCarritoForm();
	elecionCarro->Show();
	this->Hide();
}
};
}
