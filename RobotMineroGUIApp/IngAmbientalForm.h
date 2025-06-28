#pragma once
#include "ShowDatesIngAmbiental.h"
#include "ReporteAmbientalForm.h"

namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de IngAmbientalForm
	/// </summary>
	public ref class IngAmbientalForm : public System::Windows::Forms::Form
	{
	public:
		IngAmbientalForm(void)
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
		~IngAmbientalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bttnShowMydatesI;

	private: System::Windows::Forms::Button^ bttnReportAmb;
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
			this->bttnShowMydatesI = (gcnew System::Windows::Forms::Button());
			this->bttnReportAmb = (gcnew System::Windows::Forms::Button());
			this->LinkVolver = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// bttnShowMydatesI
			// 
			this->bttnShowMydatesI->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnShowMydatesI->Location = System::Drawing::Point(51, 110);
			this->bttnShowMydatesI->Margin = System::Windows::Forms::Padding(4);
			this->bttnShowMydatesI->Name = L"bttnShowMydatesI";
			this->bttnShowMydatesI->Size = System::Drawing::Size(253, 36);
			this->bttnShowMydatesI->TabIndex = 6;
			this->bttnShowMydatesI->Text = L"Visualizar mis datos";
			this->bttnShowMydatesI->UseVisualStyleBackColor = true;
			this->bttnShowMydatesI->Click += gcnew System::EventHandler(this, &IngAmbientalForm::bttnShowMydatesI_Click);
			// 
			// bttnReportAmb
			// 
			this->bttnReportAmb->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnReportAmb->Location = System::Drawing::Point(366, 110);
			this->bttnReportAmb->Margin = System::Windows::Forms::Padding(4);
			this->bttnReportAmb->Name = L"bttnReportAmb";
			this->bttnReportAmb->Size = System::Drawing::Size(253, 36);
			this->bttnReportAmb->TabIndex = 8;
			this->bttnReportAmb->Text = L"Reporte Ambiental";
			this->bttnReportAmb->UseVisualStyleBackColor = true;
			this->bttnReportAmb->Click += gcnew System::EventHandler(this, &IngAmbientalForm::bttnReportAmb_Click);
			// 
			// LinkVolver
			// 
			this->LinkVolver->AutoSize = true;
			this->LinkVolver->Location = System::Drawing::Point(556, 264);
			this->LinkVolver->Name = L"LinkVolver";
			this->LinkVolver->Size = System::Drawing::Size(87, 16);
			this->LinkVolver->TabIndex = 9;
			this->LinkVolver->TabStop = true;
			this->LinkVolver->Text = L"Cerrar sesión";
			this->LinkVolver->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &IngAmbientalForm::LinkVolver_LinkClicked);
			// 
			// IngAmbientalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(668, 289);
			this->Controls->Add(this->LinkVolver);
			this->Controls->Add(this->bttnReportAmb);
			this->Controls->Add(this->bttnShowMydatesI);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"IngAmbientalForm";
			this->Text = L"IngAmbientalForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &IngAmbientalForm::IngAmbientalForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &IngAmbientalForm::IngAmbientalForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void IngAmbientalForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bttnShowMydatesI_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowDatesIngAmbiental^ pantallaIng = gcnew ShowDatesIngAmbiental();//falta cambiar
		pantallaIng->Show();
		this->Hide();

	}
	private: System::Void bttnReportAmb_Click(System::Object^ sender, System::EventArgs^ e) {
		ReporteAmbientalForm^ pantallaReporteIngAmbiental = gcnew ReporteAmbientalForm();
		pantallaReporteIngAmbiental->Show();
		this->Hide();

	}
private: System::Void LinkVolver_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
private: System::Void IngAmbientalForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
