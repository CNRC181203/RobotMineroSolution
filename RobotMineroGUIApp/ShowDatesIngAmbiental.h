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
	/// Resumen de ShowDatesIngAmbiental
	/// </summary>
	public ref class ShowDatesIngAmbiental : public System::Windows::Forms::Form
	{
	public:
		ShowDatesIngAmbiental(void)
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
		~ShowDatesIngAmbiental()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtSalario;
	private: System::Windows::Forms::TextBox^ txtNumTelefono;
	protected:


	protected:


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtEntidadCertificadora;


	private: System::Windows::Forms::TextBox^ txtEspecializacion;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtNumLicencia;

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
	private: System::Windows::Forms::PictureBox^ pbImage;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;


	protected:























	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtSalario = (gcnew System::Windows::Forms::TextBox());
			this->txtNumTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtEntidadCertificadora = (gcnew System::Windows::Forms::TextBox());
			this->txtEspecializacion = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtNumLicencia = (gcnew System::Windows::Forms::TextBox());
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
			this->pbImage = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->BeginInit();
			this->SuspendLayout();
			// 
			// txtSalario
			// 
			this->txtSalario->Location = System::Drawing::Point(321, 308);
			this->txtSalario->Margin = System::Windows::Forms::Padding(4);
			this->txtSalario->Name = L"txtSalario";
			this->txtSalario->Size = System::Drawing::Size(258, 22);
			this->txtSalario->TabIndex = 69;
			// 
			// txtNumTelefono
			// 
			this->txtNumTelefono->Location = System::Drawing::Point(321, 256);
			this->txtNumTelefono->Margin = System::Windows::Forms::Padding(4);
			this->txtNumTelefono->Name = L"txtNumTelefono";
			this->txtNumTelefono->Size = System::Drawing::Size(258, 22);
			this->txtNumTelefono->TabIndex = 67;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(51, 256);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 23);
			this->label7->TabIndex = 66;
			this->label7->Text = L"Número de teléfono";
			this->label7->Click += gcnew System::EventHandler(this, &ShowDatesIngAmbiental::label7_Click);
			// 
			// txtEntidadCertificadora
			// 
			this->txtEntidadCertificadora->Location = System::Drawing::Point(321, 467);
			this->txtEntidadCertificadora->Margin = System::Windows::Forms::Padding(4);
			this->txtEntidadCertificadora->Name = L"txtEntidadCertificadora";
			this->txtEntidadCertificadora->Size = System::Drawing::Size(258, 22);
			this->txtEntidadCertificadora->TabIndex = 64;
			// 
			// txtEspecializacion
			// 
			this->txtEspecializacion->Location = System::Drawing::Point(321, 358);
			this->txtEspecializacion->Margin = System::Windows::Forms::Padding(4);
			this->txtEspecializacion->Name = L"txtEspecializacion";
			this->txtEspecializacion->Size = System::Drawing::Size(258, 22);
			this->txtEspecializacion->TabIndex = 62;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(51, 308);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 23);
			this->label11->TabIndex = 61;
			this->label11->Text = L"Salario";
			// 
			// txtNumLicencia
			// 
			this->txtNumLicencia->Location = System::Drawing::Point(321, 415);
			this->txtNumLicencia->Margin = System::Windows::Forms::Padding(4);
			this->txtNumLicencia->Name = L"txtNumLicencia";
			this->txtNumLicencia->Size = System::Drawing::Size(258, 22);
			this->txtNumLicencia->TabIndex = 60;
			// 
			// txtEdad
			// 
			this->txtEdad->Location = System::Drawing::Point(321, 208);
			this->txtEdad->Margin = System::Windows::Forms::Padding(4);
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(258, 22);
			this->txtEdad->TabIndex = 59;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(321, 167);
			this->txtApellido->Margin = System::Windows::Forms::Padding(4);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(258, 22);
			this->txtApellido->TabIndex = 58;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(321, 127);
			this->txtNombre->Margin = System::Windows::Forms::Padding(4);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(258, 22);
			this->txtNombre->TabIndex = 57;
			// 
			// txtFechaFin
			// 
			this->txtFechaFin->Location = System::Drawing::Point(321, 81);
			this->txtFechaFin->Margin = System::Windows::Forms::Padding(4);
			this->txtFechaFin->Name = L"txtFechaFin";
			this->txtFechaFin->Size = System::Drawing::Size(258, 22);
			this->txtFechaFin->TabIndex = 56;
			// 
			// txtFechaInicio
			// 
			this->txtFechaInicio->Location = System::Drawing::Point(321, 38);
			this->txtFechaInicio->Margin = System::Windows::Forms::Padding(4);
			this->txtFechaInicio->Name = L"txtFechaInicio";
			this->txtFechaInicio->Size = System::Drawing::Size(258, 22);
			this->txtFechaInicio->TabIndex = 55;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(50, 467);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 23);
			this->label10->TabIndex = 54;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(51, 208);
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
			this->label4->Location = System::Drawing::Point(50, 127);
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
			this->label3->Location = System::Drawing::Point(50, 167);
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
			this->label2->Location = System::Drawing::Point(50, 82);
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
			this->label1->Location = System::Drawing::Point(50, 38);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 23);
			this->label1->TabIndex = 47;
			this->label1->Text = L"Fecha de contratación";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(662, 398);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(257, 28);
			this->button1->TabIndex = 46;
			this->button1->Text = L"Ingresar datos adicionales";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ShowDatesIngAmbiental::button1_Click);
			// 
			// pbImage
			// 
			this->pbImage->Location = System::Drawing::Point(646, 48);
			this->pbImage->Margin = System::Windows::Forms::Padding(4);
			this->pbImage->Name = L"pbImage";
			this->pbImage->Size = System::Drawing::Size(292, 274);
			this->pbImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbImage->TabIndex = 45;
			this->pbImage->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(51, 358);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 23);
			this->label6->TabIndex = 70;
			this->label6->Text = L"Especialización";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(51, 413);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(258, 23);
			this->label8->TabIndex = 71;
			this->label8->Text = L"Número de licencia ambiental";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(50, 467);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(188, 23);
			this->label9->TabIndex = 72;
			this->label9->Text = L"Entidad certificadora";
			// 
			// ShowDatesIngAmbiental
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1118, 596);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtSalario);
			this->Controls->Add(this->txtNumTelefono);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtEntidadCertificadora);
			this->Controls->Add(this->txtEspecializacion);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtNumLicencia);
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
			this->Controls->Add(this->pbImage);
			this->Name = L"ShowDatesIngAmbiental";
			this->Text = L"Mis datos";
			this->Load += gcnew System::EventHandler(this, &ShowDatesIngAmbiental::ShowDatesIngAmbiental_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ShowDatesIngAmbiental_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			int idUsuario = Controller::returnId();
			IngAmbiental^ ingAmbiental = Controller::DevolverIngAmbientalPorID(idUsuario);
			//Atributos generales
			txtFechaInicio->Text = ingAmbiental->FechaFirst->ToString();
			txtFechaFin->Text = ingAmbiental->FechaEnd->ToString();
			txtNombre->Text = ingAmbiental->Nombre;
			txtApellido->Text = ingAmbiental->Apelllido;
			txtSalario->Text = Convert::ToString(ingAmbiental->Salario);
			if (ingAmbiental->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(ingAmbiental->Photo);
				pbImage->Image = Image::FromStream(ms);
			}
			else {
				pbImage->Image = nullptr;
				pbImage->Invalidate();
			}
			//Atributos extra
			if (ingAmbiental->Edad) {
				txtEdad->Text = Convert::ToString(ingAmbiental->Edad);
			}
			if (ingAmbiental->NumeroTelefono) {
				txtNumTelefono->Text = Convert::ToString(ingAmbiental->NumeroTelefono);
			}
			if (ingAmbiental->NumeroLicencia->Length != 0) {
				txtNumLicencia->Text = Convert::ToString(ingAmbiental->NumeroLicencia);
			}
			if (ingAmbiental->EntidadCertificadora->Length != 0) {
				txtEntidadCertificadora->Text = ingAmbiental->EntidadCertificadora;
			}
			if (ingAmbiental->Especializacion->Length != 0) {
				txtEspecializacion->Text = ingAmbiental->Especializacion;
			}
		}
		catch (Exception^ ex) {
			throw ex;
		}
	}
	private: System::Void btnAtras_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int idUsuario = Controller::returnId();
			IngAmbiental^ ingAmbiental = Controller::DevolverIngAmbientalPorID(idUsuario);
			ingAmbiental->Edad = Convert::ToInt32(txtEdad->Text);
			ingAmbiental->NumeroTelefono = Convert::ToInt32(txtNumTelefono->Text);
			ingAmbiental->Especializacion = txtEspecializacion->Text;
			ingAmbiental->EntidadCertificadora = txtEntidadCertificadora->Text;
			ingAmbiental->NumeroLicencia = txtNumLicencia->Text;
			Controller::ActualizarIngAmbiental(ingAmbiental);
			MessageBox::Show("Datos actualizados correctamente");
		}
		catch (Exception^ ex) {
			throw ex;
		}
	}
	};
}