#pragma once
#include "ShowDatesUserForm.h"
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
	private: System::Windows::Forms::Button^ bttnInputMoreDatesI;
	private: System::Windows::Forms::Button^ bttnReportAmb;
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
			this->bttnInputMoreDatesI = (gcnew System::Windows::Forms::Button());
			this->bttnReportAmb = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bttnShowMydatesI
			// 
			this->bttnShowMydatesI->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnShowMydatesI->Location = System::Drawing::Point(33, 48);
			this->bttnShowMydatesI->Name = L"bttnShowMydatesI";
			this->bttnShowMydatesI->Size = System::Drawing::Size(190, 29);
			this->bttnShowMydatesI->TabIndex = 6;
			this->bttnShowMydatesI->Text = L"Visualizar mis datos";
			this->bttnShowMydatesI->UseVisualStyleBackColor = true;
			this->bttnShowMydatesI->Click += gcnew System::EventHandler(this, &IngAmbientalForm::bttnShowMydatesI_Click);
			// 
			// bttnInputMoreDatesI
			// 
			this->bttnInputMoreDatesI->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnInputMoreDatesI->Location = System::Drawing::Point(33, 133);
			this->bttnInputMoreDatesI->Name = L"bttnInputMoreDatesI";
			this->bttnInputMoreDatesI->Size = System::Drawing::Size(190, 29);
			this->bttnInputMoreDatesI->TabIndex = 7;
			this->bttnInputMoreDatesI->Text = L"Ingresar datos adicionales";
			this->bttnInputMoreDatesI->UseVisualStyleBackColor = true;
			// 
			// bttnReportAmb
			// 
			this->bttnReportAmb->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnReportAmb->Location = System::Drawing::Point(274, 48);
			this->bttnReportAmb->Name = L"bttnReportAmb";
			this->bttnReportAmb->Size = System::Drawing::Size(190, 29);
			this->bttnReportAmb->TabIndex = 8;
			this->bttnReportAmb->Text = L"Reporte Ambiental";
			this->bttnReportAmb->UseVisualStyleBackColor = true;
			this->bttnReportAmb->Click += gcnew System::EventHandler(this, &IngAmbientalForm::bttnReportAmb_Click);
			// 
			// IngAmbientalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 235);
			this->Controls->Add(this->bttnReportAmb);
			this->Controls->Add(this->bttnInputMoreDatesI);
			this->Controls->Add(this->bttnShowMydatesI);
			this->Name = L"IngAmbientalForm";
			this->Text = L"IngAmbientalForm";
			this->Load += gcnew System::EventHandler(this, &IngAmbientalForm::IngAmbientalForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void IngAmbientalForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bttnShowMydatesI_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowDatesUserForm^ pantallaIng = gcnew ShowDatesUserForm();
		pantallaIng->Show();
	}
	private: System::Void bttnReportAmb_Click(System::Object^ sender, System::EventArgs^ e) {
		ReporteAmbientalForm^ pantallaReporteIngAmbiental = gcnew ReporteAmbientalForm();
		pantallaReporteIngAmbiental->Show();

	}
};
}
