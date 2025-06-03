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
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtShowFechaStartPeon;
	private: System::Windows::Forms::TextBox^ txtShowFechaFinPeon;
	private: System::Windows::Forms::TextBox^ txtShowNombrePeon;
	private: System::Windows::Forms::TextBox^ txtShowApellidoPeon;
	private: System::Windows::Forms::TextBox^ txtShowEdadPeon;
	private: System::Windows::Forms::TextBox^ txtShowEPPeon;
	private: System::Windows::Forms::TextBox^ txtShowTanqueOPeon;
	private: System::Windows::Forms::TextBox^ txtShowKitMedicPeon;
	private: System::Windows::Forms::TextBox^ txtShowLastDaysPeon;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtShowSalarioPeon;









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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtShowFechaStartPeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowFechaFinPeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowNombrePeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowApellidoPeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowEdadPeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowEPPeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowTanqueOPeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowKitMedicPeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowLastDaysPeon = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtShowSalarioPeon = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbShowImagePeon))->BeginInit();
			this->SuspendLayout();
			// 
			// pbShowImagePeon
			// 
			this->pbShowImagePeon->Location = System::Drawing::Point(27, 19);
			this->pbShowImagePeon->Name = L"pbShowImagePeon";
			this->pbShowImagePeon->Size = System::Drawing::Size(291, 314);
			this->pbShowImagePeon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbShowImagePeon->TabIndex = 0;
			this->pbShowImagePeon->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(400, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 23);
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
			this->label4->Location = System::Drawing::Point(396, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 19);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(396, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 19);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Apellido";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(396, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(176, 19);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Fecha fin de contratación";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(396, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 19);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Fecha de contratación";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(396, 144);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 19);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Edad";
			this->label5->Click += gcnew System::EventHandler(this, &ShowDatesPeonForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(396, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 19);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Estado del EPP";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(396, 203);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(141, 19);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Tanques de oxigeno";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(396, 232);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 19);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Botiquines";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(396, 260);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(144, 19);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Dias desde la ultima";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(396, 279);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(113, 19);
			this->label10->TabIndex = 13;
			this->label10->Text = L"revision medica";
			// 
			// txtShowFechaStartPeon
			// 
			this->txtShowFechaStartPeon->Location = System::Drawing::Point(642, 21);
			this->txtShowFechaStartPeon->Name = L"txtShowFechaStartPeon";
			this->txtShowFechaStartPeon->Size = System::Drawing::Size(171, 20);
			this->txtShowFechaStartPeon->TabIndex = 14;
			// 
			// txtShowFechaFinPeon
			// 
			this->txtShowFechaFinPeon->Location = System::Drawing::Point(642, 54);
			this->txtShowFechaFinPeon->Name = L"txtShowFechaFinPeon";
			this->txtShowFechaFinPeon->Size = System::Drawing::Size(171, 20);
			this->txtShowFechaFinPeon->TabIndex = 15;
			// 
			// txtShowNombrePeon
			// 
			this->txtShowNombrePeon->Location = System::Drawing::Point(642, 83);
			this->txtShowNombrePeon->Name = L"txtShowNombrePeon";
			this->txtShowNombrePeon->Size = System::Drawing::Size(171, 20);
			this->txtShowNombrePeon->TabIndex = 16;
			// 
			// txtShowApellidoPeon
			// 
			this->txtShowApellidoPeon->Location = System::Drawing::Point(642, 115);
			this->txtShowApellidoPeon->Name = L"txtShowApellidoPeon";
			this->txtShowApellidoPeon->Size = System::Drawing::Size(171, 20);
			this->txtShowApellidoPeon->TabIndex = 17;
			// 
			// txtShowEdadPeon
			// 
			this->txtShowEdadPeon->Location = System::Drawing::Point(642, 143);
			this->txtShowEdadPeon->Name = L"txtShowEdadPeon";
			this->txtShowEdadPeon->Size = System::Drawing::Size(171, 20);
			this->txtShowEdadPeon->TabIndex = 18;
			// 
			// txtShowEPPeon
			// 
			this->txtShowEPPeon->Location = System::Drawing::Point(642, 169);
			this->txtShowEPPeon->Name = L"txtShowEPPeon";
			this->txtShowEPPeon->Size = System::Drawing::Size(171, 20);
			this->txtShowEPPeon->TabIndex = 19;
			// 
			// txtShowTanqueOPeon
			// 
			this->txtShowTanqueOPeon->Location = System::Drawing::Point(642, 202);
			this->txtShowTanqueOPeon->Name = L"txtShowTanqueOPeon";
			this->txtShowTanqueOPeon->Size = System::Drawing::Size(171, 20);
			this->txtShowTanqueOPeon->TabIndex = 20;
			// 
			// txtShowKitMedicPeon
			// 
			this->txtShowKitMedicPeon->Location = System::Drawing::Point(642, 231);
			this->txtShowKitMedicPeon->Name = L"txtShowKitMedicPeon";
			this->txtShowKitMedicPeon->Size = System::Drawing::Size(171, 20);
			this->txtShowKitMedicPeon->TabIndex = 21;
			// 
			// txtShowLastDaysPeon
			// 
			this->txtShowLastDaysPeon->Location = System::Drawing::Point(642, 278);
			this->txtShowLastDaysPeon->Name = L"txtShowLastDaysPeon";
			this->txtShowLastDaysPeon->Size = System::Drawing::Size(171, 20);
			this->txtShowLastDaysPeon->TabIndex = 23;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(396, 314);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(56, 19);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Salario";
			// 
			// txtShowSalarioPeon
			// 
			this->txtShowSalarioPeon->Location = System::Drawing::Point(642, 313);
			this->txtShowSalarioPeon->Name = L"txtShowSalarioPeon";
			this->txtShowSalarioPeon->Size = System::Drawing::Size(171, 20);
			this->txtShowSalarioPeon->TabIndex = 25;
			// 
			// ShowDatesPeonForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(935, 453);
			this->Controls->Add(this->txtShowSalarioPeon);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtShowLastDaysPeon);
			this->Controls->Add(this->txtShowKitMedicPeon);
			this->Controls->Add(this->txtShowTanqueOPeon);
			this->Controls->Add(this->txtShowEPPeon);
			this->Controls->Add(this->txtShowEdadPeon);
			this->Controls->Add(this->txtShowApellidoPeon);
			this->Controls->Add(this->txtShowNombrePeon);
			this->Controls->Add(this->txtShowFechaFinPeon);
			this->Controls->Add(this->txtShowFechaStartPeon);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pbShowImagePeon);
			this->Name = L"ShowDatesPeonForm";
			this->Text = L"ShowDatesPeonForm";
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

		ObjectPeonUserNew->Nombre = txtShowNombrePeon->Text;
		ObjectPeonUserNew->Apelllido = txtShowApellidoPeon->Text;
		ObjectPeonUserNew->edad = Int32::Parse(txtShowEdadPeon->Text);
		ObjectPeonUserNew->EppOptimus = txtShowEPPeon->Text;
		ObjectPeonUserNew->tanquesDeOxigeno = Int32::Parse(txtShowTanqueOPeon->Text);
		ObjectPeonUserNew->MedicKit = txtShowKitMedicPeon->Text;
		ObjectPeonUserNew->LastCheck = Int32::Parse(txtShowLastDaysPeon->Text);
		ObjectPeonUserNew->Salario = Double::Parse(txtShowSalarioPeon->Text);

		txtShowNombrePeon->Text = ObjectPeonUserNew->Nombre;
		txtShowApellidoPeon->Text = ObjectPeonUserNew->Apelllido;
		txtShowEdadPeon->Text = "" + ObjectPeonUserNew->edad;
		txtShowEPPeon->Text = ObjectPeonUserNew->EppOptimus;
		txtShowTanqueOPeon->Text = ObjectPeonUserNew->tanquesDeOxigeno.ToString();
		txtShowKitMedicPeon->Text = ObjectPeonUserNew->MedicKit;
		txtShowLastDaysPeon->Text = ObjectPeonUserNew->LastCheck.ToString();
		txtShowSalarioPeon->Text = "" + ObjectPeonUserNew->Salario;
	}
};
}
