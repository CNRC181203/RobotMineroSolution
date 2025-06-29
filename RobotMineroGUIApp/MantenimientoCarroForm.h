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
	/// Resumen de MantenimientoCarroForm
	/// </summary>
	public ref class MantenimientoCarroForm : public System::Windows::Forms::Form
	{
	private:
		bool _SelectorMode;
		CarroMinero^ _selectedCarro;
	public:

		property CarroMinero^ SelectorCarro {
			CarroMinero^ get() { return _selectedCarro; }
		}
		MantenimientoCarroForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		MantenimientoCarroForm(bool selectionMode): MantenimientoCarroForm()
		{
			_SelectorMode = selectionMode;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MantenimientoCarroForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::PictureBox^ pbImage;
	private: System::Windows::Forms::Button^ btnUpdateImage;
	private: System::Windows::Forms::Button^ btmEliminarCarro;

	private: System::Windows::Forms::Button^ btmModificarCarro;

	private: System::Windows::Forms::Button^ btmAgregarCarro;

	private: System::Windows::Forms::TextBox^ txtCarroBateria;


	private: System::Windows::Forms::TextBox^ txtCarroNumeroSerie;

	private: System::Windows::Forms::TextBox^ txtCarroModelo;

	private: System::Windows::Forms::TextBox^ txtCarroId;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textCarroUbicacion;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CarroId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CarroModelo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CarroNumeroSerie;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CarroBateria;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CarroUbicacion;


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
			this->pbImage = (gcnew System::Windows::Forms::PictureBox());
			this->btnUpdateImage = (gcnew System::Windows::Forms::Button());
			this->btmEliminarCarro = (gcnew System::Windows::Forms::Button());
			this->btmModificarCarro = (gcnew System::Windows::Forms::Button());
			this->btmAgregarCarro = (gcnew System::Windows::Forms::Button());
			this->txtCarroBateria = (gcnew System::Windows::Forms::TextBox());
			this->txtCarroNumeroSerie = (gcnew System::Windows::Forms::TextBox());
			this->txtCarroModelo = (gcnew System::Windows::Forms::TextBox());
			this->txtCarroId = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textCarroUbicacion = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->CarroId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CarroModelo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CarroNumeroSerie = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CarroBateria = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CarroUbicacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pbImage
			// 
			this->pbImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbImage->Location = System::Drawing::Point(563, 18);
			this->pbImage->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbImage->Name = L"pbImage";
			this->pbImage->Size = System::Drawing::Size(160, 139);
			this->pbImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbImage->TabIndex = 86;
			this->pbImage->TabStop = false;
			// 
			// btnUpdateImage
			// 
			this->btnUpdateImage->Location = System::Drawing::Point(563, 176);
			this->btnUpdateImage->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateImage->Name = L"btnUpdateImage";
			this->btnUpdateImage->Size = System::Drawing::Size(147, 28);
			this->btnUpdateImage->TabIndex = 87;
			this->btnUpdateImage->Text = L"Actualizar imagen";
			this->btnUpdateImage->UseVisualStyleBackColor = true;
			// 
			// btmEliminarCarro
			// 
			this->btmEliminarCarro->Location = System::Drawing::Point(375, 232);
			this->btmEliminarCarro->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btmEliminarCarro->Name = L"btmEliminarCarro";
			this->btmEliminarCarro->Size = System::Drawing::Size(101, 31);
			this->btmEliminarCarro->TabIndex = 79;
			this->btmEliminarCarro->Text = L"Eliminar";
			this->btmEliminarCarro->UseVisualStyleBackColor = true;
			this->btmEliminarCarro->Click += gcnew System::EventHandler(this, &MantenimientoCarroForm::btmEliminarCarro_Click);
			// 
			// btmModificarCarro
			// 
			this->btmModificarCarro->Location = System::Drawing::Point(225, 232);
			this->btmModificarCarro->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btmModificarCarro->Name = L"btmModificarCarro";
			this->btmModificarCarro->Size = System::Drawing::Size(95, 31);
			this->btmModificarCarro->TabIndex = 78;
			this->btmModificarCarro->Text = L"Modificar";
			this->btmModificarCarro->UseVisualStyleBackColor = true;
			this->btmModificarCarro->Click += gcnew System::EventHandler(this, &MantenimientoCarroForm::btmModificarCarro_Click);
			// 
			// btmAgregarCarro
			// 
			this->btmAgregarCarro->Location = System::Drawing::Point(82, 232);
			this->btmAgregarCarro->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btmAgregarCarro->Name = L"btmAgregarCarro";
			this->btmAgregarCarro->Size = System::Drawing::Size(87, 31);
			this->btmAgregarCarro->TabIndex = 77;
			this->btmAgregarCarro->Text = L"Agregar";
			this->btmAgregarCarro->UseVisualStyleBackColor = true;
			this->btmAgregarCarro->Click += gcnew System::EventHandler(this, &MantenimientoCarroForm::btmAgregarCarro_Click);
			// 
			// txtCarroBateria
			// 
			this->txtCarroBateria->Location = System::Drawing::Point(91, 139);
			this->txtCarroBateria->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCarroBateria->Name = L"txtCarroBateria";
			this->txtCarroBateria->Size = System::Drawing::Size(81, 22);
			this->txtCarroBateria->TabIndex = 75;
			// 
			// txtCarroNumeroSerie
			// 
			this->txtCarroNumeroSerie->Location = System::Drawing::Point(146, 97);
			this->txtCarroNumeroSerie->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCarroNumeroSerie->Name = L"txtCarroNumeroSerie";
			this->txtCarroNumeroSerie->Size = System::Drawing::Size(151, 22);
			this->txtCarroNumeroSerie->TabIndex = 74;
			// 
			// txtCarroModelo
			// 
			this->txtCarroModelo->Location = System::Drawing::Point(91, 58);
			this->txtCarroModelo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCarroModelo->Name = L"txtCarroModelo";
			this->txtCarroModelo->Size = System::Drawing::Size(131, 22);
			this->txtCarroModelo->TabIndex = 73;
			// 
			// txtCarroId
			// 
			this->txtCarroId->Location = System::Drawing::Point(91, 18);
			this->txtCarroId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCarroId->Name = L"txtCarroId";
			this->txtCarroId->Size = System::Drawing::Size(80, 22);
			this->txtCarroId->TabIndex = 72;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 16);
			this->label5->TabIndex = 71;
			this->label5->Text = L"Ubicación:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 16);
			this->label4->TabIndex = 70;
			this->label4->Text = L"Bateía:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 16);
			this->label3->TabIndex = 69;
			this->label3->Text = L"Número de Serie:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 68;
			this->label2->Text = L"Modelo:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 16);
			this->label1->TabIndex = 67;
			this->label1->Text = L"ID:";
			// 
			// textCarroUbicacion
			// 
			this->textCarroUbicacion->Location = System::Drawing::Point(114, 191);
			this->textCarroUbicacion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textCarroUbicacion->Name = L"textCarroUbicacion";
			this->textCarroUbicacion->Size = System::Drawing::Size(192, 22);
			this->textCarroUbicacion->TabIndex = 88;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->CarroId,
					this->CarroModelo, this->CarroNumeroSerie, this->CarroBateria, this->CarroUbicacion
			});
			this->dataGridView1->Location = System::Drawing::Point(42, 313);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(681, 150);
			this->dataGridView1->TabIndex = 89;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantenimientoCarroForm::dataGridView1_CellClick);
			// 
			// CarroId
			// 
			this->CarroId->HeaderText = L"ID";
			this->CarroId->MinimumWidth = 6;
			this->CarroId->Name = L"CarroId";
			this->CarroId->Width = 125;
			// 
			// CarroModelo
			// 
			this->CarroModelo->HeaderText = L"Modelo";
			this->CarroModelo->MinimumWidth = 6;
			this->CarroModelo->Name = L"CarroModelo";
			this->CarroModelo->Width = 125;
			// 
			// CarroNumeroSerie
			// 
			this->CarroNumeroSerie->HeaderText = L"Número de Serie";
			this->CarroNumeroSerie->MinimumWidth = 6;
			this->CarroNumeroSerie->Name = L"CarroNumeroSerie";
			this->CarroNumeroSerie->Width = 125;
			// 
			// CarroBateria
			// 
			this->CarroBateria->HeaderText = L"Batería";
			this->CarroBateria->MinimumWidth = 6;
			this->CarroBateria->Name = L"CarroBateria";
			this->CarroBateria->Width = 125;
			// 
			// CarroUbicacion
			// 
			this->CarroUbicacion->HeaderText = L"Ubicación";
			this->CarroUbicacion->MinimumWidth = 6;
			this->CarroUbicacion->Name = L"CarroUbicacion";
			this->CarroUbicacion->Width = 125;
			// 
			// MantenimientoCarroForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(821, 487);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textCarroUbicacion);
			this->Controls->Add(this->pbImage);
			this->Controls->Add(this->btnUpdateImage);
			this->Controls->Add(this->btmEliminarCarro);
			this->Controls->Add(this->btmModificarCarro);
			this->Controls->Add(this->btmAgregarCarro);
			this->Controls->Add(this->txtCarroBateria);
			this->Controls->Add(this->txtCarroNumeroSerie);
			this->Controls->Add(this->txtCarroModelo);
			this->Controls->Add(this->txtCarroId);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MantenimientoCarroForm";
			this->Text = L"MantenimientoCarroForm";
			this->Load += gcnew System::EventHandler(this, &MantenimientoCarroForm::MantenimientoCarroForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void MantenimientoCarroForm_Load(System::Object^ sender, System::EventArgs^ e) {
			ShowCarros();
		}
		private: System::Void btmAgregarCarro_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				int id = Int32::Parse(txtCarroId->Text);
				if (id < 0) {
					MessageBox::Show("El ID debe ser mayor a 0");
					return;
				}
				if (Controller::DevolverCarroMineroPorID(id) != nullptr) {
					MessageBox::Show("El ID elegido ya existe");
					return;
				}
				String^ modelo = txtCarroModelo->Text;
				if (String::IsNullOrWhiteSpace(modelo)) {
					MessageBox::Show("El modelo no puede estar vacío");
					return;
				}
				String^ numeroSerie = txtCarroNumeroSerie->Text;
				if (String::IsNullOrWhiteSpace(numeroSerie)) {
					MessageBox::Show("El número de serie no puede estar vacío");
					return;
				}
				int bateria = Int32::Parse(txtCarroBateria->Text);
				if (bateria < 0) {
					MessageBox::Show("La batería debe ser un número positivo");
					return;
				}
				String^ ubicacion = textCarroUbicacion->Text;
				if (String::IsNullOrWhiteSpace(ubicacion)) {
					MessageBox::Show("La ubicación no puede estar vacía");
					return;
				}
				CarroMinero^ carro = gcnew CarroMinero();
				carro->Id = id;
				carro->Modelo = modelo;
				carro->NumeroSerie = numeroSerie;
				carro->Bateria = bateria;
				carro->Ubicacion = ubicacion;
				
				Controller::AgregarCarroMinero(carro);
				ShowCarros();
				MessageBox::Show("Carro minero agregado con éxito.", "Éxito", 
				MessageBoxButtons::OK, MessageBoxIcon::Information);
				// Asigna el carro seleccionado
				
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al agregar el carro: " + ex->Message);
			}
			
		}
			   public:
				   void ShowCarros() {
					   List<CarroMinero^>^ carros = Controller::ConsultarTodosCarrosMinero();
					   if (carros != nullptr) {
						   dataGridView1->Rows->Clear();
						   for (int i = 0; i < carros->Count; i++) {
							   dataGridView1->Rows->Add(gcnew array<String^>{
								   "" + carros[i]->Id,
									   carros[i]->Modelo,
									   carros[i]->NumeroSerie,
									   "" + carros[i]->Bateria,
									   carros[i]->Ubicacion
							   });
						   }
					   }
				   }
	private: System::Void btmModificarCarro_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int id = Int32::Parse(txtCarroId->Text);
			if (id < 0) {
				MessageBox::Show("El ID debe ser mayor a 0");
				return;
			}
			CarroMinero^ carroExistente = Controller::DevolverCarroMineroPorID(id);
			if (carroExistente == nullptr) {
				MessageBox::Show("El ID elegido no existe");
				return;
			}
			String^ modelo = txtCarroModelo->Text;
			if (String::IsNullOrWhiteSpace(modelo)) {
				MessageBox::Show("El modelo no puede estar vacío");
				return;
			}
			String^ numeroSerie = txtCarroNumeroSerie->Text;
			if (String::IsNullOrWhiteSpace(numeroSerie)) {
				MessageBox::Show("El número de serie no puede estar vacío");
				return;
			}
			int bateria = Int32::Parse(txtCarroBateria->Text);
			if (bateria < 0) {
				MessageBox::Show("La batería debe ser un número positivo");
				return;
			}
			String^ ubicacion = textCarroUbicacion->Text;
			if (String::IsNullOrWhiteSpace(ubicacion)) {
				MessageBox::Show("La ubicación no puede estar vacía");
				return;
			}

			carroExistente->Modelo = modelo;
			carroExistente->NumeroSerie = numeroSerie;
			carroExistente->Bateria = bateria;
			carroExistente->Ubicacion = ubicacion;
			Controller::ActualizarCarroMinero(carroExistente);
			ShowCarros();
			MessageBox::Show("Carro minero modificado con éxito.", "Éxito",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al modificar el carro: " + ex->Message);
		}
	}
