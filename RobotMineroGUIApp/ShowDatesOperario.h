#pragma once

namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RobotMineroModel;
	using namespace RobotMineroController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de ShowDatesOperario
	/// </summary>
	public ref class ShowDatesOperario : public System::Windows::Forms::Form
	{
	public:
		ShowDatesOperario(void)
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
		~ShowDatesOperario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtSalario;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtNumTelefono;


	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::Button^ btnAtras;
	private: System::Windows::Forms::TextBox^ txtEspecialidad;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtNumIntervenciones;

	private: System::Windows::Forms::TextBox^ txtEdad;

	private: System::Windows::Forms::TextBox^ txtApellido;

	private: System::Windows::Forms::TextBox^ txtNombre;

	private: System::Windows::Forms::TextBox^ txtFechaFin;

	private: System::Windows::Forms::TextBox^ txtFechaInicio;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pbImage;



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
			this->txtSalario = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtNumTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnAtras = (gcnew System::Windows::Forms::Button());
			this->txtEspecialidad = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtNumIntervenciones = (gcnew System::Windows::Forms::TextBox());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtFechaFin = (gcnew System::Windows::Forms::TextBox());
			this->txtFechaInicio = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pbImage = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->BeginInit();
			this->SuspendLayout();
			// 
			// txtSalario
			// 
			this->txtSalario->Location = System::Drawing::Point(315, 279);
			this->txtSalario->Margin = System::Windows::Forms::Padding(4);
			this->txtSalario->Name = L"txtSalario";
			this->txtSalario->Size = System::Drawing::Size(227, 22);
			this->txtSalario->TabIndex = 70;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(69, 277);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(69, 23);
			this->label12->TabIndex = 69;
			this->label12->Text = L"Salario";
			// 
			// txtNumTelefono
			// 
			this->txtNumTelefono->Location = System::Drawing::Point(315, 331);
			this->txtNumTelefono->Margin = System::Windows::Forms::Padding(4);
			this->txtNumTelefono->Name = L"txtNumTelefono";
			this->txtNumTelefono->Size = System::Drawing::Size(227, 22);
			this->txtNumTelefono->TabIndex = 68;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(70, 331);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 23);
			this->label7->TabIndex = 67;
			this->label7->Text = L"Número de teléfono";
			// 
			// btnAtras
			// 
			this->btnAtras->Location = System::Drawing::Point(964, 531);
			this->btnAtras->Name = L"btnAtras";
			this->btnAtras->Size = System::Drawing::Size(75, 23);
			this->btnAtras->TabIndex = 63;
			this->btnAtras->Text = L"Atrás";
			this->btnAtras->UseVisualStyleBackColor = true;
			// 
			// txtEspecialidad
			// 
			this->txtEspecialidad->Location = System::Drawing::Point(315, 382);
			this->txtEspecialidad->Margin = System::Windows::Forms::Padding(4);
			this->txtEspecialidad->Name = L"txtEspecialidad";
			this->txtEspecialidad->Size = System::Drawing::Size(227, 22);
			this->txtEspecialidad->TabIndex = 62;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(69, 382);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(115, 23);
			this->label11->TabIndex = 61;
			this->label11->Text = L"Especialidad";
			// 
			// txtNumIntervenciones
			// 
			this->txtNumIntervenciones->Location = System::Drawing::Point(315, 449);
			this->txtNumIntervenciones->Margin = System::Windows::Forms::Padding(4);
			this->txtNumIntervenciones->Name = L"txtNumIntervenciones";
			this->txtNumIntervenciones->Size = System::Drawing::Size(227, 22);
			this->txtNumIntervenciones->TabIndex = 60;
			// 
			// txtEdad
			// 
			this->txtEdad->Location = System::Drawing::Point(315, 232);
			this->txtEdad->Margin = System::Windows::Forms::Padding(4);
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(227, 22);
			this->txtEdad->TabIndex = 59;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(315, 191);
			this->txtApellido->Margin = System::Windows::Forms::Padding(4);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(227, 22);
			this->txtApellido->TabIndex = 58;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(315, 151);
			this->txtNombre->Margin = System::Windows::Forms::Padding(4);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(227, 22);
			this->txtNombre->TabIndex = 57;
			// 
			// txtFechaFin
			// 
			this->txtFechaFin->Location = System::Drawing::Point(315, 105);
			this->txtFechaFin->Margin = System::Windows::Forms::Padding(4);
			this->txtFechaFin->Name = L"txtFechaFin";
			this->txtFechaFin->Size = System::Drawing::Size(227, 22);
			this->txtFechaFin->TabIndex = 56;
			// 
			// txtFechaInicio
			// 
			this->txtFechaInicio->Location = System::Drawing::Point(315, 62);
			this->txtFechaInicio->Margin = System::Windows::Forms::Padding(4);
			this->txtFechaInicio->Name = L"txtFechaInicio";
			this->txtFechaInicio->Size = System::Drawing::Size(227, 22);
			this->txtFechaInicio->TabIndex = 55;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(69, 449);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 23);
			this->label9->TabIndex = 53;
			this->label9->Text = L"realizadas";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(69, 426);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(230, 23);
			this->label8->TabIndex = 52;
			this->label8->Text = L"Número de intervenciones";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(69, 232);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 23);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Edad";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(69, 151);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 23);
			this->label4->TabIndex = 50;
			this->label4->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(69, 191);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 23);
			this->label3->TabIndex = 49;
			this->label3->Text = L"Apellido";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(69, 106);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(222, 23);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Fecha fin de contratación";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(69, 62);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 23);
			this->label1->TabIndex = 47;
			this->label1->Text = L"Fecha de contratación";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(684, 395);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(257, 28);
			this->button1->TabIndex = 46;
			this->button1->Text = L"Ingresar datos adicionales";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ShowDatesOperario::button1_Click);
			// 
			// pbImage
			// 
			this->pbImage->Location = System::Drawing::Point(668, 45);
			this->pbImage->Margin = System::Windows::Forms::Padding(4);
			this->pbImage->Name = L"pbImage";
			this->pbImage->Size = System::Drawing::Size(292, 274);
			this->pbImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbImage->TabIndex = 45;
			this->pbImage->TabStop = false;
			// 
			// ShowDatesOperario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1072, 580);
			this->Controls->Add(this->txtSalario);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtNumTelefono);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btnAtras);
			this->Controls->Add(this->txtEspecialidad);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtNumIntervenciones);
			this->Controls->Add(this->txtEdad);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtFechaFin);
			this->Controls->Add(this->txtFechaInicio);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pbImage);
			this->Name = L"ShowDatesOperario";
			this->Text = L"Mis datos";
			this->Load += gcnew System::EventHandler(this, &ShowDatesOperario::ShowDatesOperario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int idUsuario = Controller::returnId();
			Operario^ operario = Controller::DevolverOperarioPorID(idUsuario);
			operario->Edad =Convert::ToInt32(txtEdad->Text);
			operario->NumeroTelefono= Convert::ToInt32(txtNumTelefono->Text);
			operario->Especialidad = txtEspecialidad->Text;
			operario->NumeroIntervenciones= Convert::ToInt32(txtNumIntervenciones->Text);
			Controller::ActualizarOperario(operario);
			MessageBox::Show("Datos actualizados correctamente");
		}
		catch (Exception^ ex) {
			throw ex;
		}
			
	}
