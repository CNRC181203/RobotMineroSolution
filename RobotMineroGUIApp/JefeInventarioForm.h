#pragma once

namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de JefeInventarioForm
	/// </summary>
	public ref class JefeInventarioForm : public System::Windows::Forms::Form
	{
	public:
		JefeInventarioForm(void)
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
		~JefeInventarioForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ OperarioVolver;
	private: System::Windows::Forms::Button^ btnRegistros;
	protected:

	private: System::Windows::Forms::Button^ btnMantenimiento;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

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
			this->OperarioVolver = (gcnew System::Windows::Forms::LinkLabel());
			this->btnRegistros = (gcnew System::Windows::Forms::Button());
			this->btnMantenimiento = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// OperarioVolver
			// 
			this->OperarioVolver->AutoSize = true;
			this->OperarioVolver->Location = System::Drawing::Point(614, 260);
			this->OperarioVolver->Name = L"OperarioVolver";
			this->OperarioVolver->Size = System::Drawing::Size(87, 16);
			this->OperarioVolver->TabIndex = 10;
			this->OperarioVolver->TabStop = true;
			this->OperarioVolver->Text = L"Cerrar sesión";
			// 
			// btnRegistros
			// 
			this->btnRegistros->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistros->Location = System::Drawing::Point(84, 187);
			this->btnRegistros->Margin = System::Windows::Forms::Padding(4);
			this->btnRegistros->Name = L"btnRegistros";
			this->btnRegistros->Size = System::Drawing::Size(253, 36);
			this->btnRegistros->TabIndex = 9;
			this->btnRegistros->Text = L"Registro ";
			this->btnRegistros->UseVisualStyleBackColor = true;
			// 
			// btnMantenimiento
			// 
			this->btnMantenimiento->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMantenimiento->Location = System::Drawing::Point(84, 99);
			this->btnMantenimiento->Margin = System::Windows::Forms::Padding(4);
			this->btnMantenimiento->Name = L"btnMantenimiento";
			this->btnMantenimiento->Size = System::Drawing::Size(262, 36);
			this->btnMantenimiento->TabIndex = 7;
			this->btnMantenimiento->Text = L"Mantenimiento de actuadores";
			this->btnMantenimiento->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 29);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 31);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Elija una opción:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(84, 143);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(262, 36);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Mantenimiento de carros";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// JefeInventarioForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(713, 295);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->OperarioVolver);
			this->Controls->Add(this->btnRegistros);
			this->Controls->Add(this->btnMantenimiento);
			this->Controls->Add(this->label1);
			this->Name = L"JefeInventarioForm";
			this->Text = L"JefeInventarioForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
