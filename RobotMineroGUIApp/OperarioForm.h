#pragma once

#include "ShowDatesUserForm.h"
#include "ReporteFuncionamientoForm.h"
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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	protected:









	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bttnStartAnalisis = (gcnew System::Windows::Forms::Button());
			this->bttnReport = (gcnew System::Windows::Forms::Button());
			this->bttnShowMydatesO = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(45, 30);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Elija una opci�n:";
			// 
			// bttnStartAnalisis
			// 
			this->bttnStartAnalisis->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnStartAnalisis->Location = System::Drawing::Point(51, 135);
			this->bttnStartAnalisis->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bttnStartAnalisis->Name = L"bttnStartAnalisis";
			this->bttnStartAnalisis->Size = System::Drawing::Size(153, 36);
			this->bttnStartAnalisis->TabIndex = 1;
			this->bttnStartAnalisis->Text = L"Iniciar Analisis";
			this->bttnStartAnalisis->UseVisualStyleBackColor = true;
			this->bttnStartAnalisis->Click += gcnew System::EventHandler(this, &OperarioForm::bttnStartAnalisis_Click);
			// 
			// bttnReport
			// 
			this->bttnReport->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnReport->Location = System::Drawing::Point(51, 234);
			this->bttnReport->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bttnReport->Name = L"bttnReport";
			this->bttnReport->Size = System::Drawing::Size(253, 36);
			this->bttnReport->TabIndex = 3;
			this->bttnReport->Text = L"Reporte de funcionamiento";
			this->bttnReport->UseVisualStyleBackColor = true;
			this->bttnReport->Click += gcnew System::EventHandler(this, &OperarioForm::bttnReport_Click);
			// 
			// bttnShowMydatesO
			// 
			this->bttnShowMydatesO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnShowMydatesO->Location = System::Drawing::Point(355, 135);
			this->bttnShowMydatesO->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bttnShowMydatesO->Name = L"bttnShowMydatesO";
			this->bttnShowMydatesO->Size = System::Drawing::Size(253, 36);
			this->bttnShowMydatesO->TabIndex = 4;
			this->bttnShowMydatesO->Text = L"Visualizar mis datos";
			this->bttnShowMydatesO->UseVisualStyleBackColor = true;
			this->bttnShowMydatesO->Click += gcnew System::EventHandler(this, &OperarioForm::bttnShowMydatesO_Click);
			// 
			// OperarioForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(819, 359);
			this->Controls->Add(this->bttnShowMydatesO);
			this->Controls->Add(this->bttnReport);
			this->Controls->Add(this->bttnStartAnalisis);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"OperarioForm";
			this->Text = L"OperarioForm";
			this->Load += gcnew System::EventHandler(this, &OperarioForm::OperarioForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void OperarioForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bttnShowMydatesO_Click(System::Object^ sender, System::EventArgs^ e) {
	ShowDatesUserForm^pantallaOperario = gcnew ShowDatesUserForm();
	pantallaOperario->ShowDialog();
}
private: System::Void bttnReport_Click(System::Object^ sender, System::EventArgs^ e) {
	ReporteFuncionamientoForm^ reporteFuncionario = gcnew ReporteFuncionamientoForm();
	reporteFuncionario->Show();
}
private: System::Void bttnStartAnalisis_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Llama al m�todo del Controller que mueve el carrito y sensa los datos
		String^ reporte = RobotMineroController::Controller::IniciarMovimientoYLeerSensores();
		MessageBox::Show("Datos del Arduino:\n" + reporte, "Recepci�n Correcta");

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al iniciar/sensar el carrito: " + ex->Message, "Error");
	}
}
};
}
