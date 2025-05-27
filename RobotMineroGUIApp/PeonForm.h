#pragma once

namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ bttnInputMoreDatesP;
	private: System::Windows::Forms::Button^ bttnShowMydatesP;

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
			this->bttnInputMoreDatesP = (gcnew System::Windows::Forms::Button());
			this->bttnShowMydatesP = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bttnShowMapaP
			// 
			this->bttnShowMapaP->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnShowMapaP->Location = System::Drawing::Point(303, 51);
			this->bttnShowMapaP->Name = L"bttnShowMapaP";
			this->bttnShowMapaP->Size = System::Drawing::Size(136, 29);
			this->bttnShowMapaP->TabIndex = 2;
			this->bttnShowMapaP->Text = L"Visualizar mapa";
			this->bttnShowMapaP->UseVisualStyleBackColor = true;
			// 
			// bttnInputMoreDatesP
			// 
			this->bttnInputMoreDatesP->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnInputMoreDatesP->Location = System::Drawing::Point(54, 147);
			this->bttnInputMoreDatesP->Name = L"bttnInputMoreDatesP";
			this->bttnInputMoreDatesP->Size = System::Drawing::Size(190, 29);
			this->bttnInputMoreDatesP->TabIndex = 6;
			this->bttnInputMoreDatesP->Text = L"Ingresar datos adicionales";
			this->bttnInputMoreDatesP->UseVisualStyleBackColor = true;
			// 
			// bttnShowMydatesP
			// 
			this->bttnShowMydatesP->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnShowMydatesP->Location = System::Drawing::Point(54, 51);
			this->bttnShowMydatesP->Name = L"bttnShowMydatesP";
			this->bttnShowMydatesP->Size = System::Drawing::Size(190, 29);
			this->bttnShowMydatesP->TabIndex = 7;
			this->bttnShowMydatesP->Text = L"Visualizar mis datos";
			this->bttnShowMydatesP->UseVisualStyleBackColor = true;
			// 
			// PeonForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(575, 255);
			this->Controls->Add(this->bttnShowMydatesP);
			this->Controls->Add(this->bttnInputMoreDatesP);
			this->Controls->Add(this->bttnShowMapaP);
			this->Name = L"PeonForm";
			this->Text = L"PeonForm";
			this->Load += gcnew System::EventHandler(this, &PeonForm::PeonForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PeonForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