private: System::Void btmEliminarCarro_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int Id = Int32::Parse(txtCarroId->Text);
		if (Id < 0) {
			MessageBox::Show("El ID debe ser mayor a 0");
			return;
		}
		CarroMinero^ carroExistente = Controller::DevolverCarroMineroPorID(Id);
		if (carroExistente == nullptr) {
			MessageBox::Show("El ID elegido no existe");
			return;
		}
		Controller::EliminarCarroMinero(Id);
		ShowCarros();
		MessageBox::Show(
			"Carro eliminado con éxito.",
			"Éxito",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information
		);
	}
	catch (Exception^ ex) {
		throw ex;
	}
}
		private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
				int carroId = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString());
				CarroMinero^ carro = Controller::DevolverCarroMineroPorID(carroId);
				if (carro != nullptr) {
					txtCarroId->Text = "" + carro->Id;
					txtCarroModelo->Text = carro->Modelo;
					txtCarroNumeroSerie->Text = carro->NumeroSerie;
					txtCarroBateria->Text = "" + carro->Bateria;
					textCarroUbicacion->Text = carro->Ubicacion;
				}
				if (_SelectorMode) {
					_selectedCarro = carro;
					this->DialogResult = System::Windows::Forms::DialogResult::OK;
					this->Close();
				}
			}
		}
	};
}
