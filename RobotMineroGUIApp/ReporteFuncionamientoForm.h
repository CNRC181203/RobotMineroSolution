#pragma once

namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ReporteFuncionamientoForm
	/// </summary>
	public ref class ReporteFuncionamientoForm : public System::Windows::Forms::Form
	{
	public:
		ReporteFuncionamientoForm(void)
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
		~ReporteFuncionamientoForm()
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








	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(94, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Número de veces que se usó el robot:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(94, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Horas de uso:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(94, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(235, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tiempo de uso del sensor ultrasónico:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(94, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(222, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tiempo de uso del sensor de humo:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(94, 195);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(234, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Tiempo de uso del sensor de metano:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(94, 228);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(252, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Tiempo de uso del sensor de amoniaco :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(94, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(248, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Tiempo de uso del sensor de monóxido:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(425, 63);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 16);
			this->label9->TabIndex = 15;
			this->label9->Text = L"---";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(425, 96);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 16);
			this->label8->TabIndex = 16;
			this->label8->Text = L"---";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(425, 129);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 16);
			this->label10->TabIndex = 17;
			this->label10->Text = L"---";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(425, 162);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 16);
			this->label11->TabIndex = 18;
			this->label11->Text = L"---";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(425, 195);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 16);
			this->label12->TabIndex = 19;
			this->label12->Text = L"---";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(425, 228);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(19, 16);
			this->label13->TabIndex = 20;
			this->label13->Text = L"---";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(425, 261);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(19, 16);
			this->label14->TabIndex = 21;
			this->label14->Text = L"---";
			// 
			// ReporteFuncionamientoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 378);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ReporteFuncionamientoForm";
			this->Text = L"ReporteFuncionamientoForm";
			this->Load += gcnew System::EventHandler(this, &ReporteFuncionamientoForm::ReporteFuncionamientoForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void ReporteFuncionamientoForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
