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
	private: System::Windows::Forms::PictureBox^ pbShowImagePeon;
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
	private: System::Windows::Forms::TextBox^ txtShowFechaStartPeon;
	private: System::Windows::Forms::TextBox^ txtShowFechaFinPeon;
	private: System::Windows::Forms::TextBox^ txtShowNombrePeon;
	private: System::Windows::Forms::TextBox^ txtShowApellidoPeon;
	private: System::Windows::Forms::TextBox^ txtShowEdadPeon;



	private: System::Windows::Forms::TextBox^ txtShowLastDaysPeon;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtShowSalarioPeon;
	private: System::Windows::Forms::Button^ btnAtras;







	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;



	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;
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
			this->pbShowImagePeon = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtShowFechaStartPeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowFechaFinPeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowNombrePeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowApellidoPeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowEdadPeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowLastDaysPeon = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtShowSalarioPeon = (gcnew System::Windows::Forms::TextBox());
			this->btnAtras = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbShowImagePeon))->BeginInit();
			this->SuspendLayout();
			// 
			// pbShowImagePeon
			// 
			this->pbShowImagePeon->Location = System::Drawing::Point(636, 41);
			this->pbShowImagePeon->Margin = System::Windows::Forms::Padding(4);
			this->pbShowImagePeon->Name = L"pbShowImagePeon";
			this->pbShowImagePeon->Size = System::Drawing::Size(292, 274);
			this->pbShowImagePeon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbShowImagePeon->TabIndex = 0;
			this->pbShowImagePeon->TabStop = false;
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
			// txtShowFechaStartPeon
			// 
			this->txtShowFechaStartPeon->Location = System::Drawing::Point(286, 31);
			this->txtShowFechaStartPeon->Margin = System::Windows::Forms::Padding(4);
			this->txtShowFechaStartPeon->Name = L"txtShowFechaStartPeon";
			this->txtShowFechaStartPeon->Size = System::Drawing::Size(227, 22);
			this->txtShowFechaStartPeon->TabIndex = 14;
			// 
			// txtShowFechaFinPeon
			// 
			this->txtShowFechaFinPeon->Location = System::Drawing::Point(286, 74);
			this->txtShowFechaFinPeon->Margin = System::Windows::Forms::Padding(4);
			this->txtShowFechaFinPeon->Name = L"txtShowFechaFinPeon";
			this->txtShowFechaFinPeon->Size = System::Drawing::Size(227, 22);
			this->txtShowFechaFinPeon->TabIndex = 15;
			// 
			// txtShowNombrePeon
			// 
			this->txtShowNombrePeon->Location = System::Drawing::Point(286, 120);
			this->txtShowNombrePeon->Margin = System::Windows::Forms::Padding(4);
			this->txtShowNombrePeon->Name = L"txtShowNombrePeon";
			this->txtShowNombrePeon->Size = System::Drawing::Size(227, 22);
			this->txtShowNombrePeon->TabIndex = 16;
			// 
			// txtShowApellidoPeon
			// 
			this->txtShowApellidoPeon->Location = System::Drawing::Point(286, 160);
			this->txtShowApellidoPeon->Margin = System::Windows::Forms::Padding(4);
			this->txtShowApellidoPeon->Name = L"txtShowApellidoPeon";
			this->txtShowApellidoPeon->Size = System::Drawing::Size(227, 22);
			this->txtShowApellidoPeon->TabIndex = 17;
			// 
			// txtShowEdadPeon
			// 
			this->txtShowEdadPeon->Location = System::Drawing::Point(286, 201);
			this->txtShowEdadPeon->Margin = System::Windows::Forms::Padding(4);
			this->txtShowEdadPeon->Name = L"txtShowEdadPeon";
			this->txtShowEdadPeon->Size = System::Drawing::Size(227, 22);
			this->txtShowEdadPeon->TabIndex = 18;
			// 
			// txtShowLastDaysPeon
			// 
			this->txtShowLastDaysPeon->Location = System::Drawing::Point(286, 450);
			this->txtShowLastDaysPeon->Margin = System::Windows::Forms::Padding(4);
			this->txtShowLastDaysPeon->Name = L"txtShowLastDaysPeon";
			this->txtShowLastDaysPeon->Size = System::Drawing::Size(227, 22);
			this->txtShowLastDaysPeon->TabIndex = 23;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(40, 351);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 23);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Salario";
			// 
			// txtShowSalarioPeon
			// 
			this->txtShowSalarioPeon->Location = System::Drawing::Point(286, 351);
			this->txtShowSalarioPeon->Margin = System::Windows::Forms::Padding(4);
			this->txtShowSalarioPeon->Name = L"txtShowSalarioPeon";
			this->txtShowSalarioPeon->Size = System::Drawing::Size(227, 22);
			this->txtShowSalarioPeon->TabIndex = 25;
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(286, 504);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(227, 22);
			this->textBox1->TabIndex = 36;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Apto", L"No apto", L"Apto con restricción" });
			this->comboBox1->Location = System::Drawing::Point(286, 397);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 40;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(286, 249);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(227, 22);
			this->textBox2->TabIndex = 42;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(41, 249);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 23);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Número de teléfono";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(286, 301);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(227, 22);
			this->textBox3->TabIndex = 44;
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
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btnAtras);
			this->Controls->Add(this->txtShowSalarioPeon);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtShowLastDaysPeon);
			this->Controls->Add(this->txtShowEdadPeon);
			this->Controls->Add(this->txtShowApellidoPeon);
			this->Controls->Add(this->txtShowNombrePeon);
			this->Controls->Add(this->txtShowFechaFinPeon);
			this->Controls->Add(this->txtShowFechaStartPeon);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pbShowImagePeon);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ShowDatesPeonForm";
			this->Text = L"Mis datos";
			this->Load += gcnew System::EventHandler(this, &ShowDatesPeonForm::ShowDatesPeonForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbShowImagePeon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ShowDatesPeonForm_Load(System::Object^ sender, System::EventArgs^ e) {
		int extractIdPeonNew = Controller::returnId();

		Usuario^ ObjectPeonUserNew = gcnew Usuario();
		ObjectPeonUserNew = Controller::DevolverUsuarioPorID(extractIdPeonNew);
		
		txtShowNombrePeon->Text = ObjectPeonUserNew->Nombre;
		txtShowApellidoPeon->Text = ObjectPeonUserNew->Apelllido;

		DateTime^ atajo1 = ObjectPeonUserNew->FechaFirst;
		txtShowFechaStartPeon->Text = atajo1->ToString();
		DateTime^ atajo2 = ObjectPeonUserNew->FechaEnd;
		txtShowFechaFinPeon->Text = atajo2->ToString();
		
		//txtShowEdadPeon->Text = "" + ObjectPeonUserNew->edad;
		//txtShowEPPeon->Text = ObjectPeonUserNew->EppOptimus;
		//txtShowTanqueOPeon->Text = ObjectPeonUserNew->tanquesDeOxigeno.ToString();
		//txtShowKitMedicPeon->Text = ObjectPeonUserNew->MedicKit;
		//txtShowLastDaysPeon->Text = ObjectPeonUserNew->LastCheck.ToString();
		//txtShowSalarioPeon->Text = "" + ObjectPeonUserNew->Salario;

		if (ObjectPeonUserNew->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(ObjectPeonUserNew->Photo);
			pbShowImagePeon->Image = Image::FromStream(ms);
		}
		else {
			pbShowImagePeon->Image = nullptr;
			pbShowImagePeon->Invalidate();
		}
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Si cambo algún dato este fue actualizado");
		int extractIdPeonNew = Controller::returnId();

		Peon^ ObjectPeonUserNew = gcnew Peon();
		ObjectPeonUserNew = Controller::DevolverPeonPorID(extractIdPeonNew);
		
	}
private: System::Void btnAtras_Click(System::Object^ sender, System::EventArgs^ e);
};
}
