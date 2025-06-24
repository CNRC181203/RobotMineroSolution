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
	using namespace RobotMineroController;


	/// <summary>
	/// Resumen de ManteniminetoAckermanForm
	/// </summary>
	public ref class ManteniminetoAckermanForm : public System::Windows::Forms::Form
	{
	public:
		ManteniminetoAckermanForm(void)
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
		~ManteniminetoAckermanForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbImage;
	protected:
	private: System::Windows::Forms::Button^ btnUpdateImage;
	private: System::Windows::Forms::DataGridView^ dgvActuadores;

	private: System::Windows::Forms::Button^ btmEliminarActuador;










	private: System::Windows::Forms::Button^ btmModificarActuador;

	private: System::Windows::Forms::Button^ btmAgregarActuador;

	private: System::Windows::Forms::TextBox^ txtActuadorEstado;


	private: System::Windows::Forms::TextBox^ txtActuadorCantidad;

	private: System::Windows::Forms::TextBox^ txtActuadorId;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtActuadorUbicacion;






	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RecursoId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AckerTipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AckerCantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AckerEstado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AckerUbicacion;
	private: System::Windows::Forms::ComboBox^ cmbTiposActuadores;


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
			this->dgvActuadores = (gcnew System::Windows::Forms::DataGridView());
			this->RecursoId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AckerTipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AckerCantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AckerEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AckerUbicacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btmEliminarActuador = (gcnew System::Windows::Forms::Button());
			this->btmModificarActuador = (gcnew System::Windows::Forms::Button());
			this->btmAgregarActuador = (gcnew System::Windows::Forms::Button());
			this->txtActuadorEstado = (gcnew System::Windows::Forms::TextBox());
			this->txtActuadorCantidad = (gcnew System::Windows::Forms::TextBox());
			this->txtActuadorId = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtActuadorUbicacion = (gcnew System::Windows::Forms::TextBox());
			this->cmbTiposActuadores = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvActuadores))->BeginInit();
			this->SuspendLayout();
			// 
			// pbImage
			// 
			this->pbImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbImage->Location = System::Drawing::Point(762, 65);
			this->pbImage->Margin = System::Windows::Forms::Padding(2);
			this->pbImage->Name = L"pbImage";
			this->pbImage->Size = System::Drawing::Size(127, 127);
			this->pbImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbImage->TabIndex = 87;
			this->pbImage->TabStop = false;
			// 
			// btnUpdateImage
			// 
			this->btnUpdateImage->Location = System::Drawing::Point(762, 25);
			this->btnUpdateImage->Margin = System::Windows::Forms::Padding(2);
			this->btnUpdateImage->Name = L"btnUpdateImage";
			this->btnUpdateImage->Size = System::Drawing::Size(110, 23);
			this->btnUpdateImage->TabIndex = 88;
			this->btnUpdateImage->Text = L"Actualizar imagen";
			this->btnUpdateImage->UseVisualStyleBackColor = true;
			this->btnUpdateImage->Click += gcnew System::EventHandler(this, &ManteniminetoAckermanForm::btnUpdateImage_Click);
			// 
			// dgvActuadores
			// 
			this->dgvActuadores->AllowUserToAddRows = false;
			this->dgvActuadores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvActuadores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->RecursoId,
					this->AckerTipo, this->AckerCantidad, this->AckerEstado, this->AckerUbicacion
			});
			this->dgvActuadores->Location = System::Drawing::Point(78, 244);
			this->dgvActuadores->Margin = System::Windows::Forms::Padding(2);
			this->dgvActuadores->Name = L"dgvActuadores";
			this->dgvActuadores->RowHeadersWidth = 51;
			this->dgvActuadores->RowTemplate->Height = 24;
			this->dgvActuadores->Size = System::Drawing::Size(580, 187);
			this->dgvActuadores->TabIndex = 80;
			// 
			// RecursoId
			// 
			this->RecursoId->HeaderText = L"ID";
			this->RecursoId->MinimumWidth = 6;
			this->RecursoId->Name = L"RecursoId";
			this->RecursoId->Width = 70;
			// 
			// AckerTipo
			// 
			this->AckerTipo->HeaderText = L"Tipo";
			this->AckerTipo->MinimumWidth = 6;
			this->AckerTipo->Name = L"AckerTipo";
			this->AckerTipo->Width = 125;
			// 
			// AckerCantidad
			// 
			this->AckerCantidad->HeaderText = L"Cantidad";
			this->AckerCantidad->MinimumWidth = 6;
			this->AckerCantidad->Name = L"AckerCantidad";
			this->AckerCantidad->Width = 125;
			// 
			// AckerEstado
			// 
			this->AckerEstado->HeaderText = L"Estado";
			this->AckerEstado->MinimumWidth = 6;
			this->AckerEstado->Name = L"AckerEstado";
			this->AckerEstado->Width = 75;
			// 
			// AckerUbicacion
			// 
			this->AckerUbicacion->HeaderText = L"Ubicacón";
			this->AckerUbicacion->MinimumWidth = 6;
			this->AckerUbicacion->Name = L"AckerUbicacion";
			this->AckerUbicacion->Width = 125;
			// 
			// btmEliminarActuador
			// 
			this->btmEliminarActuador->Location = System::Drawing::Point(614, 205);
			this->btmEliminarActuador->Margin = System::Windows::Forms::Padding(2);
			this->btmEliminarActuador->Name = L"btmEliminarActuador";
			this->btmEliminarActuador->Size = System::Drawing::Size(76, 25);
			this->btmEliminarActuador->TabIndex = 79;
			this->btmEliminarActuador->Text = L"Eliminar";
			this->btmEliminarActuador->UseVisualStyleBackColor = true;
			this->btmEliminarActuador->Click += gcnew System::EventHandler(this, &ManteniminetoAckermanForm::btmEliminarActuador_Click);
			// 
			// btmModificarActuador
			// 
			this->btmModificarActuador->Location = System::Drawing::Point(337, 205);
			this->btmModificarActuador->Margin = System::Windows::Forms::Padding(2);
			this->btmModificarActuador->Name = L"btmModificarActuador";
			this->btmModificarActuador->Size = System::Drawing::Size(71, 25);
			this->btmModificarActuador->TabIndex = 78;
			this->btmModificarActuador->Text = L"Modificar";
			this->btmModificarActuador->UseVisualStyleBackColor = true;
			this->btmModificarActuador->Click += gcnew System::EventHandler(this, &ManteniminetoAckermanForm::btmModificarActuador_Click);
			// 
			// btmAgregarActuador
			// 
			this->btmAgregarActuador->Location = System::Drawing::Point(55, 205);
			this->btmAgregarActuador->Margin = System::Windows::Forms::Padding(2);
			this->btmAgregarActuador->Name = L"btmAgregarActuador";
			this->btmAgregarActuador->Size = System::Drawing::Size(65, 25);
			this->btmAgregarActuador->TabIndex = 77;
			this->btmAgregarActuador->Text = L"Agregar";
			this->btmAgregarActuador->UseVisualStyleBackColor = true;
			this->btmAgregarActuador->Click += gcnew System::EventHandler(this, &ManteniminetoAckermanForm::btmAgregarRecurso_Click);
			// 
			// txtActuadorEstado
			// 
			this->txtActuadorEstado->Location = System::Drawing::Point(78, 108);
			this->txtActuadorEstado->Margin = System::Windows::Forms::Padding(2);
			this->txtActuadorEstado->Name = L"txtActuadorEstado";
			this->txtActuadorEstado->Size = System::Drawing::Size(86, 20);
			this->txtActuadorEstado->TabIndex = 75;
			// 
			// txtActuadorCantidad
			// 
			this->txtActuadorCantidad->Location = System::Drawing::Point(78, 74);
			this->txtActuadorCantidad->Margin = System::Windows::Forms::Padding(2);
			this->txtActuadorCantidad->Name = L"txtActuadorCantidad";
			this->txtActuadorCantidad->Size = System::Drawing::Size(62, 20);
			this->txtActuadorCantidad->TabIndex = 74;
			// 
			// txtActuadorId
			// 
			this->txtActuadorId->Location = System::Drawing::Point(78, 7);
			this->txtActuadorId->Margin = System::Windows::Forms::Padding(2);
			this->txtActuadorId->Name = L"txtActuadorId";
			this->txtActuadorId->Size = System::Drawing::Size(61, 20);
			this->txtActuadorId->TabIndex = 72;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 153);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 71;
			this->label5->Text = L"Ubicación:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 111);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 70;
			this->label4->Text = L"Estado:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 81);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 69;
			this->label3->Text = L"Cantidad:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 47);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 68;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 14);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 67;
			this->label1->Text = L"ID:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 45);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 89;
			this->label6->Text = L"Tipo:";
			// 
			// txtActuadorUbicacion
			// 
			this->txtActuadorUbicacion->Location = System::Drawing::Point(78, 150);
			this->txtActuadorUbicacion->Margin = System::Windows::Forms::Padding(2);
			this->txtActuadorUbicacion->Name = L"txtActuadorUbicacion";
			this->txtActuadorUbicacion->Size = System::Drawing::Size(86, 20);
			this->txtActuadorUbicacion->TabIndex = 91;
			// 
			// cmbTiposActuadores
			// 
			this->cmbTiposActuadores->FormattingEnabled = true;
			this->cmbTiposActuadores->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Servomotor", L"Sensor", L"Motor" });
			this->cmbTiposActuadores->Location = System::Drawing::Point(78, 39);
			this->cmbTiposActuadores->Name = L"cmbTiposActuadores";
			this->cmbTiposActuadores->Size = System::Drawing::Size(121, 21);
			this->cmbTiposActuadores->TabIndex = 92;
			// 
			// ManteniminetoAckermanForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 455);
			this->Controls->Add(this->cmbTiposActuadores);
			this->Controls->Add(this->txtActuadorUbicacion);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pbImage);
			this->Controls->Add(this->btnUpdateImage);
			this->Controls->Add(this->dgvActuadores);
			this->Controls->Add(this->btmEliminarActuador);
			this->Controls->Add(this->btmModificarActuador);
			this->Controls->Add(this->btmAgregarActuador);
			this->Controls->Add(this->txtActuadorEstado);
			this->Controls->Add(this->txtActuadorCantidad);
			this->Controls->Add(this->txtActuadorId);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ManteniminetoAckermanForm";
			this->Text = L"ManteniminetoAckermanForm";
			this->Load += gcnew System::EventHandler(this, &ManteniminetoAckermanForm::ManteniminetoAckermanForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvActuadores))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void ManteniminetoAckermanForm_Load(System::Object^ sender, System::EventArgs^ e) {
			ShowActuadores();
		}

		private: System::Void btmAgregarRecurso_Click(System::Object^ sender, System::EventArgs^ e) {

			try {
				int IdActuador = Int32::Parse(txtActuadorId->Text);
				if (IdActuador < 0) {
					MessageBox::Show("El ID debe ser mayor a 0");
					return;
				}
				if (Controller::DevolverActuadorPorID(IdActuador) != nullptr) {
					MessageBox::Show("El ID elegido ya existe");
					return;
				}

				int  cantidad = Int32::Parse(txtActuadorCantidad->Text);
				if (cantidad < 0) {
					MessageBox::Show("La cantidad no debe ser negativo ");
					return;
				}
				String^ estado = txtActuadorEstado->Text;
				if (String::IsNullOrEmpty(estado)) {
					MessageBox::Show("El estado no debe estar vacio");
					return;
				}
				String^ ubicacion = txtActuadorUbicacion->Text;
				if (String::IsNullOrEmpty(ubicacion)) {
					MessageBox::Show("La ubicación no debe estar vacía");
					return;
				}
				int selectedIndex = cmbTiposActuadores->SelectedIndex;
				if (selectedIndex < 0) {
					MessageBox::Show("Debe seleccionar un tipo de actuador");
					return;
				}
				Actuador^ actuadorNew;
				if (selectedIndex ==0) {
					actuadorNew = gcnew Servomotor();
					
				}
				else if (selectedIndex == 1) {
					actuadorNew = gcnew Sensor();
				}
				else if (selectedIndex == 2) {
					actuadorNew = gcnew Motor();
				}
				
				else {
					MessageBox::Show("Tipo de actuador no válido");
					return;
				}
				//Random^ rand = gcnew Random();
				//String^ Actuadores = Actuadores->Substring(0, Math::Min(3, Actuadores->Length)) + rand->Next(10, 100).ToString();
				//Actuador^ actuadorNew = gcnew Actuador();
				actuadorNew->Id = IdActuador;
				actuadorNew->Cantidad = cantidad;
				actuadorNew->Estado = estado;
				actuadorNew->Ubicacion = ubicacion;

				if (pbImage != nullptr && pbImage->Image != nullptr) {
					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
					pbImage->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					actuadorNew->Imagen = ms->ToArray();
				}
				Controller::AgregarActuador(actuadorNew);
				ShowActuadores();

			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al agregar el actuador: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
			   public:
			   void  ShowActuadores() {
				   List<Actuador^>^ actuadores = Controller::ConsultarTodosActuadores();
				   if (actuadores != nullptr) {
					   dgvActuadores->Rows->Clear();
					   for each (Actuador ^ actuador in actuadores) {
						   int rowIndex = dgvActuadores->Rows->Add();
						   DataGridViewRow^ row = dgvActuadores->Rows[rowIndex];
						   row->Cells["RecursoId"]->Value = actuador->Id;
						   row->Cells["AckerTipo"]->Value = actuador->GetType()->Name; // Tipo de Actuador
						   row->Cells["AckerCantidad"]->Value = actuador->Cantidad;
						   row->Cells["AckerEstado"]->Value = actuador->Estado;
						   row->Cells["AckerUbicacion"]->Value = actuador->Ubicacion;
					   }
				  }
			   }
			private: System::Void btmEliminarActuador_Click(System::Object^ sender, System::EventArgs^ e) {
				// 1) Comprobar que el usuario haya seleccionado realmente una celda
				if (dgvActuadores->SelectedCells->Count == 0) {
					MessageBox::Show("Por favor, selecciona la celda del ID del actuador que deseas eliminar.");
					return;
				}

				// 2) Obtener el índice de fila y la fila completa
				int rowIndex = dgvActuadores->SelectedCells[0]->RowIndex;
				DataGridViewRow^ selectedRow = dgvActuadores->Rows[rowIndex];

				// 3) Leer el ID desde la columna "RecursoId"
				if (selectedRow->Cells["RecursoId"]->Value == nullptr) {
					MessageBox::Show("No se pudo obtener el ID del actuador seleccionado.");
					return;
				}
				String^ idText = selectedRow->Cells["RecursoId"]->Value->ToString();
				int id = Convert::ToInt32(idText);

				// 4) Mostrar el diálogo de confirmación (con icono de pregunta)
				System::Windows::Forms::DialogResult dlgResult =
					MessageBox::Show(
						"¿Deseas eliminar el actuador con ID = " + idText + "?",
						"Confirmación",
						MessageBoxButtons::YesNo,
						MessageBoxIcon::Question
					);

				// 5) Si confirma, elimínalo, limpia la imagen y refresca la vista
				if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
					Controller::EliminarActuador(id);

					// Limpiar la PictureBox (si estaba mostrando la imagen de ese actuador)
					if (pbImage->Image != nullptr) {
						pbImage->Image = nullptr;
						pbImage->Invalidate();
					}

					// Refrescar el DataGridView con todos los actuadores
					ShowActuadores();

					// Limpiar los controles de entrada (ID, Cantidad, Estado, Ubicación, ComboBox)
					txtActuadorId->Clear();
					txtActuadorCantidad->Clear();
					txtActuadorEstado->Clear();
					txtActuadorUbicacion->Clear();
					cmbTiposActuadores->SelectedIndex = -1;

					MessageBox::Show(
						"Se ha eliminado el actuador con ID = " + idText + " de manera exitosa.",
						"Eliminación completada",
						MessageBoxButtons::OK,
						MessageBoxIcon::Information
					);
				}
			}
	private: System::Void btmModificarActuador_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int IdActuador = Int32::Parse(txtActuadorId->Text);
			if (IdActuador < 0) {
				MessageBox::Show("El ID debe ser mayor a 0");
				return;
			}
			Actuador^ actuadorExistente = Controller::DevolverActuadorPorID(IdActuador);
			if (actuadorExistente == nullptr) {
				MessageBox::Show("El ID elegido no existe");
				return;
			}
			int cantidad = Int32::Parse(txtActuadorCantidad->Text);
			if (cantidad < 0) {
				MessageBox::Show("La cantidad no debe ser negativa");
				return;
			}
			String^ estado = txtActuadorEstado->Text;
			if (String::IsNullOrEmpty(estado)) {
				MessageBox::Show("El estado no debe estar vacío");
				return;
			}
			String^ ubicacion = txtActuadorUbicacion->Text;
			if (String::IsNullOrEmpty(ubicacion)) {
				MessageBox::Show("La ubicación no debe estar vacía");
				return;
			}
			int selectedIndex = cmbTiposActuadores->SelectedIndex;
			if (selectedIndex < 0) {
				MessageBox::Show("Debe seleccionar un tipo de actuador");
				return;
			}
			actuadorExistente->Cantidad = cantidad;
			actuadorExistente->Estado = estado;
			actuadorExistente->Ubicacion = ubicacion;
			if (pbImage != nullptr && pbImage->Image != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbImage->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				actuadorExistente->Imagen = ms->ToArray();
			}
			Controller::ActualizarActuador(actuadorExistente);
			ShowActuadores();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al modificar el actuador: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		private: System::Void btnUpdateImage_Click(System::Object^ sender, System::EventArgs^ e) {
			OpenFileDialog^ ofd = gcnew OpenFileDialog();
			ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
			if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				pbImage->Image = gcnew Bitmap(ofd->FileName);
			}
		}
	};
}
