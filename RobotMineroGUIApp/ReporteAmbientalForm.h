#pragma once
using namespace RobotMineroController;
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
	private: System::Windows::Forms::Label^ MayorHumedad;
	protected:
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ PromedioHumdad;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ MayorMQ2;
	private: System::Windows::Forms::Label^ PromedioMQ2;
	private: System::Windows::Forms::Label^ MayorMQ135;
	private: System::Windows::Forms::Label^ PromedioMQ135;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;


















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
			this->MayorHumedad = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->PromedioHumdad = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->MayorMQ2 = (gcnew System::Windows::Forms::Label());
			this->PromedioMQ2 = (gcnew System::Windows::Forms::Label());
			this->MayorMQ135 = (gcnew System::Windows::Forms::Label());
			this->PromedioMQ135 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// MayorHumedad
			// 
			this->MayorHumedad->AutoSize = true;
			this->MayorHumedad->Location = System::Drawing::Point(553, 243);
			this->MayorHumedad->Name = L"MayorHumedad";
			this->MayorHumedad->Size = System::Drawing::Size(51, 16);
			this->MayorHumedad->TabIndex = 29;
			this->MayorHumedad->Text = L"label11";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(370, 243);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(145, 16);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Mayor valor registrado:";
			// 
			// PromedioHumdad
			// 
			this->PromedioHumdad->AutoSize = true;
			this->PromedioHumdad->Location = System::Drawing::Point(261, 243);
			this->PromedioHumdad->Name = L"PromedioHumdad";
			this->PromedioHumdad->Size = System::Drawing::Size(44, 16);
			this->PromedioHumdad->TabIndex = 27;
			this->PromedioHumdad->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(43, 243);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(207, 16);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Promedio de valores registrados:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(33, 205);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(199, 16);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Resultados sensor de humedad";
			// 
			// MayorMQ2
			// 
			this->MayorMQ2->AutoSize = true;
			this->MayorMQ2->Location = System::Drawing::Point(553, 76);
			this->MayorMQ2->Name = L"MayorMQ2";
			this->MayorMQ2->Size = System::Drawing::Size(44, 16);
			this->MayorMQ2->TabIndex = 24;
			this->MayorMQ2->Text = L"label8";
			// 
			// PromedioMQ2
			// 
			this->PromedioMQ2->AutoSize = true;
			this->PromedioMQ2->Location = System::Drawing::Point(261, 76);
			this->PromedioMQ2->Name = L"PromedioMQ2";
			this->PromedioMQ2->Size = System::Drawing::Size(44, 16);
			this->PromedioMQ2->TabIndex = 23;
			this->PromedioMQ2->Text = L"label7";
			// 
			// MayorMQ135
			// 
			this->MayorMQ135->AutoSize = true;
			this->MayorMQ135->Location = System::Drawing::Point(553, 167);
			this->MayorMQ135->Name = L"MayorMQ135";
			this->MayorMQ135->Size = System::Drawing::Size(44, 16);
			this->MayorMQ135->TabIndex = 22;
			this->MayorMQ135->Text = L"label8";
			// 
			// PromedioMQ135
			// 
			this->PromedioMQ135->AutoSize = true;
			this->PromedioMQ135->Location = System::Drawing::Point(261, 167);
			this->PromedioMQ135->Name = L"PromedioMQ135";
			this->PromedioMQ135->Size = System::Drawing::Size(44, 16);
			this->PromedioMQ135->TabIndex = 21;
			this->PromedioMQ135->Text = L"label7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(370, 167);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 16);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Mayor valores registrado:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(43, 167);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(200, 16);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Promedio de valores registrado:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(308, 16);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Resultado gases contaminantes del aire (MQ-135):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(370, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 16);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Mayor valor registrado:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 16);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Promedio de valores registrado:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 16);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Resultados gases inflamableS (MQ-2):";
			// 
			// ReporteAmbientalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(670, 484);
			this->Controls->Add(this->MayorHumedad);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->PromedioHumdad);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->MayorMQ2);
			this->Controls->Add(this->PromedioMQ2);
			this->Controls->Add(this->MayorMQ135);
			this->Controls->Add(this->PromedioMQ135);
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
		double maxMQ2 = 0.0, sumMQ2 = 0.0;
		int nMQ2 = Controller::valoresMQ2->Count;
		if (nMQ2 > 0) {
			maxMQ2 = Controller::valoresMQ2[0];
			for each (double v in Controller::valoresMQ2) {
				sumMQ2 += v;
				if (v > maxMQ2) maxMQ2 = v;
			}
		}
		double promMQ2 = nMQ2 > 0 ? sumMQ2 / nMQ2 : 0.0;

		// MQ135
		double maxMQ135 = 0.0, sumMQ135 = 0.0;
		int nMQ135 = Controller::valoresMQ135->Count;
		if (nMQ135 > 0) {
			maxMQ135 = Controller::valoresMQ135[0];
			for each (double v in Controller::valoresMQ135) {
				sumMQ135 += v;
				if (v > maxMQ135) maxMQ135 = v;
			}
		}
		double promMQ135 = nMQ135 > 0 ? sumMQ135 / nMQ135 : 0.0;

		//humedad
		double maxHumedad = 0.0, sumHumedad = 0.0;
		int nHumedad = Controller::valoresHumedad->Count;
		if (nHumedad > 0) {
			maxHumedad = Controller::valoresHumedad[0];
			for each (double v in Controller::valoresHumedad) {
				sumHumedad += v;
				if (v > maxHumedad) maxHumedad = v;
			}
		}
		double promHumedad = nHumedad > 0 ? sumHumedad / nHumedad : 0.0;

		// Asigna a los labels
		PromedioMQ2->Text = promMQ2.ToString("F2");
		MayorMQ2->Text = maxMQ2.ToString("F2");
		PromedioMQ135->Text = promMQ135.ToString("F2");
		MayorMQ135->Text = maxMQ135.ToString("F2");
		PromedioHumdad->Text = promHumedad.ToString("F2");
		MayorHumedad->Text = maxHumedad.ToString("F2");

	}
	};
}