private: System::Void ShowDatesOperario_Load(System::Object^ sender, System::EventArgs^ e) {
	try {
		int idUsuario = Controller::returnId();
		Operario^ operario = Controller::DevolverOperarioPorID(idUsuario);
		//Atributos generales
		txtFechaInicio->Text = operario->FechaFirst->ToString();
		txtFechaFin->Text = operario->FechaEnd->ToString();
		txtNombre->Text = operario->Nombre;
		txtApellido->Text = operario->Apelllido;
		txtSalario->Text = Convert::ToString(operario->Salario);
		if (operario->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(operario->Photo);
			pbImage->Image = Image::FromStream(ms);
		}
		else {
			pbImage->Image = nullptr;
			pbImage->Invalidate();
		}
		//Atributos particulares
		if (operario->Edad) {
			txtEdad->Text = Convert::ToString(operario->Edad);
		}
		if (operario->NumeroTelefono) {
			txtNumTelefono->Text = Convert::ToString(operario->NumeroTelefono);
		}
		if (operario->NumeroIntervenciones) {
			txtNumIntervenciones->Text = Convert::ToString(operario->NumeroIntervenciones);
		}
		if (operario->Especialidad->Length != 0) {
			txtEspecialidad->Text=operario->Especialidad;
		}

	}
	catch (Exception^ ex) {
		throw ex;
	}
}
};
}
