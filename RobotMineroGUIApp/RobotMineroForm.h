#pragma once
#include"GraficasTrabajadoresForm.h"

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

	public enum class CargoType {Peon, Operario, IngAmbiental, Supervisor};

	/// <summary>
	/// Resumen de RobotMineroForm
	/// </summary>
	public ref class RobotMineroForm : public System::Windows::Forms::Form
	{
	public:
		RobotMineroForm(void)
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
		~RobotMineroForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtRecursoId;
	private: System::Windows::Forms::TextBox^ txtRecursoNombre;
	private: System::Windows::Forms::TextBox^ txtRecursoApellido;
	private: System::Windows::Forms::TextBox^ txtRecursoSalario;
	private: System::Windows::Forms::ComboBox^ cmbRecursoCargo;
	private: System::Windows::Forms::Button^ btmAgregarRecurso;
	private: System::Windows::Forms::Button^ btmModificarrecurso;

	private: System::Windows::Forms::Button^ btmEliminarRecurso;
	private: System::Windows::Forms::DataGridView^ dgvRecursos;





	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtContrasenha;


	private: System::Windows::Forms::DateTimePicker^ dtpStart;
	private: System::Windows::Forms::DateTimePicker^ dtpEnd;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RecursoId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RecursoNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RecursoApellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RecursoSalario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ recursoCargo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RecursoContrasenha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvInicio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvFin;
	private: System::Windows::Forms::PictureBox^ pbImage;
	private: System::Windows::Forms::Button^ btnUpdateImage;
	private: System::Windows::Forms::Button^ btnGraficas;






























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
			this->txtRecursoId = (gcnew System::Windows::Forms::TextBox());
			this->txtRecursoNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtRecursoApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtRecursoSalario = (gcnew System::Windows::Forms::TextBox());
			this->cmbRecursoCargo = (gcnew System::Windows::Forms::ComboBox());
			this->btmAgregarRecurso = (gcnew System::Windows::Forms::Button());
			this->btmModificarrecurso = (gcnew System::Windows::Forms::Button());
			this->btmEliminarRecurso = (gcnew System::Windows::Forms::Button());
			this->dgvRecursos = (gcnew System::Windows::Forms::DataGridView());
			this->RecursoId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RecursoNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RecursoApellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RecursoSalario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->recursoCargo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RecursoContrasenha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvInicio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvFin = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtContrasenha = (gcnew System::Windows::Forms::TextBox());
			this->dtpStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpEnd = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pbImage = (gcnew System::Windows::Forms::PictureBox());
			this->btnUpdateImage = (gcnew System::Windows::Forms::Button());
			this->btnGraficas = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRecursos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 18);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 50);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 82);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellido:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 119);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Salario:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 158);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Cargo:";
			// 
			// txtRecursoId
			// 
			this->txtRecursoId->Location = System::Drawing::Point(67, 11);
			this->txtRecursoId->Margin = System::Windows::Forms::Padding(2);
			this->txtRecursoId->Name = L"txtRecursoId";
			this->txtRecursoId->Size = System::Drawing::Size(61, 20);
			this->txtRecursoId->TabIndex = 5;
			// 
			// txtRecursoNombre
			// 
			this->txtRecursoNombre->Location = System::Drawing::Point(67, 43);
			this->txtRecursoNombre->Margin = System::Windows::Forms::Padding(2);
			this->txtRecursoNombre->Name = L"txtRecursoNombre";
			this->txtRecursoNombre->Size = System::Drawing::Size(99, 20);
			this->txtRecursoNombre->TabIndex = 6;
			// 
			// txtRecursoApellido
			// 
			this->txtRecursoApellido->Location = System::Drawing::Point(66, 75);
			this->txtRecursoApellido->Margin = System::Windows::Forms::Padding(2);
			this->txtRecursoApellido->Name = L"txtRecursoApellido";
			this->txtRecursoApellido->Size = System::Drawing::Size(98, 20);
			this->txtRecursoApellido->TabIndex = 7;
			// 
			// txtRecursoSalario
			// 
			this->txtRecursoSalario->Location = System::Drawing::Point(66, 112);
			this->txtRecursoSalario->Margin = System::Windows::Forms::Padding(2);
			this->txtRecursoSalario->Name = L"txtRecursoSalario";
			this->txtRecursoSalario->Size = System::Drawing::Size(62, 20);
			this->txtRecursoSalario->TabIndex = 8;
			// 
			// cmbRecursoCargo
			// 
			this->cmbRecursoCargo->FormattingEnabled = true;
			this->cmbRecursoCargo->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Trabajador de campo", L"Operario", L"IngAmbiental",
					L"Supervisor"
			});
			this->cmbRecursoCargo->Location = System::Drawing::Point(67, 150);
			this->cmbRecursoCargo->Margin = System::Windows::Forms::Padding(2);
			this->cmbRecursoCargo->Name = L"cmbRecursoCargo";
			this->cmbRecursoCargo->Size = System::Drawing::Size(157, 21);
			this->cmbRecursoCargo->TabIndex = 9;
			this->cmbRecursoCargo->SelectedIndexChanged += gcnew System::EventHandler(this, &RobotMineroForm::cmbRecursoCargo_SelectedIndexChanged);
			// 
			// btmAgregarRecurso
			// 
			this->btmAgregarRecurso->Location = System::Drawing::Point(63, 185);
			this->btmAgregarRecurso->Margin = System::Windows::Forms::Padding(2);
			this->btmAgregarRecurso->Name = L"btmAgregarRecurso";
			this->btmAgregarRecurso->Size = System::Drawing::Size(65, 25);
			this->btmAgregarRecurso->TabIndex = 10;
			this->btmAgregarRecurso->Text = L"Agregar";
			this->btmAgregarRecurso->UseVisualStyleBackColor = true;
			this->btmAgregarRecurso->Click += gcnew System::EventHandler(this, &RobotMineroForm::btmAgregarRecurso_Click);
			// 
			// btmModificarrecurso
			// 
			this->btmModificarrecurso->Location = System::Drawing::Point(170, 185);
			this->btmModificarrecurso->Margin = System::Windows::Forms::Padding(2);
			this->btmModificarrecurso->Name = L"btmModificarrecurso";
			this->btmModificarrecurso->Size = System::Drawing::Size(71, 25);
			this->btmModificarrecurso->TabIndex = 11;
			this->btmModificarrecurso->Text = L"Modificar";
			this->btmModificarrecurso->UseVisualStyleBackColor = true;
			this->btmModificarrecurso->Click += gcnew System::EventHandler(this, &RobotMineroForm::btmModificarrecurso_Click);
			// 
			// btmEliminarRecurso
			// 
			this->btmEliminarRecurso->Location = System::Drawing::Point(283, 185);
			this->btmEliminarRecurso->Margin = System::Windows::Forms::Padding(2);
			this->btmEliminarRecurso->Name = L"btmEliminarRecurso";
			this->btmEliminarRecurso->Size = System::Drawing::Size(76, 25);
			this->btmEliminarRecurso->TabIndex = 13;
			this->btmEliminarRecurso->Text = L"Eliminar";
			this->btmEliminarRecurso->UseVisualStyleBackColor = true;
			this->btmEliminarRecurso->Click += gcnew System::EventHandler(this, &RobotMineroForm::btmEliminarRecurso_Click);
			// 
			// dgvRecursos
			// 
			this->dgvRecursos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvRecursos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->RecursoId,
					this->RecursoNombre, this->RecursoApellido, this->RecursoSalario, this->recursoCargo, this->RecursoContrasenha, this->dgvInicio,
					this->dgvFin
			});
			this->dgvRecursos->Location = System::Drawing::Point(19, 228);
			this->dgvRecursos->Margin = System::Windows::Forms::Padding(2);
			this->dgvRecursos->Name = L"dgvRecursos";
			this->dgvRecursos->RowHeadersWidth = 51;
			this->dgvRecursos->RowTemplate->Height = 24;
			this->dgvRecursos->Size = System::Drawing::Size(887, 187);
			this->dgvRecursos->TabIndex = 14;
			this->dgvRecursos->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RobotMineroForm::dgvRecursos_CellClick);
			this->dgvRecursos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RobotMineroForm::dgvRecursos_CellContentClick);
			// 
			// RecursoId
			// 
			this->RecursoId->HeaderText = L"ID";
			this->RecursoId->MinimumWidth = 6;
			this->RecursoId->Name = L"RecursoId";
			this->RecursoId->Width = 70;
			// 
			// RecursoNombre
			// 
			this->RecursoNombre->HeaderText = L"Nombre";
			this->RecursoNombre->MinimumWidth = 6;
			this->RecursoNombre->Name = L"RecursoNombre";
			this->RecursoNombre->Width = 125;
			// 
			// RecursoApellido
			// 
			this->RecursoApellido->HeaderText = L"Apellido";
			this->RecursoApellido->MinimumWidth = 6;
			this->RecursoApellido->Name = L"RecursoApellido";
			this->RecursoApellido->Width = 125;
			// 
			// RecursoSalario
			// 
			this->RecursoSalario->HeaderText = L"Salario";
			this->RecursoSalario->MinimumWidth = 6;
			this->RecursoSalario->Name = L"RecursoSalario";
			this->RecursoSalario->Width = 75;
			// 
			// recursoCargo
			// 
			this->recursoCargo->HeaderText = L"Cargo";
			this->recursoCargo->Name = L"recursoCargo";
			// 
			// RecursoContrasenha
			// 
			this->RecursoContrasenha->HeaderText = L"Contraseña";
			this->RecursoContrasenha->Name = L"RecursoContrasenha";
			// 
			// dgvInicio
			// 
			this->dgvInicio->HeaderText = L"Inicio";
			this->dgvInicio->Name = L"dgvInicio";
			this->dgvInicio->Width = 120;
			// 
			// dgvFin
			// 
			this->dgvFin->HeaderText = L"Fin";
			this->dgvFin->Name = L"dgvFin";
			this->dgvFin->Width = 120;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(357, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Contraseña:";
			// 
			// txtContrasenha
			// 
			this->txtContrasenha->Location = System::Drawing::Point(446, 29);
			this->txtContrasenha->Name = L"txtContrasenha";
			this->txtContrasenha->Size = System::Drawing::Size(100, 20);
			this->txtContrasenha->TabIndex = 16;
			// 
			// dtpStart
			// 
			this->dtpStart->Location = System::Drawing::Point(446, 76);
			this->dtpStart->Name = L"dtpStart";
			this->dtpStart->Size = System::Drawing::Size(200, 20);
			this->dtpStart->TabIndex = 17;
			// 
			// dtpEnd
			// 
			this->dtpEnd->Location = System::Drawing::Point(446, 128);
			this->dtpEnd->Name = L"dtpEnd";
			this->dtpEnd->Size = System::Drawing::Size(200, 20);
			this->dtpEnd->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(357, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Fecha de inicio";
			this->label7->Click += gcnew System::EventHandler(this, &RobotMineroForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(357, 134);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Fecha Fin";
			this->label8->Click += gcnew System::EventHandler(this, &RobotMineroForm::label8_Click);
			// 
			// pbImage
			// 
			this->pbImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbImage->Location = System::Drawing::Point(736, 29);
			this->pbImage->Margin = System::Windows::Forms::Padding(2);
			this->pbImage->Name = L"pbImage";
			this->pbImage->Size = System::Drawing::Size(121, 114);
			this->pbImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbImage->TabIndex = 63;
			this->pbImage->TabStop = false;
			// 
			// btnUpdateImage
			// 
			this->btnUpdateImage->Location = System::Drawing::Point(736, 158);
			this->btnUpdateImage->Margin = System::Windows::Forms::Padding(2);
			this->btnUpdateImage->Name = L"btnUpdateImage";
			this->btnUpdateImage->Size = System::Drawing::Size(110, 23);
			this->btnUpdateImage->TabIndex = 64;
			this->btnUpdateImage->Text = L"Actualizar imagen";
			this->btnUpdateImage->UseVisualStyleBackColor = true;
			this->btnUpdateImage->Click += gcnew System::EventHandler(this, &RobotMineroForm::btnUpdateImage_Click);
			// 
			// btnGraficas
			// 
			this->btnGraficas->Location = System::Drawing::Point(431, 185);
			this->btnGraficas->Margin = System::Windows::Forms::Padding(2);
			this->btnGraficas->Name = L"btnGraficas";
			this->btnGraficas->Size = System::Drawing::Size(215, 25);
			this->btnGraficas->TabIndex = 66;
			this->btnGraficas->Text = L"Estadística de trabajadores";
			this->btnGraficas->UseVisualStyleBackColor = true;
			this->btnGraficas->Click += gcnew System::EventHandler(this, &RobotMineroForm::btnGraficas_Click);
			// 
			// RobotMineroForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(938, 445);
			this->Controls->Add(this->btnGraficas);
			this->Controls->Add(this->pbImage);
			this->Controls->Add(this->btnUpdateImage);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dtpEnd);
			this->Controls->Add(this->dtpStart);
			this->Controls->Add(this->txtContrasenha);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dgvRecursos);
			this->Controls->Add(this->btmEliminarRecurso);
			this->Controls->Add(this->btmModificarrecurso);
			this->Controls->Add(this->btmAgregarRecurso);
			this->Controls->Add(this->cmbRecursoCargo);
			this->Controls->Add(this->txtRecursoSalario);
			this->Controls->Add(this->txtRecursoApellido);
			this->Controls->Add(this->txtRecursoNombre);
			this->Controls->Add(this->txtRecursoId);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"RobotMineroForm";
			this->Text = L"RobotMineroForm";
			this->Load += gcnew System::EventHandler(this, &RobotMineroForm::RobotMineroForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRecursos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RobotMineroForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowUsuarios();
	}
	private: System::Void btmAgregarRecurso_Click(System::Object^ sender, System::EventArgs^ e) {
		int UsuarioNewID = Int32::Parse(txtRecursoId->Text);
		if (UsuarioNewID < 0) {
			MessageBox::Show("El ID debe ser mayor a 0");
			return;
		}
		String^ UsuarioNewName = txtRecursoNombre->Text;
		if (UsuarioNewName->Length == 0) {
			MessageBox::Show("El nombre del usuario no debe estar vacío");
			return;
		}
		String^ UsuarioLastName = txtRecursoApellido->Text->Trim();
		if (UsuarioLastName->Length == 0) {
			MessageBox::Show("El apellido del ususario no debe estar vacio");
			return;
		}
		double UsuarioSalario = Double::Parse(txtRecursoSalario->Text->Trim());
		if (UsuarioSalario <= 0) {
			MessageBox::Show("El salario debe ser mayor a 0");
			return;
		}
		DateTime^ scheduleStart = dtpStart->Value;
		if (scheduleStart == nullptr) {
			MessageBox::Show("La fecha no debe estar vacia");
		}
		DateTime^ scheduleEnd = dtpEnd->Value;
		if (scheduleEnd == nullptr) {
			MessageBox::Show("La fecha no debe estar vacia");
		}

		Usuario^ usuarioNew = gcnew Usuario();
		usuarioNew->Id = UsuarioNewID;
		usuarioNew->Nombre = UsuarioNewName;
		usuarioNew->Apelllido = UsuarioLastName;
		usuarioNew->Salario = UsuarioSalario;
		usuarioNew->FechaFirst = scheduleStart;
		usuarioNew->FechaEnd = scheduleEnd;

		String^ UsuarioContrasenha = txtContrasenha->Text;
		usuarioNew->contrasenha = UsuarioContrasenha;
		if (UsuarioContrasenha->Length == 0) {
			MessageBox::Show("La cotraseña no debe estar vacia");
		}

		/////////////////////////////////////////////////////////////////////////////
		int selectedIndex = cmbRecursoCargo->SelectedIndex;

		if (selectedIndex < 0) {
			MessageBox::Show("Debe seleccionar algun cargo");
			return;
		}

		CargoType estadoType = static_cast<CargoType>(selectedIndex);
		String^ cargoNew = nullptr;

		switch (estadoType) {
		case CargoType::Peon:
			cargoNew = "Peon";
			break;
		case CargoType::Operario:
			cargoNew = "Operario";
			break;
		case CargoType::IngAmbiental:
			cargoNew = "IngAmbiental";
			break;
		case CargoType::Supervisor:
			cargoNew = "Supervisor";
			break;
		}

		usuarioNew->Cargo = cargoNew;
		////////////////////////////////////////////////////////////////////////////

		if (pbImage != nullptr && pbImage->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbImage->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			usuarioNew->Photo = ms->ToArray();
		}

		Controller::AgregarUsuario(usuarioNew);
		ShowUsuarios();
	}
		 public:
			 void ShowUsuarios() {
				 List<Usuario^>^ ususarioNewNew = Controller::ConsultarTodosUsuario();

				 if (ususarioNewNew != nullptr) {
					 dgvRecursos->Rows->Clear();

					 for (int i = 0; i < ususarioNewNew->Count;i++) {
						 dgvRecursos->Rows->Add(gcnew array<String^>{
							 "" + ususarioNewNew[i]->Id,
								 ususarioNewNew[i]->Nombre,
								 "" + ususarioNewNew[i]->Apelllido,
								 "" + ususarioNewNew[i]->Salario,
								 ususarioNewNew[i]->Cargo,
								 ususarioNewNew[i]->contrasenha,
								 ususarioNewNew[i]->FechaFirst != nullptr ? ususarioNewNew[i]->FechaFirst->ToString() : "",
								 ususarioNewNew[i]->FechaEnd != nullptr ? ususarioNewNew[i]->FechaEnd->ToString() : ""
						 });
					 }
				 }
			 }
	

	private: System::Void btmEliminarRecurso_Click(System::Object^ sender, System::EventArgs^ e) {
		int UsuarioNewID = Int32::Parse(txtRecursoId->Text);
		if (UsuarioNewID < 0) {
			MessageBox::Show("El ID debe ser mayor a 0");
			return;
		}
		String^ UsuarioNewName = txtRecursoNombre->Text;
		if (UsuarioNewName->Length == 0) {
			MessageBox::Show("El nombre del usuario no debe estar vacío");
			return;
		}
		String^ UsuarioLastName = txtRecursoApellido->Text->Trim();
		if (UsuarioLastName->Length == 0) {
			MessageBox::Show("El apellido del ususario no debe estar vacio");
			return;
		}
		double UsuarioSalario = Double::Parse(txtRecursoSalario->Text->Trim());
		if (UsuarioSalario <= 0) {
			MessageBox::Show("El salario debe ser mayor a 0");
			return;
		}
		DateTime^ scheduleStart = dtpStart->Value;
		if (scheduleStart == nullptr) {
			MessageBox::Show("La fecha no debe estar vacia");
		}
		DateTime^ scheduleEnd = dtpEnd->Value;
		if (scheduleEnd == nullptr) {
			MessageBox::Show("La fecha no debe estar vacia");
		}

		Usuario^ usuarioNew = gcnew Usuario();
		usuarioNew->Id = UsuarioNewID;
		usuarioNew->Nombre = UsuarioNewName;
		usuarioNew->Apelllido = UsuarioLastName;
		usuarioNew->Salario = UsuarioSalario;
		usuarioNew->FechaFirst = scheduleStart;
		usuarioNew->FechaEnd = scheduleEnd;

		String^ UsuarioContrasenha = txtContrasenha->Text;
		usuarioNew->contrasenha = UsuarioContrasenha;
		/////////////////////////////////////////////////////////////////////////////
		int selectedIndex = cmbRecursoCargo->SelectedIndex;

		if (selectedIndex < 0) {
			MessageBox::Show("Debe seleccionar algun cargo");
			return;
		}

		CargoType estadoType = static_cast<CargoType>(selectedIndex);
		String^ cargoNew = nullptr;

		switch (estadoType) {
		case CargoType::Peon:
			cargoNew = "Peon";
			break;
		case CargoType::Operario:
			cargoNew = "Operario";
			break;
		case CargoType::IngAmbiental:
			cargoNew = "IngAmbiental";
			break;
		case CargoType::Supervisor:
			cargoNew = "Supervisor";
			break;
		}

		usuarioNew->Cargo = cargoNew;
		////////////////////////////////////////////////////////////////////////////
		if (pbImage != nullptr && pbImage->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbImage->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			usuarioNew->Photo = ms->ToArray();
		}

		Controller::EliminarUsuario(UsuarioNewID);
		ShowUsuarios();
	}

	private: System::Void btmModificarrecurso_Click(System::Object^ sender, System::EventArgs^ e) {
		int UsuarioNewID = Int32::Parse(txtRecursoId->Text);
		if (UsuarioNewID < 0) {
			MessageBox::Show("El ID debe ser mayor a 0");
			return;
		}
		String^ UsuarioNewName = txtRecursoNombre->Text;
		if (UsuarioNewName->Length == 0) {
			MessageBox::Show("El nombre del usuario no debe estar vacío");
			return;
		}
		String^ UsuarioLastName = txtRecursoApellido->Text->Trim();
		if (UsuarioLastName->Length == 0) {
			MessageBox::Show("El apellido del ususario no debe estar vacio");
			return;
		}
		double UsuarioSalario = Double::Parse(txtRecursoSalario->Text->Trim());
		if (UsuarioSalario <= 0) {
			MessageBox::Show("El salario debe ser mayor a 0");
			return;
		}
		DateTime^ scheduleStart = dtpStart->Value;
		if (scheduleStart == nullptr) {
			MessageBox::Show("La fecha no debe estar vacia");
		}
		DateTime^ scheduleEnd = dtpEnd->Value;
		if (scheduleEnd == nullptr) {
			MessageBox::Show("La fecha no debe estar vacia");
		}

		Usuario^ usuarioNew = gcnew Usuario();
		usuarioNew->Id = UsuarioNewID;
		usuarioNew->Nombre = UsuarioNewName;
		usuarioNew->Apelllido = UsuarioLastName;
		usuarioNew->Salario = UsuarioSalario;
		usuarioNew->FechaFirst = scheduleStart;
		usuarioNew->FechaEnd = scheduleEnd;

		String^ UsuarioContrasenha = txtContrasenha->Text;
		usuarioNew->contrasenha = UsuarioContrasenha;
		/////////////////////////////////////////////////////////////////////////////
		int selectedIndex = cmbRecursoCargo->SelectedIndex;

		if (selectedIndex < 0) {
			MessageBox::Show("Debe seleccionar algun cargo");
			return;
		}

		CargoType estadoType = static_cast<CargoType>(selectedIndex);
		String^ cargoNew = nullptr;

		switch (estadoType) {
		case CargoType::Peon:
			cargoNew = "Peon";
			break;
		case CargoType::Operario:
			cargoNew = "Operario";
			break;
		case CargoType::IngAmbiental:
			cargoNew = "IngAmbiental";
			break;
		case CargoType::Supervisor:
			cargoNew = "Supervisor";
			break;
		}

		usuarioNew->Cargo = cargoNew;
		////////////////////////////////////////////////////////////////////////////
		if (pbImage != nullptr && pbImage->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbImage->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			usuarioNew->Photo = ms->ToArray();
		}

		Controller::ActualizarUsuario(usuarioNew);
		ShowUsuarios();
	}

	private: System::Void dgvRecursos_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int ResourceId = Convert::ToInt32(dgvRecursos->Rows[dgvRecursos->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		Usuario^ usersss = Controller::DevolverUsuarioPorID(ResourceId);

		txtRecursoId->Text = "" + usersss->Id;
		txtRecursoNombre->Text = usersss->Nombre;
		txtRecursoApellido->Text = usersss->Apelllido;
		txtRecursoSalario->Text = "" + usersss->Salario;
		txtContrasenha->Text = usersss->contrasenha;
		dtpStart->Value = *usersss->FechaFirst;
		dtpEnd->Value = *usersss->FechaEnd;
		
		String^ cargoStr = usersss->Cargo;
		int selectedIndex = -1;

		if (cargoStr == "Peon")
			selectedIndex = 0;
		else if (cargoStr == "Operario")
			selectedIndex = 1;
		else if (cargoStr == "IngAmbiental")
			selectedIndex = 2;
		else if (cargoStr == "Supervisor")
			selectedIndex = 3;

		cmbRecursoCargo->SelectedIndex = selectedIndex;

		if (usersss->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(usersss->Photo);
			pbImage->Image = Image::FromStream(ms);
		}
		else {
			pbImage->Image = nullptr;
			pbImage->Invalidate();
		}
	}

private: System::Void cmbRecursoCargo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvRecursos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
	private: System::Void btnUpdateImage_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pbImage->Image = gcnew Bitmap(ofd->FileName);
		}
	}
private: System::Void btnGraficas_Click(System::Object^ sender, System::EventArgs^ e) {
	GraficasTrabajadoresForm^ graficaForm = gcnew GraficasTrabajadoresForm();
	graficaForm->Show();
}
};
}
