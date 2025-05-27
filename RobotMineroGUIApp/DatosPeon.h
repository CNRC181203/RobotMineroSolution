#pragma once

namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de DatosPeon
	/// </summary>
	public ref class DatosPeon : public System::Windows::Forms::Form
	{
	public:
		DatosPeon(void)
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
		~DatosPeon()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tarea1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tarea2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tarea3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tarea4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tarea5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tarea6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tarea7;
	private: System::Windows::Forms::Button^ button1;




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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Tarea1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tarea2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tarea3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tarea4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tarea5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tarea6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tarea7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nombre:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(37, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Apellido:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(37, 103);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Edad:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(37, 141);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Seguro Médico:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(37, 179);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Sueldo:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(37, 219);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Días completados:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(145, 58);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(145, 96);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(145, 134);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(145, 172);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(145, 212);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 260);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Última fecha de revisión médica";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(215, 253);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(122, 20);
			this->textBox7->TabIndex = 15;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Tarea1,
					this->Tarea2, this->Tarea3, this->Tarea4, this->Tarea5, this->Tarea6, this->Tarea7
			});
			this->dataGridView1->Location = System::Drawing::Point(40, 309);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(758, 150);
			this->dataGridView1->TabIndex = 16;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DatosPeon::dataGridView1_CellContentClick);
			// 
			// Tarea1
			// 
			this->Tarea1->HeaderText = L"Tarea 1";
			this->Tarea1->Name = L"Tarea1";
			// 
			// Tarea2
			// 
			this->Tarea2->HeaderText = L"Tarea 2";
			this->Tarea2->Name = L"Tarea2";
			// 
			// Tarea3
			// 
			this->Tarea3->HeaderText = L"Tarea 3";
			this->Tarea3->Name = L"Tarea3";
			// 
			// Tarea4
			// 
			this->Tarea4->HeaderText = L"Tarea 4 ";
			this->Tarea4->Name = L"Tarea4";
			// 
			// Tarea5
			// 
			this->Tarea5->HeaderText = L"Tarea 5";
			this->Tarea5->Name = L"Tarea5";
			// 
			// Tarea6
			// 
			this->Tarea6->HeaderText = L"Tarea 6";
			this->Tarea6->Name = L"Tarea6";
			// 
			// Tarea7
			// 
			this->Tarea7->HeaderText = L"Tarea 7";
			this->Tarea7->Name = L"Tarea7";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(489, 251);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Actualizar datos";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// DatosPeon
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(881, 509);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Name = L"DatosPeon";
			this->Text = L"Mis Datos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
