#pragma once

namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ReporteAmbientalForm
	/// </summary>
	public ref class ReporteAmbientalForm : public System::Windows::Forms::Form
	{
	public:
		ReporteAmbientalForm(void)
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
		~ReporteAmbientalForm()
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
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(109, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Mayor concentración de humo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(109, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Mayor concentración de metano:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(109, 191);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(217, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Mayor concentración de amoniaco:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(109, 247);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(196, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Máxima temperatura registrada:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(109, 294);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Mínima temperatura registrada:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(109, 341);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(141, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Tempertura promedio:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(397, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"---";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(397, 142);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 16);
			this->label8->TabIndex = 13;
			this->label8->Text = L"---";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(397, 191);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 16);
			this->label9->TabIndex = 14;
			this->label9->Text = L"---";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(397, 247);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 16);
			this->label10->TabIndex = 15;
			this->label10->Text = L"---";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(397, 294);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 16);
			this->label11->TabIndex = 16;
			this->label11->Text = L"---";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(397, 341);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 16);
			this->label12->TabIndex = 17;
			this->label12->Text = L"---";
			// 
			// ReporteAmbientalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(670, 484);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
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
			this->Name = L"ReporteAmbientalForm";
			this->Text = L"ReporteAmbientalForm";
			this->Load += gcnew System::EventHandler(this, &ReporteAmbientalForm::ReporteAmbientalForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ReporteAmbientalForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}