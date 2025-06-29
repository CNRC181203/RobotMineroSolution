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
	/// Resumen de ShowDatesSupervisor
	/// </summary>
	public ref class ShowDatesSupervisor : public System::Windows::Forms::Form
	{
	public:
		ShowDatesSupervisor(void)
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
		~ShowDatesSupervisor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAtras;
	protected:


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtSalario;

	private: System::Windows::Forms::TextBox^ txtNumTelefono;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtCapacitacion;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtEntidadCapacitacion;

	private: System::Windows::Forms::TextBox^ txtEdad;

	private: System::Windows::Forms::TextBox^ txtApellido;

	private: System::Windows::Forms::TextBox^ txtNombre;

	private: System::Windows::Forms::TextBox^ txtFechaFin;

	private: System::Windows::Forms::TextBox^ txtFechaInicio;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pbImagen;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtSeguroSalud;


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
			this->btnAtras = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtSalario = (gcnew System::Windows::Forms::TextBox());
			this->txtNumTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtCapacitacion = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtEntidadCapacitacion = (gcnew System::Windows::Forms::TextBox());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtFechaFin = (gcnew System::Windows::Forms::TextBox());
			this->txtFechaInicio = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pbImagen = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtSeguroSalud = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImagen))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAtras
			// 
			this->btnAtras->Location = System::Drawing::Point(1020, 557);
			this->btnAtras->Name = L"btnAtras";
			this->btnAtras->Size = System::Drawing::Size(75, 23);
			this->btnAtras->TabIndex = 97;
			this->btnAtras->Text = L"Atrás";
			this->btnAtras->UseVisualStyleBackColor = true;
			this->btnAtras->Click += gcnew System::EventHandler(this, &ShowDatesSupervisor::btnAtras_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(68, 371);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(228, 23);
			this->label6->TabIndex = 94;
			this->label6->Text = L"Capacitación en control y ";
			this->label6->Click += gcnew System::EventHandler(this, &ShowDatesSupervisor::label6_Click);
			// 
			// txtSalario
			// 
			this->txtSalario->Location = System::Drawing::Point(338, 327);
			this->txtSalario->Margin = System::Windows::Forms::Padding(4);
			this->txtSalario->Name = L"txtSalario";
			this->txtSalario->Size = System::Drawing::Size(227, 22);
			this->txtSalario->TabIndex = 93;
			// 
			// txtNumTelefono
			// 
			this->txtNumTelefono->Location = System::Drawing::Point(338, 275);
			this->txtNumTelefono->Margin = System::Windows::Forms::Padding(4);
			this->txtNumTelefono->Name = L"txtNumTelefono";
			this->txtNumTelefono->Size = System::Drawing::Size(227, 22);
			this->txtNumTelefono->TabIndex = 92;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(68, 275);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 23);
			this->label7->TabIndex = 91;
			this->label7->Text = L"Número de teléfono";
			// 
			// txtCapacitacion
			// 
			this->txtCapacitacion->Location = System::Drawing::Point(338, 394);
			this->txtCapacitacion->Margin = System::Windows::Forms::Padding(4);
			this->txtCapacitacion->Name = L"txtCapacitacion";
			this->txtCapacitacion->Size = System::Drawing::Size(227, 22);
			this->txtCapacitacion->TabIndex = 89;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(68, 327);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 23);
			this->label11->TabIndex = 88;
			this->label11->Text = L"Salario";
			// 
			// txtEntidadCapacitacion
			// 
			this->txtEntidadCapacitacion->Location = System::Drawing::Point(338, 456);
			this->txtEntidadCapacitacion->Margin = System::Windows::Forms::Padding(4);
			this->txtEntidadCapacitacion->Name = L"txtEntidadCapacitacion";
			this->txtEntidadCapacitacion->Size = System::Drawing::Size(227, 22);
			this->txtEntidadCapacitacion->TabIndex = 87;
			// 
			// txtEdad
			// 
			this->txtEdad->Location = System::Drawing::Point(338, 227);
			this->txtEdad->Margin = System::Windows::Forms::Padding(4);
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(227, 22);
			this->txtEdad->TabIndex = 86;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(338, 186);
			this->txtApellido->Margin = System::Windows::Forms::Padding(4);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(227, 22);
			this->txtApellido->TabIndex = 85;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(338, 146);
			this->txtNombre->Margin = System::Windows::Forms::Padding(4);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(227, 22);
			this->txtNombre->TabIndex = 84;
			// 
			// txtFechaFin
			// 
			this->txtFechaFin->Location = System::Drawing::Point(338, 100);
			this->txtFechaFin->Margin = System::Windows::Forms::Padding(4);
			this->txtFechaFin->Name = L"txtFechaFin";
			this->txtFechaFin->Size = System::Drawing::Size(227, 22);
			this->txtFechaFin->TabIndex = 83;
			// 
			// txtFechaInicio
			// 
			this->txtFechaInicio->Location = System::Drawing::Point(338, 57);
			this->txtFechaInicio->Margin = System::Windows::Forms::Padding(4);
			this->txtFechaInicio->Name = L"txtFechaInicio";
			this->txtFechaInicio->Size = System::Drawing::Size(227, 22);
			this->txtFechaInicio->TabIndex = 82;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(67, 397);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 23);
			this->label10->TabIndex = 81;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(68, 227);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 23);
			this->label5->TabIndex = 80;
			this->label5->Text = L"Edad";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(67, 146);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 23);
			this->label4->TabIndex = 79;
			this->label4->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(67, 186);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 23);
			this->label3->TabIndex = 78;
			this->label3->Text = L"Apellido";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(67, 101);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(222, 23);
			this->label2->TabIndex = 77;
			this->label2->Text = L"Fecha fin de contratación";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(67, 57);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 23);
			this->label1->TabIndex = 76;
			this->label1->Text = L"Fecha de contratación";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(706, 411);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(257, 28);
			this->button1->TabIndex = 75;
			this->button1->Text = L"Ingresar datos adicionales";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ShowDatesSupervisor::button1_Click);
			// 
			// pbImagen
			// 
			this->pbImagen->Location = System::Drawing::Point(690, 61);
			this->pbImagen->Margin = System::Windows::Forms::Padding(4);
			this->pbImagen->Name = L"pbImagen";
			this->pbImagen->Size = System::Drawing::Size(292, 274);
			this->pbImagen->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbImagen->TabIndex = 74;
			this->pbImagen->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(68, 394);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(193, 23);
			this->label12->TabIndex = 98;
			this->label12->Text = L"supervisión de riesgos";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(69, 454);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(209, 23);
			this->label8->TabIndex = 99;
			this->label8->Text = L"Entidad de capacitación";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(69, 497);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(142, 23);
			this->label9->TabIndex = 101;
			this->label9->Text = L"Seguro de salud";
			// 
			// txtSeguroSalud
			// 
			this->txtSeguroSalud->Location = System::Drawing::Point(338, 499);
			this->txtSeguroSalud->Margin = System::Windows::Forms::Padding(4);
			this->txtSeguroSalud->Name = L"txtSeguroSalud";
			this->txtSeguroSalud->Size = System::Drawing::Size(227, 22);
			this->txtSeguroSalud->TabIndex = 100;
			// 
			// ShowDatesSupervisor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1110, 597);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtSeguroSalud);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->btnAtras);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtSalario);
			this->Controls->Add(this->txtNumTelefono);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtCapacitacion);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtEntidadCapacitacion);
			this->Controls->Add(this->txtEdad);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtFechaFin);
			this->Controls->Add(this->txtFechaInicio);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pbImagen);
			this->Name = L"ShowDatesSupervisor";
			this->Text = L"Mis datos";
			this->Load += gcnew System::EventHandler(this, &ShowDatesSupervisor::ShowDatesSupervisor_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImagen))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ShowDatesSupervisor_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			int idUsuario = Controller::returnId();
			Supervisor^ supervisor = Controller::DevolverSupervisorPorID(idUsuario);
			//Atributos generales
			txtFechaInicio->Text = supervisor->FechaFirst->ToString();
			txtFechaFin->Text = supervisor->FechaEnd->ToString();
			txtNombre->Text = supervisor->Nombre;
			txtApellido->Text = supervisor->Apelllido;
			txtSalario->Text = Convert::ToString(supervisor->Salario);
			if (supervisor->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(supervisor->Photo);
				pbImagen->Image = Image::FromStream(ms);
			}
			else {
				pbImagen->Image = nullptr;
				pbImagen->Invalidate();
			}
			//Atributos extra
			if (supervisor->Edad) {
				txtEdad->Text = Convert::ToString(supervisor->Edad);
			}
			if (supervisor->NumeroTelefono) {
				txtNumTelefono->Text = Convert::ToString(supervisor->NumeroTelefono);
			}
			if (supervisor->Capacitacion->Length != 0) {
				txtCapacitacion->Text = Convert::ToString(supervisor->Capacitacion);
			}
			if (supervisor->EntCapacitacion != nullptr) {
				txtEntidadCapacitacion->Text = Convert::ToString(supervisor->EntCapacitacion);
			}
			if (supervisor->SeguroSupervisor) {
				txtSeguroSalud->Text = Convert::ToString(supervisor->SeguroSupervisor);
			}


		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al cargar los datos del supervisor: " + ex->Message);
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int idUsuario = Controller::returnId();
		Supervisor^ supervisor = Controller::DevolverSupervisorPorID(idUsuario);
		supervisor->Edad = Convert::ToInt32(txtEdad->Text);
		supervisor->NumeroTelefono = Convert::ToInt32(txtNumTelefono->Text);
		supervisor->Capacitacion = txtCapacitacion->Text;
		supervisor->EntCapacitacion = txtEntidadCapacitacion->Text;
		supervisor->SeguroSupervisor = txtSeguroSalud->Text;
		Controller::ActualizarSupervisor(supervisor);
		MessageBox::Show("Datos actualizados correctamente");
	}
	catch (Exception^ ex) {
		throw ex;
	}
}
private: System::Void btnAtras_Click(System::Object^ sender, System::EventArgs^ e);
};
}
