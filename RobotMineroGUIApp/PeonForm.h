#pragma once
#include "ShowDatesUserForm.h"
#include "MapaPeonForm.h"
#include "ShowDatesPeonForm.h"


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

	//using namespace RobotMineroGUIApp;

	/// <summary>
	/// Resumen de PeonForm
	/// </summary>
	public ref class PeonForm : public System::Windows::Forms::Form
	{
	public:
		PeonForm(void)
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
		~PeonForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bttnShowMapaP;

	private: System::Windows::Forms::Button^ bttnShowMydatesP;
	private: System::Windows::Forms::LinkLabel^ LinkVolver;



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
			this->bttnShowMapaP = (gcnew System::Windows::Forms::Button());
			this->bttnShowMydatesP = (gcnew System::Windows::Forms::Button());
			this->LinkVolver = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// bttnShowMapaP
			// 
			this->bttnShowMapaP->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnShowMapaP->Location = System::Drawing::Point(105, 186);
			this->bttnShowMapaP->Margin = System::Windows::Forms::Padding(4);
			this->bttnShowMapaP->Name = L"bttnShowMapaP";
			this->bttnShowMapaP->Size = System::Drawing::Size(181, 36);
			this->bttnShowMapaP->TabIndex = 2;
			this->bttnShowMapaP->Text = L"Visualizar mapa";
			this->bttnShowMapaP->UseVisualStyleBackColor = true;
			this->bttnShowMapaP->Click += gcnew System::EventHandler(this, &PeonForm::bttnShowMapaP_Click);
			// 
			// bttnShowMydatesP
			// 
			this->bttnShowMydatesP->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnShowMydatesP->Location = System::Drawing::Point(72, 63);
			this->bttnShowMydatesP->Margin = System::Windows::Forms::Padding(4);
			this->bttnShowMydatesP->Name = L"bttnShowMydatesP";
			this->bttnShowMydatesP->Size = System::Drawing::Size(253, 36);
			this->bttnShowMydatesP->TabIndex = 7;
			this->bttnShowMydatesP->Text = L"Visualizar mis datos";
			this->bttnShowMydatesP->UseVisualStyleBackColor = true;
			this->bttnShowMydatesP->Click += gcnew System::EventHandler(this, &PeonForm::bttnShowMydatesP_Click);
			// 
			// LinkVolver
			// 
			this->LinkVolver->AutoSize = true;
			this->LinkVolver->Location = System::Drawing::Point(324, 318);
			this->LinkVolver->Name = L"LinkVolver";
			this->LinkVolver->Size = System::Drawing::Size(87, 16);
			this->LinkVolver->TabIndex = 8;
			this->LinkVolver->TabStop = true;
			this->LinkVolver->Text = L"Cerrar sesión";
			this->LinkVolver->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &PeonForm::LinkVolver_LinkClicked);
			// 
			// PeonForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(433, 343);
			this->Controls->Add(this->LinkVolver);
			this->Controls->Add(this->bttnShowMydatesP);
			this->Controls->Add(this->bttnShowMapaP);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"PeonForm";
			this->Text = L"PeonForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &PeonForm::PeonForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &PeonForm::PeonForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PeonForm_Load(System::Object^ sender, System::EventArgs^ e) {
		int extractIdPeonNew = Controller::returnId();

		/*XUsuario^ ObjectPeonUser = gcnew Usuario();
		ObjectPeonUser = Controller::DevolverUsuarioPorID(extractIdPeonNew);

		Peon^ ObjectPeonUserNew = gcnew Peon();

		ObjectPeonUserNew->Nombre = ObjectPeonUser->Nombre;
		ObjectPeonUserNew->Apelllido = ObjectPeonUser->Apelllido;
		ObjectPeonUserNew->Salario = ObjectPeonUser->Salario;
		ObjectPeonUserNew->FechaFirst = ObjectPeonUser->FechaFirst;
		ObjectPeonUserNew->FechaEnd = ObjectPeonUser->FechaEnd;
		ObjectPeonUserNew->Photo = ObjectPeonUser->Photo;

		Controller::AgregarPeon(ObjectPeonUserNew);	
		*/
	}
	private: System::Void bttnShowMydatesP_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowDatesPeonForm^ pantallaPeon = gcnew ShowDatesPeonForm();
		pantallaPeon->Show();
		this->Hide();
	}
	private: System::Void bttnShowMapaP_Click(System::Object^ sender, System::EventArgs^ e) {
		MapaPeonForm^ pantallaMapaPeon = gcnew MapaPeonForm();
		pantallaMapaPeon->Show();
		this->Hide();
	}
	
	private: System::Void LinkVolver_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
private: System::Void PeonForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
