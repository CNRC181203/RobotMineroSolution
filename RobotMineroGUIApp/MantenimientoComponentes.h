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
	/// Resumen de MantenimientoActuadoresForm
	/// </summary>
	
	public enum class TipoComponente { ServoMotor, Motor, SensorHumedad, SensorCombustion, OtrosContaminantes};
	//public enum class SensorTipo { Humedad, Combustion, GasesContaminantes };
	public ref class MantenimientoComponentesForm : public System::Windows::Forms::Form
	{
	private:
		bool _SelectorMode;
		Componentes^ _selectedComponente;

	public:
		property Componentes^ SelectorComponente {
			Componentes^ get() { return _selectedComponente; }
		}
		MantenimientoComponentesForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		MantenimientoComponentesForm(bool selectionMode) : MantenimientoComponentesForm()
		{
			_SelectorMode = selectionMode;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MantenimientoComponentesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cmbTiposComponente;
	private: System::Windows::Forms::TextBox^ txtComponenteUbicacion;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dgvComponente;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RecursoId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AckerTipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AckerCantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AckerEstado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AckerUbicacion;
	private: System::Windows::Forms::Button^ btmEliminarComponente;

	private: System::Windows::Forms::Button^ btmModificarComponente;

	private: System::Windows::Forms::Button^ btmAgregarComponente;

	private: System::Windows::Forms::TextBox^ txtComponenteEstado;

	private: System::Windows::Forms::TextBox^ txtComponenteCantidad;

	private: System::Windows::Forms::TextBox^ txtComponenteId;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;



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
			this->cmbTiposComponente = (gcnew System::Windows::Forms::ComboBox());
			this->txtComponenteUbicacion = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dgvComponente = (gcnew System::Windows::Forms::DataGridView());
			this->RecursoId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AckerTipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AckerCantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AckerEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AckerUbicacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btmEliminarComponente = (gcnew System::Windows::Forms::Button());
			this->btmModificarComponente = (gcnew System::Windows::Forms::Button());
			this->btmAgregarComponente = (gcnew System::Windows::Forms::Button());
			this->txtComponenteEstado = (gcnew System::Windows::Forms::TextBox());
			this->txtComponenteCantidad = (gcnew System::Windows::Forms::TextBox());
			this->txtComponenteId = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvComponente))->BeginInit();
			this->SuspendLayout();
			// 
			// cmbTiposComponente
			// 
			this->cmbTiposComponente->FormattingEnabled = true;
			this->cmbTiposComponente->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Servomotor", L"Motor", L"Sensor de Humedad",
					L"Sensor de Combustión", L"Otros contaminantes"
			});
			this->cmbTiposComponente->Location = System::Drawing::Point(166, 69);
			this->cmbTiposComponente->Margin = System::Windows::Forms::Padding(4);
			this->cmbTiposComponente->Name = L"cmbTiposComponente";
			this->cmbTiposComponente->Size = System::Drawing::Size(160, 24);
			this->cmbTiposComponente->TabIndex = 107;
			// 
			// txtComponenteUbicacion
			// 
			this->txtComponenteUbicacion->Location = System::Drawing::Point(119, 201);
			this->txtComponenteUbicacion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtComponenteUbicacion->Name = L"txtComponenteUbicacion";
			this->txtComponenteUbicacion->Size = System::Drawing::Size(113, 22);
			this->txtComponenteUbicacion->TabIndex = 106;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(35, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 16);
			this->label6->TabIndex = 105;
			this->label6->Text = L"Tipo de Actuador:";
			// 
			// dgvComponente
			// 
			this->dgvComponente->AllowUserToAddRows = false;
			this->dgvComponente->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvComponente->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->RecursoId,
					this->AckerTipo, this->AckerCantidad, this->AckerEstado, this->AckerUbicacion
			});
			this->dgvComponente->Location = System::Drawing::Point(28, 320);
			this->dgvComponente->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvComponente->Name = L"dgvComponente";
			this->dgvComponente->RowHeadersWidth = 51;
			this->dgvComponente->RowTemplate->Height = 24;
			this->dgvComponente->Size = System::Drawing::Size(773, 230);
			this->dgvComponente->TabIndex = 104;
			this->dgvComponente->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantenimientoComponentesForm::dgvComponente_CellClick);
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
			// btmEliminarComponente
			// 
			this->btmEliminarComponente->Location = System::Drawing::Point(537, 272);
			this->btmEliminarComponente->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btmEliminarComponente->Name = L"btmEliminarComponente";
			this->btmEliminarComponente->Size = System::Drawing::Size(101, 31);
			this->btmEliminarComponente->TabIndex = 103;
			this->btmEliminarComponente->Text = L"Eliminar";
			this->btmEliminarComponente->UseVisualStyleBackColor = true;
			this->btmEliminarComponente->Click += gcnew System::EventHandler(this, &MantenimientoComponentesForm::btmEliminarComponente_Click);
			// 
			// btmModificarComponente
			// 
			this->btmModificarComponente->Location = System::Drawing::Point(276, 272);
			this->btmModificarComponente->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btmModificarComponente->Name = L"btmModificarComponente";
			this->btmModificarComponente->Size = System::Drawing::Size(95, 31);
			this->btmModificarComponente->TabIndex = 102;
			this->btmModificarComponente->Text = L"Modificar";
			this->btmModificarComponente->UseVisualStyleBackColor = true;
			this->btmModificarComponente->Click += gcnew System::EventHandler(this, &MantenimientoComponentesForm::btmModificarComponente_Click);
			// 
			// btmAgregarComponente
			// 
			this->btmAgregarComponente->Location = System::Drawing::Point(28, 272);
			this->btmAgregarComponente->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btmAgregarComponente->Name = L"btmAgregarComponente";
			this->btmAgregarComponente->Size = System::Drawing::Size(87, 31);
			this->btmAgregarComponente->TabIndex = 101;
			this->btmAgregarComponente->Text = L"Agregar";
			this->btmAgregarComponente->UseVisualStyleBackColor = true;
			this->btmAgregarComponente->Click += gcnew System::EventHandler(this, &MantenimientoComponentesForm::btmAgregarComponente_Click);
			// 
			// txtComponenteEstado
			// 
			this->txtComponenteEstado->Location = System::Drawing::Point(119, 161);
			this->txtComponenteEstado->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtComponenteEstado->Name = L"txtComponenteEstado";
			this->txtComponenteEstado->Size = System::Drawing::Size(113, 22);
			this->txtComponenteEstado->TabIndex = 100;
			// 
			// txtComponenteCantidad
			// 
			this->txtComponenteCantidad->Location = System::Drawing::Point(119, 118);
			this->txtComponenteCantidad->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtComponenteCantidad->Name = L"txtComponenteCantidad";
			this->txtComponenteCantidad->Size = System::Drawing::Size(81, 22);
			this->txtComponenteCantidad->TabIndex = 99;
			// 
			// txtComponenteId
			// 
			this->txtComponenteId->Location = System::Drawing::Point(119, 28);
			this->txtComponenteId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtComponenteId->Name = L"txtComponenteId";
			this->txtComponenteId->Size = System::Drawing::Size(80, 22);
			this->txtComponenteId->TabIndex = 98;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(36, 204);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 16);
			this->label5->TabIndex = 97;
			this->label5->Text = L"Ubicación:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 16);
			this->label4->TabIndex = 96;
			this->label4->Text = L"Estado:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 95;
			this->label3->Text = L"Cantidad:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 94;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 16);
			this->label1->TabIndex = 93;
			this->label1->Text = L"ID:";
			// 
			// MantenimientoComponentesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(906, 561);
			this->Controls->Add(this->cmbTiposComponente);
			this->Controls->Add(this->txtComponenteUbicacion);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dgvComponente);
			this->Controls->Add(this->btmEliminarComponente);
			this->Controls->Add(this->btmModificarComponente);
			this->Controls->Add(this->btmAgregarComponente);
			this->Controls->Add(this->txtComponenteEstado);
			this->Controls->Add(this->txtComponenteCantidad);
			this->Controls->Add(this->txtComponenteId);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MantenimientoComponentesForm";
			this->Text = L"MantenimientoComponentes";
			this->Load += gcnew System::EventHandler(this, &MantenimientoComponentesForm::MantenimientoComponentes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvComponente))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void MantenimientoComponentes_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowComponentes();
		} 
	private: System::Void btmAgregarComponente_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int Id = Int32::Parse(txtComponenteId->Text);
			if (Id < 0) {
				MessageBox::Show("El ID debe ser mayor a 0");
				return;
			}
			if (Controller::DevolverComponentePorID(Id) != nullptr) {
				MessageBox::Show("El ID elegido ya existe");
				return;
			}
			int cantidad = Int32::Parse(txtComponenteCantidad->Text);
			if (cantidad <= 0) {
				MessageBox::Show("La cantidad debe ser mayor o igual 0");
				return;
			}
			int selectedIndex = cmbTiposComponente->SelectedIndex; // para selecionar el tipo de actuador del comboBox
			if (selectedIndex < 0) {
				MessageBox::Show("Debe seleccionar un tipo de actuador");
				return;
			}
			TipoComponente estadoType = static_cast<TipoComponente>(selectedIndex);
			Componentes^ componenteNew;
			switch (estadoType)
			{
			case TipoComponente::ServoMotor: // Cuido para que lo reconosca de estar en el enum, comboBox y la herencia 
				componenteNew = gcnew Servomotor();
				break;
			case TipoComponente::Motor:
				componenteNew = gcnew Motor();
				break;
			case TipoComponente::SensorHumedad:
				componenteNew = gcnew Sensor();
				//safe_cast<Sensor^>(componenteNew)->Tipo = SensorTipo::Humedad;
				safe_cast<Sensor^>(componenteNew)->Tipo = static_cast<RobotMineroModel::SensorTipo>(SensorTipo::Humedad);
				break;
			case TipoComponente::SensorCombustion:
				componenteNew = gcnew Sensor();
				//safe_cast<Sensor^>(componenteNew)->Tipo = SensorTipo::Combustion;
				safe_cast<Sensor^>(componenteNew)->Tipo = static_cast<RobotMineroModel::SensorTipo>(SensorTipo::Combustion);
				break;
			case TipoComponente::OtrosContaminantes:
				componenteNew = gcnew Sensor();
				//safe_cast<Sensor^>(componenteNew)->Tipo = SensorTipo::GasesContaminantes;
				safe_cast<Sensor^>(componenteNew)->Tipo = static_cast<RobotMineroModel::SensorTipo>(SensorTipo::GasesContaminantes);
				//componenteNew = gcnew OtrosContaminantes();
				break;
			}
			componenteNew->Id = Id;
			componenteNew->Cantidad = cantidad;
			componenteNew->Estado = txtComponenteEstado->Text;
			componenteNew->Ubicacion = txtComponenteUbicacion->Text;

			if (componenteNew->Ubicacion->Length == 0) {
				MessageBox::Show("La ubicación no debe estar vacía");
				return;
			}
			String^ estado = txtComponenteEstado->Text;
			if (estado->Length == 0) {
				MessageBox::Show("El estado no debe estar vacío");
				return;
			}
			String^ ubicacion = txtComponenteUbicacion->Text;
			if (ubicacion->Length == 0) {
				MessageBox::Show("La ubicación no debe estar vacía");
				return;
			}
			// Asignar el componente seleccionado
			_selectedComponente = componenteNew; // Selector asignado

			Controller::AgregarComponete(componenteNew);
			ShowComponentes();
			MessageBox::Show(
				"componente agregado con éxito.",
				"Éxito",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information
			);
		}
		catch (Exception^ ex) {
			throw ex;
			MessageBox::Show("Error al agregar el componente: " + ex->Message);
		}
	}
		   public:
			   void ShowComponentes() {
				   try {
					   List<Componentes^>^ componentes = Controller::ConsultarTodosComponentes();
					   // Limpiar el DataGridView antes de agregar nuevos datos
					   if (componentes != nullptr) {
						   dgvComponente->Rows->Clear();
						   // Agregar los datos al DataGridView
						   for (int i = 0; i < componentes->Count; i++) {
							   String^ componente;
							   if(componentes[i]->GetType() == Servomotor::typeid)
								   componente = "Servomotor";
							   else if(componentes[i]->GetType() == Motor::typeid)
								   componente = "Motor";
							   else if (componentes[i]->GetType() == Sensor::typeid) {
								   Sensor^ sensor = safe_cast<Sensor^>(componentes[i]);
								   SensorTipo sensorTipo = *sensor->Tipo;
								   switch (sensorTipo) {
								   case SensorTipo::Humedad:
									   componente = "Sensor de Humedad";
									   break;
								   case SensorTipo::Combustion:
									   componente = "Sensor de Combustión";
									   break;
								   case SensorTipo::GasesContaminantes:
									   componente = "Sensor de Gases Contaminantes";
									   break;
								   }
							   }
							   else {
								   componente = "Otro Componente";
							   }
							   // Agregar una fila al DataGridView con los datos del actuador
							   dgvComponente->Rows->Add(gcnew array<String^> {
								   // importa el orden ya que en ese orden se llenara la tabla 
								   "" + componentes[i]->Id,
									   componente,
								  "" + componentes[i]->Cantidad,
									   componentes[i]->Estado,
									   componentes[i]->Ubicacion});
						   }
					   } 
				   }
				   catch (Exception^ ex) {
					   MessageBox::Show("Error al mostrar los actuadores: " + ex->Message);
				   }
			   }
		private: System::Void btmModificarComponente_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				int Id = Int32::Parse(txtComponenteId->Text);
				if (Id < 0) {
					MessageBox::Show("El ID debe ser mayor a 0");
					return;
				}
				Componentes^ componenteExistente = Controller::DevolverComponentePorID(Id);
				if (componenteExistente == nullptr) {
					MessageBox::Show("El ID elegido no existe");
					return;
				}
				int cantidad = Int32::Parse(txtComponenteCantidad->Text);
				if (cantidad <= 0) {
					MessageBox::Show("La cantidad debe ser mayor o igual 0");
					return;
				}
				int selectedIndex = cmbTiposComponente->SelectedIndex; // para selecionar el tipo de actuador del comboBox
				if (selectedIndex < 0) {
					MessageBox::Show("Debe seleccionar un tipo de actuador");
					return;
				}
				TipoComponente estadoType = static_cast<TipoComponente>(selectedIndex);
				Componentes^ componenteNew;
				switch (estadoType)
				{
				case TipoComponente::ServoMotor:
					componenteNew = gcnew Servomotor();
					break;
				case TipoComponente::Motor:
					componenteNew = gcnew Motor();
					break;
				case TipoComponente::SensorHumedad:
					componenteNew = gcnew Sensor();
					//safe_cast<Sensor^>(componenteNew)->Tipo = SensorTipo::Humedad;
					safe_cast<Sensor^>(componenteNew)->Tipo = static_cast<RobotMineroModel::SensorTipo>(SensorTipo::Humedad);
					break;
				case TipoComponente::SensorCombustion:
					componenteNew = gcnew Sensor();
					//safe_cast<Sensor^>(componenteNew)->Tipo = SensorTipo::Combustion;
					safe_cast<Sensor^>(componenteNew)->Tipo = static_cast<RobotMineroModel::SensorTipo>(SensorTipo::Combustion);
					break;
				case TipoComponente::OtrosContaminantes:
					componenteNew = gcnew Sensor();
					//safe_cast<Sensor^>(componenteNew)->Tipo = SensorTipo::GasesContaminantes;
					safe_cast<Sensor^>(componenteNew)->Tipo = static_cast<RobotMineroModel::SensorTipo>(SensorTipo::GasesContaminantes);
					//componenteNew = gcnew OtrosContaminantes();
					break;

				}
				componenteNew->Id = Id;
				componenteNew->Cantidad = cantidad;
				componenteNew->Estado = txtComponenteEstado->Text;
				componenteNew->Ubicacion = txtComponenteUbicacion->Text;
				if (componenteNew->Ubicacion->Length == 0) {
					MessageBox::Show("La ubicación no debe estar vacía");
					return;
				}
				String^ estado = txtComponenteEstado->Text;
				if (estado->Length == 0) {
					MessageBox::Show("El estado no debe estar vacío");
					return;
				}
				String^ ubicacion = txtComponenteUbicacion->Text;
				if (ubicacion->Length == 0) {
					MessageBox::Show("La ubicación no debe estar vacía");
					return;
				}
				Controller::ActualizarComponete(componenteNew);
				ShowComponentes();
				MessageBox::Show(
					"Componente modificado con éxito.",
					"Éxito",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information
				);
			}
			catch (Exception^ ex) {
				throw ex;
			}
		}
	/*private: System::Void dgvActuadores_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try {
			if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
				int actuadorId = Convert::ToInt32(dgvActuadores->Rows[e->RowIndex]->Cells[0]->Value->ToString());
				Actuador^ actuador = Controller::DevolverActuadorPorID(actuadorId);
				if (actuador != nullptr) {
					txtActuadorId->Text = "" + actuador->Id;
					txtActuadorCantidad->Text = "" + actuador->Cantidad;
					txtActuadorEstado->Text = actuador->Estado;
					txtActuadorUbicacion->Text = actuador->Ubicacion;
					cmbTiposActuadores->SelectedIndex = static_cast<int>(actuador->Tipo);
				}
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al seleccionar el actuador: " + ex->Message);
		}
	}*/
		private: System::Void dgvComponente_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
				int componenteId = Convert::ToInt32(dgvComponente->Rows[e->RowIndex]->Cells[0]->Value->ToString());
				Componentes^ componente = Controller::DevolverComponentePorID(componenteId);
				if (componente != nullptr) {
					txtComponenteId->Text = "" + componente->Id;
					txtComponenteCantidad->Text = "" + componente->Cantidad;
					txtComponenteEstado->Text = componente->Estado;
					txtComponenteUbicacion->Text = componente->Ubicacion;
					cmbTiposComponente->SelectedIndex = static_cast<int>(componente->Tipo);
				}
				if (_SelectorMode) {
					_selectedComponente = componente;
					this->DialogResult = System::Windows::Forms::DialogResult::OK;
					this->Close();
				}
			}
		}
	private: System::Void btmEliminarComponente_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int Id = Int32::Parse(txtComponenteId->Text);
			if (Id < 0) {
				MessageBox::Show("El ID debe ser mayor a 0");
				return;
			}
			Componentes^ componenteExistente = Controller::DevolverComponentePorID(Id);
			if (componenteExistente == nullptr) {
				MessageBox::Show("El ID elegido no existe");
				return;
			}
			Controller::EliminarComponete(Id);
			ShowComponentes();
			MessageBox::Show(
				"Componente eliminado con éxito.",
				"Éxito",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information
			);
		}
		catch (Exception^ ex) {
			throw ex;
		}
	}
};
}
