#pragma once
#include "MantenimientoCarroForm.h"
#include "MantenimientoComponentes.h"

namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RobotMineroModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de RgistroCarrosForm
	/// </summary>
	public ref class RgistroCarrosForm : public System::Windows::Forms::Form
	{
	public:
		RgistroCarrosForm(void)
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
		~RgistroCarrosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ AgregarCarro;
	private: System::Windows::Forms::Button^ AgregarComponentes;
	protected:


	private: System::Windows::Forms::DataGridView^ dgvRegistros;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ModeloCarro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AgregarActuador1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AgregarActuador2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AgregarSenor1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AgregarSenor2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AgregarSenor3;

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
			this->AgregarCarro = (gcnew System::Windows::Forms::Button());
			this->AgregarComponentes = (gcnew System::Windows::Forms::Button());
			this->dgvRegistros = (gcnew System::Windows::Forms::DataGridView());
			this->ModeloCarro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AgregarActuador1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AgregarActuador2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AgregarSenor1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AgregarSenor2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AgregarSenor3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRegistros))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registrar un carro";
			// 
			// AgregarCarro
			// 
			this->AgregarCarro->Location = System::Drawing::Point(12, 78);
			this->AgregarCarro->Name = L"AgregarCarro";
			this->AgregarCarro->Size = System::Drawing::Size(135, 32);
			this->AgregarCarro->TabIndex = 1;
			this->AgregarCarro->Text = L"Agregar un Carro";
			this->AgregarCarro->UseVisualStyleBackColor = true;
			this->AgregarCarro->Click += gcnew System::EventHandler(this, &RgistroCarrosForm::AgregarCarro_Click);
			// 
			// AgregarComponentes
			// 
			this->AgregarComponentes->Location = System::Drawing::Point(251, 78);
			this->AgregarComponentes->Name = L"AgregarComponentes";
			this->AgregarComponentes->Size = System::Drawing::Size(169, 32);
			this->AgregarComponentes->TabIndex = 2;
			this->AgregarComponentes->Text = L"Agregar componentes";
			this->AgregarComponentes->UseVisualStyleBackColor = true;
			this->AgregarComponentes->Click += gcnew System::EventHandler(this, &RgistroCarrosForm::AgregarComponentes_Click);
			// 
			// dgvRegistros
			// 
			this->dgvRegistros->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvRegistros->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ModeloCarro,
					this->AgregarActuador1, this->AgregarActuador2, this->AgregarSenor1, this->AgregarSenor2, this->AgregarSenor3
			});
			this->dgvRegistros->Location = System::Drawing::Point(12, 142);
			this->dgvRegistros->Name = L"dgvRegistros";
			this->dgvRegistros->RowHeadersWidth = 51;
			this->dgvRegistros->RowTemplate->Height = 24;
			this->dgvRegistros->Size = System::Drawing::Size(811, 168);
			this->dgvRegistros->TabIndex = 3;
			// 
			// ModeloCarro
			// 
			this->ModeloCarro->HeaderText = L"Modelo";
			this->ModeloCarro->MinimumWidth = 6;
			this->ModeloCarro->Name = L"ModeloCarro";
			this->ModeloCarro->Width = 125;
			// 
			// AgregarActuador1
			// 
			this->AgregarActuador1->HeaderText = L"Actuador1";
			this->AgregarActuador1->MinimumWidth = 6;
			this->AgregarActuador1->Name = L"AgregarActuador1";
			this->AgregarActuador1->Width = 125;
			// 
			// AgregarActuador2
			// 
			this->AgregarActuador2->HeaderText = L"Actuador2";
			this->AgregarActuador2->MinimumWidth = 6;
			this->AgregarActuador2->Name = L"AgregarActuador2";
			this->AgregarActuador2->Width = 125;
			// 
			// AgregarSenor1
			// 
			this->AgregarSenor1->HeaderText = L"Sensor1";
			this->AgregarSenor1->MinimumWidth = 6;
			this->AgregarSenor1->Name = L"AgregarSenor1";
			this->AgregarSenor1->Width = 125;
			// 
			// AgregarSenor2
			// 
			this->AgregarSenor2->HeaderText = L"Sensor2";
			this->AgregarSenor2->MinimumWidth = 6;
			this->AgregarSenor2->Name = L"AgregarSenor2";
			this->AgregarSenor2->Width = 125;
			// 
			// AgregarSenor3
			// 
			this->AgregarSenor3->HeaderText = L"Sensor3";
			this->AgregarSenor3->MinimumWidth = 6;
			this->AgregarSenor3->Name = L"AgregarSenor3";
			this->AgregarSenor3->Width = 125;
			// 
			// RgistroCarrosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(876, 452);
			this->Controls->Add(this->dgvRegistros);
			this->Controls->Add(this->AgregarComponentes);
			this->Controls->Add(this->AgregarCarro);
			this->Controls->Add(this->label1);
			this->Name = L"RgistroCarrosForm";
			this->Text = L"RgistroCarrosForm";
			this->Load += gcnew System::EventHandler(this, &RgistroCarrosForm::RgistroCarrosForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRegistros))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		private: System::Void RgistroCarrosForm_Load(System::Object^ sender, System::EventArgs^ e) {
			dgvRegistros->Rows->Clear();
		}
		private: System::Void AgregarCarro_Click(System::Object^ sender, System::EventArgs^ e) {
			auto dlg = gcnew MantenimientoCarroForm(true);
			if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK){
				CarroMinero^ carro = dlg->SelectorCarro;
				dgvRegistros->Rows->Add(
					carro->Modelo,
					"", "", "", "", "");
			}
			delete dlg; // dlg es dialogo
		}
	private: System::Void AgregarComponentes_Click(System::Object^ sender, System::EventArgs^ e) {
			if (dgvRegistros->CurrentRow==nullptr) {
					MessageBox::Show("Por favor, seleccione un carro antes de agregar componentes.");
					return;
			}
			auto dlg = gcnew MantenimientoComponentesForm(true);
			if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				Componentes^ componente = dlg->SelectorComponente;
				auto row = dgvRegistros->CurrentRow;

				if (componente->GetType()== Servomotor::typeid) {
					// Si es un servomotor, agregarlo a la columna de actuadores
					row->Cells["AgregarActuador1"]->Value = "Servomotor";
				}
				else if(componente->GetType() == Motor::typeid) {
					row->Cells["AgregarActuador2"]->Value = "Motor";
				}
				else {
					//Para el sensor
					Sensor^ sensor = safe_cast<Sensor^>(componente); // Definir el identificador "sensor"  
					SensorTipo tipoSensor = static_cast<SensorTipo>(sensor->Tipo);
					switch (tipoSensor)
					{
					case SensorTipo::Humedad:
						row->Cells["AgregarSenor1"]->Value = "Sensor de Humedad";
						break;
					case SensorTipo::Combustion:
						row->Cells["AgregarSenor2"]->Value = "Sensor de Combustión";
						break;
					case SensorTipo::GasesContaminantes:
						row->Cells["AgregarSenor3"]->Value = "Sensor de Gases Contaminantes";
						break;
					}
				}
			}
			/*
			List<Componentes^>^ componentes = dlg->SelectorComponentes;
			if (dgvRegistros->SelectedRows->Count > 0) {
				int rowIndex = dgvRegistros->SelectedRows[0]->Index;
				for (int i = 0; i < componentes->Count; i++) {
					dgvRegistros->Rows[rowIndex]->Cells[i + 1]->Value = componentes[i]->Tipo;
				}
			}
			*/
		delete dlg;
	}
};
}
