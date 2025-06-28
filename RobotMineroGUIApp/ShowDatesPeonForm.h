#pragma once

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
	/// <summary>
	/// Resumen de ShowDatesPeonForm
	/// </summary>
	public ref class ShowDatesPeonForm : public System::Windows::Forms::Form
	{
	public:
		ShowDatesPeonForm(void)
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
		~ShowDatesPeonForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbImagen;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtFechaInicio;
	private: System::Windows::Forms::TextBox^ txtFechaFin;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::TextBox^ txtEdad;
	private: System::Windows::Forms::TextBox^ txtUltimaFechaRevision;









	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtSalario;

	private: System::Windows::Forms::Button^ btnAtras;







	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtSeguroMedico;

	private: System::Windows::Forms::ComboBox^ cmbCondicionesSalud;




	private: System::Windows::Forms::TextBox^ txtNumTelefono;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtContactoEmergencia;

	private: System::Windows::Forms::Label^ label12;









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
			this->pbImagen = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtFechaInicio = (gcnew System::Windows::Forms::TextBox());
			this->txtFechaFin = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->txtUltimaFechaRevision = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtSalario = (gcnew System::Windows::Forms::TextBox());
			this->btnAtras = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtSeguroMedico = (gcnew System::Windows::Forms::TextBox());
			this->cmbCondicionesSalud = (gcnew System::Windows::Forms::ComboBox());
			this->txtNumTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtContactoEmergencia = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImagen))->BeginInit();
			this->SuspendLayout();
			// 
			// pbImagen
			// 
			this->pbImagen->Location = System::Drawing::Point(636, 41);
			this->pbImagen->Margin = System::Windows::Forms::Padding(4);
			this->pbImagen->Name = L"pbImagen";
			this->pbImagen->Size = System::Drawing::Size(292, 274);
			this->pbImagen->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbImagen->TabIndex = 0;
			this->pbImagen->TabStop = false;
			this->pbImagen->Click += gcnew System::EventHandler(this, &ShowDatesPeonForm::pbShowImagePeon_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(652, 391);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(257, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ingresar datos adicionales";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ShowDatesPeonForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(40, 120);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 23);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(40, 160);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 23);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Apellido";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 75);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(222, 23);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Fecha fin de contratación";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 31);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 23);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Fecha de contratación";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(40, 201);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 23);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Edad";
			this->label5->Click += gcnew System::EventHandler(this, &ShowDatesPeonForm::label5_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(40, 395);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(184, 23);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Condiciones de salud";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(40, 437);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(168, 23);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Fecha de la última ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(40, 460);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(140, 23);
			this->label10->TabIndex = 13;
			this->label10->Text = L"revision medica";
			// 
			// txtFechaInicio
			// 
			this->txtFechaInicio->Location = System::Drawing::Point(286, 31);
			this->txtFechaInicio->Margin = System::Windows::Forms::Padding(4);
			this->txtFechaInicio->Name = L"txtFechaInicio";
			this->txtFechaInicio->Size = System::Drawing::Size(227, 22);
			this->txtFechaInicio->TabIndex = 14;
			// 
			// txtFechaFin
			// 
			this->txtFechaFin->Location = System::Drawing::Point(286, 74);
			this->txtFechaFin->Margin = System::Windows::Forms::Padding(4);
			this->txtFechaFin->Name = L"txtFechaFin";
			this->txtFechaFin->Size = System::Drawing::Size(227, 22);
			this->txtFechaFin->TabIndex = 15;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(286, 120);
			this->txtNombre->Margin = System::Windows::Forms::Padding(4);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(227, 22);
			this->txtNombre->TabIndex = 16;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(286, 160);
			this->txtApellido->Margin = System::Windows::Forms::Padding(4);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(227, 22);
			this->txtApellido->TabIndex = 17;
			// 
			// txtEdad
			// 
			this->txtEdad->Location = System::Drawing::Point(286, 201);
			this->txtEdad->Margin = System::Windows::Forms::Padding(4);
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(227, 22);
			this->txtEdad->TabIndex = 18;
			// 
			// txtUltimaFechaRevision
			// 
			this->txtUltimaFechaRevision->Location = System::Drawing::Point(286, 450);
			this->txtUltimaFechaRevision->Margin = System::Windows::Forms::Padding(4);
			this->txtUltimaFechaRevision->Name = L"txtUltimaFechaRevision";
			this->txtUltimaFechaRevision->Size = System::Drawing::Size(227, 22);
			this->txtUltimaFechaRevision->TabIndex = 23;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(40, 253);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 23);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Salario";
			// 
			// txtSalario
			// 
			this->txtSalario->Location = System::Drawing::Point(286, 253);
			this->txtSalario->Margin = System::Windows::Forms::Padding(4);
			this->txtSalario->Name = L"txtSalario";
			this->txtSalario->Size = System::Drawing::Size(227, 22);
			this->txtSalario->TabIndex = 25;
			// 
			// btnAtras
			// 
			this->btnAtras->Location = System::Drawing::Point(971, 523);
			this->btnAtras->Name = L"btnAtras";
			this->btnAtras->Size = System::Drawing::Size(75, 23);
			this->btnAtras->TabIndex = 26;
			this->btnAtras->Text = L"Atrás";
			this->btnAtras->UseVisualStyleBackColor = true;
			this->btnAtras->Click += gcnew System::EventHandler(this, &ShowDatesPeonForm::btnAtras_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(40, 502);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 23);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Seguro médico";
			// 
			// txtSeguroMedico
			// 
			this->txtSeguroMedico->Location = System::Drawing::Point(286, 504);
			this->txtSeguroMedico->Margin = System::Windows::Forms::Padding(4);
			this->txtSeguroMedico->Name = L"txtSeguroMedico";
			this->txtSeguroMedico->Size = System::Drawing::Size(227, 22);
			this->txtSeguroMedico->TabIndex = 36;
			// 
			// cmbCondicionesSalud
			// 
			this->cmbCondicionesSalud->FormattingEnabled = true;
			this->cmbCondicionesSalud->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Apto", L"No apto", L"Apto con restricción" });
			this->cmbCondicionesSalud->Location = System::Drawing::Point(286, 397);
			this->cmbCondicionesSalud->Name = L"cmbCondicionesSalud";
			this->cmbCondicionesSalud->Size = System::Drawing::Size(121, 24);
			this->cmbCondicionesSalud->TabIndex = 40;
			// 
			// txtNumTelefono
			// 
			this->txtNumTelefono->Location = System::Drawing::Point(286, 349);
			this->txtNumTelefono->Margin = System::Windows::Forms::Padding(4);
			this->txtNumTelefono->Name = L"txtNumTelefono";
			this->txtNumTelefono->Size = System::Drawing::Size(227, 22);
			this->txtNumTelefono->TabIndex = 42;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(41, 349);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 23);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Número de teléfono";
			// 
			// txtContactoEmergencia
			// 
			this->txtContactoEmergencia->Location = System::Drawing::Point(286, 301);
			this->txtContactoEmergencia->Margin = System::Windows::Forms::Padding(4);
			this->txtContactoEmergencia->Name = L"txtContactoEmergencia";
			this->txtContactoEmergencia->Size = System::Drawing::Size(227, 22);
			this->txtContactoEmergencia->TabIndex = 44;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(40, 299);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(217, 23);
			this->label12->TabIndex = 43;
			this->label12->Text = L"Contacto de Emergencia";
			// 
			// ShowDatesPeonForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1056, 558);
			this->Controls->Add(this->txtContactoEmergencia);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtNumTelefono);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->cmbCondicionesSalud);
			this->Controls->Add(this->txtSeguroMedico);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btnAtras);
			this->Controls->Add(this->txtSalario);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtUltimaFechaRevision);
			this->Controls->Add(this->txtEdad);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtFechaFin);
			this->Controls->Add(this->txtFechaInicio);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pbImagen);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ShowDatesPeonForm";
			this->Text = L"Mis datos";
			this->Load += gcnew System::EventHandler(this, &ShowDatesPeonForm::ShowDatesPeonForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImagen))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ShowDatesPeonForm_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			int idUsuario = Controller::returnId();
			Peon^ peon = Controller::DevolverPeonPorID(idUsuario);
			//Atributos generales
			txtFechaInicio->Text = peon->FechaFirst->ToString();
			txtFechaFin->Text = peon->FechaEnd->ToString();
			txtNombre->Text = peon->Nombre;
			txtApellido->Text = peon->Apelllido;
			txtSalario->Text = Convert::ToString(peon->Salario);
			if (peon->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(peon->Photo);
				pbImagen->Image = Image::FromStream(ms);
			}
			else {
				pbImagen->Image = nullptr;
				pbImagen->Invalidate();
			}
			//Atributos particulares
			if (peon->ContactoEmergencia) {
				txtContactoEmergencia->Text = Convert::ToString(peon->ContactoEmergencia);
			}
			if (peon->NumeroTelefono) {
				txtNumTelefono->Text = Convert::ToString(peon->NumeroTelefono);
			}
			if (peon->CondicionesSalud->Length!=0) {
				cmbCondicionesSalud->Text = Convert::ToString(peon->CondicionesSalud);
			}
			if (peon->LastCheck!=nullptr) {
				txtUltimaFechaRevision->Text = Convert::ToString(peon->LastCheck);
			}

		}
		catch (Exception^ ex) {
			throw ex;
		}
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int idUsuario = Controller::returnId();
		Peon^ peon = Controller::DevolverPeonPorID(idUsuario);
		peon->ContactoEmergencia = Convert::ToInt32(txtContactoEmergencia->Text);
		peon->NumeroTelefono = Convert::ToInt32(txtNumTelefono->Text);
		int index = cmbCondicionesSalud->SelectedIndex;
		if (index == 0) {
			peon->CondicionesSalud = "Apto";
		}
		else if (index == 1) {
			peon->CondicionesSalud = "No apto";
		}
		else if (index == 2) {
			peon->CondicionesSalud = "Apto con restricción";
		}
		peon->LastCheck = Convert::ToDateTime(txtUltimaFechaRevision->Text);
		peon->SeguroMedico = txtSeguroMedico->Text;
	}
	catch (Exception^ ex) {
		throw ex;
	}
		
}
private: System::Void btnAtras_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pbShowImagePeon_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
