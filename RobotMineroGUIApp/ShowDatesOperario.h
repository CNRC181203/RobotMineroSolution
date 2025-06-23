#pragma once

namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ textBox3;
	protected:
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::Button^ btnAtras;
	private: System::Windows::Forms::TextBox^ txtShowSalarioPeon;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtShowLastDaysPeon;
	private: System::Windows::Forms::TextBox^ txtShowEdadPeon;
	private: System::Windows::Forms::TextBox^ txtShowApellidoPeon;
	private: System::Windows::Forms::TextBox^ txtShowNombrePeon;
	private: System::Windows::Forms::TextBox^ txtShowFechaFinPeon;
	private: System::Windows::Forms::TextBox^ txtShowFechaStartPeon;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pbShowImagePeon;

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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnAtras = (gcnew System::Windows::Forms::Button());
			this->txtShowSalarioPeon = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtShowLastDaysPeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowEdadPeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowApellidoPeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowNombrePeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowFechaFinPeon = (gcnew System::Windows::Forms::TextBox());
			this->txtShowFechaStartPeon = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pbShowImagePeon = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbShowImagePeon))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(315, 332);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(227, 22);
			this->textBox3->TabIndex = 70;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(69, 330);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(69, 23);
			this->label12->TabIndex = 69;
			this->label12->Text = L"Salario";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(315, 280);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(227, 22);
			this->textBox2->TabIndex = 68;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(70, 280);
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
			// txtShowSalarioPeon
			// 
			this->txtShowSalarioPeon->Location = System::Drawing::Point(315, 382);
			this->txtShowSalarioPeon->Margin = System::Windows::Forms::Padding(4);
			this->txtShowSalarioPeon->Name = L"txtShowSalarioPeon";
			this->txtShowSalarioPeon->Size = System::Drawing::Size(227, 22);
			this->txtShowSalarioPeon->TabIndex = 62;
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
			// txtShowLastDaysPeon
			// 
			this->txtShowLastDaysPeon->Location = System::Drawing::Point(315, 449);
			this->txtShowLastDaysPeon->Margin = System::Windows::Forms::Padding(4);
			this->txtShowLastDaysPeon->Name = L"txtShowLastDaysPeon";
			this->txtShowLastDaysPeon->Size = System::Drawing::Size(227, 22);
			this->txtShowLastDaysPeon->TabIndex = 60;
			// 
			// txtShowEdadPeon
			// 
			this->txtShowEdadPeon->Location = System::Drawing::Point(315, 232);
			this->txtShowEdadPeon->Margin = System::Windows::Forms::Padding(4);
			this->txtShowEdadPeon->Name = L"txtShowEdadPeon";
			this->txtShowEdadPeon->Size = System::Drawing::Size(227, 22);
			this->txtShowEdadPeon->TabIndex = 59;
			// 
			// txtShowApellidoPeon
			// 
			this->txtShowApellidoPeon->Location = System::Drawing::Point(315, 191);
			this->txtShowApellidoPeon->Margin = System::Windows::Forms::Padding(4);
			this->txtShowApellidoPeon->Name = L"txtShowApellidoPeon";
			this->txtShowApellidoPeon->Size = System::Drawing::Size(227, 22);
			this->txtShowApellidoPeon->TabIndex = 58;
			// 
			// txtShowNombrePeon
			// 
			this->txtShowNombrePeon->Location = System::Drawing::Point(315, 151);
			this->txtShowNombrePeon->Margin = System::Windows::Forms::Padding(4);
			this->txtShowNombrePeon->Name = L"txtShowNombrePeon";
			this->txtShowNombrePeon->Size = System::Drawing::Size(227, 22);
			this->txtShowNombrePeon->TabIndex = 57;
			// 
			// txtShowFechaFinPeon
			// 
			this->txtShowFechaFinPeon->Location = System::Drawing::Point(315, 105);
			this->txtShowFechaFinPeon->Margin = System::Windows::Forms::Padding(4);
			this->txtShowFechaFinPeon->Name = L"txtShowFechaFinPeon";
			this->txtShowFechaFinPeon->Size = System::Drawing::Size(227, 22);
			this->txtShowFechaFinPeon->TabIndex = 56;
			// 
			// txtShowFechaStartPeon
			// 
			this->txtShowFechaStartPeon->Location = System::Drawing::Point(315, 62);
			this->txtShowFechaStartPeon->Margin = System::Windows::Forms::Padding(4);
			this->txtShowFechaStartPeon->Name = L"txtShowFechaStartPeon";
			this->txtShowFechaStartPeon->Size = System::Drawing::Size(227, 22);
			this->txtShowFechaStartPeon->TabIndex = 55;
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
			// 
			// pbShowImagePeon
			// 
			this->pbShowImagePeon->Location = System::Drawing::Point(668, 45);
			this->pbShowImagePeon->Margin = System::Windows::Forms::Padding(4);
			this->pbShowImagePeon->Name = L"pbShowImagePeon";
			this->pbShowImagePeon->Size = System::Drawing::Size(292, 274);
			this->pbShowImagePeon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbShowImagePeon->TabIndex = 45;
			this->pbShowImagePeon->TabStop = false;
			// 
			// ShowDatesOperario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1072, 580);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btnAtras);
			this->Controls->Add(this->txtShowSalarioPeon);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtShowLastDaysPeon);
			this->Controls->Add(this->txtShowEdadPeon);
			this->Controls->Add(this->txtShowApellidoPeon);
			this->Controls->Add(this->txtShowNombrePeon);
			this->Controls->Add(this->txtShowFechaFinPeon);
			this->Controls->Add(this->txtShowFechaStartPeon);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pbShowImagePeon);
			this->Name = L"ShowDatesOperario";
			this->Text = L"Mis datos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbShowImagePeon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
