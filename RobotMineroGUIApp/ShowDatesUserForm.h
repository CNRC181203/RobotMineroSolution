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
	/// Resumen de ShowDatesUserForm
	/// </summary>
	public ref class ShowDatesUserForm : public System::Windows::Forms::Form
	{
	public:
		ShowDatesUserForm(void)
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
		~ShowDatesUserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pbShowImage;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvWork1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvwork2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvwork3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvwork4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvwork5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvwork6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvwork7;
	private: System::Windows::Forms::TextBox^ txtShowFechaStart;
	private: System::Windows::Forms::TextBox^ txtShowFechaFin;
	private: System::Windows::Forms::TextBox^ txtShowNombre;
	private: System::Windows::Forms::TextBox^ txtShowApellido;
	private: System::Windows::Forms::TextBox^ txtShowEdad;
	private: System::Windows::Forms::TextBox^ txtShowSeguro;
	private: System::Windows::Forms::TextBox^ txtShowSueldo;







	private: System::Windows::Forms::TextBox^ txtShowFinishDays;

	private: System::Windows::Forms::TextBox^ txtShowLastDays;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pbShowImage = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dgvWork1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvwork2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvwork3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvwork4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvwork5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvwork6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvwork7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtShowFechaStart = (gcnew System::Windows::Forms::TextBox());
			this->txtShowFechaFin = (gcnew System::Windows::Forms::TextBox());
			this->txtShowNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtShowApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtShowEdad = (gcnew System::Windows::Forms::TextBox());
			this->txtShowSeguro = (gcnew System::Windows::Forms::TextBox());
			this->txtShowSueldo = (gcnew System::Windows::Forms::TextBox());
			this->txtShowFinishDays = (gcnew System::Windows::Forms::TextBox());
			this->txtShowLastDays = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbShowImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(364, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Fecha de contratación";
			this->label1->Click += gcnew System::EventHandler(this, &ShowDatesUserForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(364, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(176, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Fecha fin de contratación";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(364, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellido";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(364, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Nombre";
			this->label4->Click += gcnew System::EventHandler(this, &ShowDatesUserForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(364, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Edad";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(364, 191);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 19);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Seguro Medico";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(364, 288);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 19);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Sueldo";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(364, 254);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(127, 19);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Dias completados";
			this->label8->Click += gcnew System::EventHandler(this, &ShowDatesUserForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(364, 224);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(255, 19);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Dias desde su ultima revision medica";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(65, 365);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(130, 19);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Tareas asignadas:";
			// 
			// pbShowImage
			// 
			this->pbShowImage->Location = System::Drawing::Point(32, 35);
			this->pbShowImage->Name = L"pbShowImage";
			this->pbShowImage->Size = System::Drawing::Size(259, 270);
			this->pbShowImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbShowImage->TabIndex = 10;
			this->pbShowImage->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dgvWork1,
					this->dgvwork2, this->dgvwork3, this->dgvwork4, this->dgvwork5, this->dgvwork6, this->dgvwork7
			});
			this->dataGridView1->Location = System::Drawing::Point(69, 404);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(744, 150);
			this->dataGridView1->TabIndex = 11;
			// 
			// dgvWork1
			// 
			this->dgvWork1->HeaderText = L"Tarea 1";
			this->dgvWork1->Name = L"dgvWork1";
			// 
			// dgvwork2
			// 
			this->dgvwork2->HeaderText = L"Tarea 2";
			this->dgvwork2->Name = L"dgvwork2";
			// 
			// dgvwork3
			// 
			this->dgvwork3->HeaderText = L"Tarea 3";
			this->dgvwork3->Name = L"dgvwork3";
			// 
			// dgvwork4
			// 
			this->dgvwork4->HeaderText = L"Traea 4";
			this->dgvwork4->Name = L"dgvwork4";
			// 
			// dgvwork5
			// 
			this->dgvwork5->HeaderText = L"Tarea 5";
			this->dgvwork5->Name = L"dgvwork5";
			// 
			// dgvwork6
			// 
			this->dgvwork6->HeaderText = L"Tarea 6";
			this->dgvwork6->Name = L"dgvwork6";
			// 
			// dgvwork7
			// 
			this->dgvwork7->HeaderText = L"Tarea 7";
			this->dgvwork7->Name = L"dgvwork7";
			// 
			// txtShowFechaStart
			// 
			this->txtShowFechaStart->Location = System::Drawing::Point(642, 32);
			this->txtShowFechaStart->Name = L"txtShowFechaStart";
			this->txtShowFechaStart->Size = System::Drawing::Size(171, 20);
			this->txtShowFechaStart->TabIndex = 12;
			// 
			// txtShowFechaFin
			// 
			this->txtShowFechaFin->Location = System::Drawing::Point(642, 65);
			this->txtShowFechaFin->Name = L"txtShowFechaFin";
			this->txtShowFechaFin->Size = System::Drawing::Size(171, 20);
			this->txtShowFechaFin->TabIndex = 13;
			// 
			// txtShowNombre
			// 
			this->txtShowNombre->Location = System::Drawing::Point(642, 94);
			this->txtShowNombre->Name = L"txtShowNombre";
			this->txtShowNombre->Size = System::Drawing::Size(171, 20);
			this->txtShowNombre->TabIndex = 14;
			// 
			// txtShowApellido
			// 
			this->txtShowApellido->Location = System::Drawing::Point(642, 126);
			this->txtShowApellido->Name = L"txtShowApellido";
			this->txtShowApellido->Size = System::Drawing::Size(171, 20);
			this->txtShowApellido->TabIndex = 15;
			// 
			// txtShowEdad
			// 
			this->txtShowEdad->Location = System::Drawing::Point(642, 156);
			this->txtShowEdad->Name = L"txtShowEdad";
			this->txtShowEdad->Size = System::Drawing::Size(171, 20);
			this->txtShowEdad->TabIndex = 16;
			// 
			// txtShowSeguro
			// 
			this->txtShowSeguro->Location = System::Drawing::Point(642, 190);
			this->txtShowSeguro->Name = L"txtShowSeguro";
			this->txtShowSeguro->Size = System::Drawing::Size(171, 20);
			this->txtShowSeguro->TabIndex = 17;
			// 
			// txtShowSueldo
			// 
			this->txtShowSueldo->Location = System::Drawing::Point(642, 287);
			this->txtShowSueldo->Name = L"txtShowSueldo";
			this->txtShowSueldo->Size = System::Drawing::Size(171, 20);
			this->txtShowSueldo->TabIndex = 20;
			// 
			// txtShowFinishDays
			// 
			this->txtShowFinishDays->Location = System::Drawing::Point(642, 253);
			this->txtShowFinishDays->Name = L"txtShowFinishDays";
			this->txtShowFinishDays->Size = System::Drawing::Size(171, 20);
			this->txtShowFinishDays->TabIndex = 19;
			// 
			// txtShowLastDays
			// 
			this->txtShowLastDays->Location = System::Drawing::Point(642, 223);
			this->txtShowLastDays->Name = L"txtShowLastDays";
			this->txtShowLastDays->Size = System::Drawing::Size(171, 20);
			this->txtShowLastDays->TabIndex = 18;
			// 
			// ShowDatesUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(876, 666);
			this->Controls->Add(this->txtShowSueldo);
			this->Controls->Add(this->txtShowFinishDays);
			this->Controls->Add(this->txtShowLastDays);
			this->Controls->Add(this->txtShowSeguro);
			this->Controls->Add(this->txtShowEdad);
			this->Controls->Add(this->txtShowApellido);
			this->Controls->Add(this->txtShowNombre);
			this->Controls->Add(this->txtShowFechaFin);
			this->Controls->Add(this->txtShowFechaStart);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pbShowImage);
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
			this->Name = L"ShowDatesUserForm";
			this->Text = L"ShowDatesUserForm";
			this->Load += gcnew System::EventHandler(this, &ShowDatesUserForm::ShowDatesUserForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbShowImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ShowDatesUserForm_Load(System::Object^ sender, System::EventArgs^ e) {

		int usuarioEnterNewID=Controller::returnId();
		Usuario^ EnterUsuario = Controller::DevolverUsuarioPorID(usuarioEnterNewID);

		if (EnterUsuario->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(EnterUsuario->Photo);
			pbShowImage->Image = Image::FromStream(ms);
		}
		else {
			pbShowImage->Image = nullptr;
			pbShowImage->Invalidate();
		}
	}
};
}
