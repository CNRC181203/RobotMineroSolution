#pragma once

namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MantenimientoActuadoresForm
	/// </summary>
	public ref class MantenimientoActuadoresForm : public System::Windows::Forms::Form
	{
	public:
		MantenimientoActuadoresForm(void)
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
		~MantenimientoActuadoresForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cmbTiposActuadores;
	protected:
	private: System::Windows::Forms::TextBox^ txtActuadorUbicacion;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dgvActuadores;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RecursoId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AckerTipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AckerCantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AckerEstado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AckerUbicacion;
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
			this->cmbTiposActuadores = (gcnew System::Windows::Forms::ComboBox());
			this->txtActuadorUbicacion = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvActuadores))->BeginInit();
			this->SuspendLayout();
			// 
			// cmbTiposActuadores
			// 
			this->cmbTiposActuadores->FormattingEnabled = true;
			this->cmbTiposActuadores->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Servomotor", L"Sensor", L"Motor" });
			this->cmbTiposActuadores->Location = System::Drawing::Point(118, 69);
			this->cmbTiposActuadores->Margin = System::Windows::Forms::Padding(4);
			this->cmbTiposActuadores->Name = L"cmbTiposActuadores";
			this->cmbTiposActuadores->Size = System::Drawing::Size(160, 24);
			this->cmbTiposActuadores->TabIndex = 107;
			// 
			// txtActuadorUbicacion
			// 
			this->txtActuadorUbicacion->Location = System::Drawing::Point(118, 194);
			this->txtActuadorUbicacion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtActuadorUbicacion->Name = L"txtActuadorUbicacion";
			this->txtActuadorUbicacion->Size = System::Drawing::Size(113, 22);
			this->txtActuadorUbicacion->TabIndex = 106;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(35, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 16);
			this->label6->TabIndex = 105;
			this->label6->Text = L"Tipo:";
			// 
			// dgvActuadores
			// 
			this->dgvActuadores->AllowUserToAddRows = false;
			this->dgvActuadores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvActuadores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->RecursoId,
					this->AckerTipo, this->AckerCantidad, this->AckerEstado, this->AckerUbicacion
			});
			this->dgvActuadores->Location = System::Drawing::Point(109, 311);
			this->dgvActuadores->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvActuadores->Name = L"dgvActuadores";
			this->dgvActuadores->RowHeadersWidth = 51;
			this->dgvActuadores->RowTemplate->Height = 24;
			this->dgvActuadores->Size = System::Drawing::Size(773, 230);
			this->dgvActuadores->TabIndex = 104;
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
			this->btmEliminarActuador->Location = System::Drawing::Point(618, 263);
			this->btmEliminarActuador->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btmEliminarActuador->Name = L"btmEliminarActuador";
			this->btmEliminarActuador->Size = System::Drawing::Size(101, 31);
			this->btmEliminarActuador->TabIndex = 103;
			this->btmEliminarActuador->Text = L"Eliminar";
			this->btmEliminarActuador->UseVisualStyleBackColor = true;
			// 
			// btmModificarActuador
			// 
			this->btmModificarActuador->Location = System::Drawing::Point(357, 263);
			this->btmModificarActuador->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btmModificarActuador->Name = L"btmModificarActuador";
			this->btmModificarActuador->Size = System::Drawing::Size(95, 31);
			this->btmModificarActuador->TabIndex = 102;
			this->btmModificarActuador->Text = L"Modificar";
			this->btmModificarActuador->UseVisualStyleBackColor = true;
			// 
			// btmAgregarActuador
			// 
			this->btmAgregarActuador->Location = System::Drawing::Point(109, 263);
			this->btmAgregarActuador->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btmAgregarActuador->Name = L"btmAgregarActuador";
			this->btmAgregarActuador->Size = System::Drawing::Size(87, 31);
			this->btmAgregarActuador->TabIndex = 101;
			this->btmAgregarActuador->Text = L"Agregar";
			this->btmAgregarActuador->UseVisualStyleBackColor = true;
			// 
			// txtActuadorEstado
			// 
			this->txtActuadorEstado->Location = System::Drawing::Point(118, 154);
			this->txtActuadorEstado->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtActuadorEstado->Name = L"txtActuadorEstado";
			this->txtActuadorEstado->Size = System::Drawing::Size(113, 22);
			this->txtActuadorEstado->TabIndex = 100;
			// 
			// txtActuadorCantidad
			// 
			this->txtActuadorCantidad->Location = System::Drawing::Point(118, 111);
			this->txtActuadorCantidad->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtActuadorCantidad->Name = L"txtActuadorCantidad";
			this->txtActuadorCantidad->Size = System::Drawing::Size(81, 22);
			this->txtActuadorCantidad->TabIndex = 99;
			// 
			// txtActuadorId
			// 
			this->txtActuadorId->Location = System::Drawing::Point(119, 28);
			this->txtActuadorId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtActuadorId->Name = L"txtActuadorId";
			this->txtActuadorId->Size = System::Drawing::Size(80, 22);
			this->txtActuadorId->TabIndex = 98;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(35, 197);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 16);
			this->label5->TabIndex = 97;
			this->label5->Text = L"Ubicación:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 16);
			this->label4->TabIndex = 96;
			this->label4->Text = L"Estado:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 120);
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
			// MantenimientoActuadoresForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(906, 561);
			this->Controls->Add(this->cmbTiposActuadores);
			this->Controls->Add(this->txtActuadorUbicacion);
			this->Controls->Add(this->label6);
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
			this->Name = L"MantenimientoActuadoresForm";
			this->Text = L"MantenimientoActuadoresForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvActuadores))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
