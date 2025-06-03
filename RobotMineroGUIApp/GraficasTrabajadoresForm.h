#pragma once

namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace RobotMineroModel;
	using namespace RobotMineroController;

	/// <summary>
	/// Resumen de GraficasTrabajadoresForm
	/// </summary>
	public ref class GraficasTrabajadoresForm : public System::Windows::Forms::Form
	{
	public:
		GraficasTrabajadoresForm(void)
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
		~GraficasTrabajadoresForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartSalario;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartNumTrabajadores;
	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chartSalario = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartNumTrabajadores = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSalario))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartNumTrabajadores))->BeginInit();
			this->SuspendLayout();
			// 
			// chartSalario
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartSalario->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartSalario->Legends->Add(legend1);
			this->chartSalario->Location = System::Drawing::Point(46, 12);
			this->chartSalario->Name = L"chartSalario";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Salario";
			this->chartSalario->Series->Add(series1);
			this->chartSalario->Size = System::Drawing::Size(819, 254);
			this->chartSalario->TabIndex = 0;
			this->chartSalario->Text = L"chart1";
			// 
			// chartNumTrabajadores
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartNumTrabajadores->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chartNumTrabajadores->Legends->Add(legend2);
			this->chartNumTrabajadores->Location = System::Drawing::Point(46, 276);
			this->chartNumTrabajadores->Name = L"chartNumTrabajadores";
			this->chartNumTrabajadores->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Número de trabajadores";
			this->chartNumTrabajadores->Series->Add(series2);
			this->chartNumTrabajadores->Size = System::Drawing::Size(819, 269);
			this->chartNumTrabajadores->TabIndex = 1;
			this->chartNumTrabajadores->Text = L"chart2";
			// 
			// GraficasTrabajadoresForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(932, 582);
			this->Controls->Add(this->chartNumTrabajadores);
			this->Controls->Add(this->chartSalario);
			this->Name = L"GraficasTrabajadoresForm";
			this->Text = L"GraficasTrabajadoresForm";
			this->Load += gcnew System::EventHandler(this, &GraficasTrabajadoresForm::GraficasTrabajadoresForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSalario))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartNumTrabajadores))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GraficasTrabajadoresForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List< Usuario^>^ usuariosLista = Controller::ConsultarTodosUsuario();
		for (int i = 0; i < usuariosLista->Count; i++) {
			chartSalario->Series["Salario"]->Points->Add(usuariosLista[i]->Salario); //Para el eje Y
			chartSalario->Series["Salario"]->Points[i]->AxisLabel = usuariosLista[i]->Nombre;
			chartSalario->Series["Salario"]->Points[i]->Label = "S./" + usuariosLista[i]->Salario;
		}

		int cantidadPeon = 0, cantidadOperario = 0, cantidadSupervisor = 0, cantidadIngAmbiental = 0;
		array<String^>^ nombreTrabajadores = gcnew array<String^>{"Peon", "Operario", "Supervisor", "IngAmbiental"};
		for (int i = 0; i < usuariosLista->Count; i++) {
			if (usuariosLista[i]->Cargo == nombreTrabajadores[0]) {
				cantidadPeon++;
			}
			if (usuariosLista[i]->Cargo == nombreTrabajadores[1]) {
				cantidadOperario++;
			}
			if (usuariosLista[i]->Cargo == nombreTrabajadores[2]) {
				cantidadSupervisor++;
			}
			if (usuariosLista[i]->Cargo == nombreTrabajadores[3]) {
				cantidadIngAmbiental++;
			}
		}
		array<int>^ cantidadTrabajadores = gcnew array<int> { cantidadPeon, cantidadOperario, cantidadSupervisor, cantidadIngAmbiental };

		//[cantidadPeon, cantidadOperario, cantidadSupervisor, cantidadIngAmbiental];
		for (int i = 0; i < 4; i++) {
			chartNumTrabajadores->Series["Número de trabajadores"]->Points->Add(cantidadTrabajadores[i]); //Para el eje Y
			chartNumTrabajadores->Series["Número de trabajadores"]->Points[i]->AxisLabel = nombreTrabajadores[i];
			//chartNumTrabajadores->Series["Número de trabajadores"]->Points[i]->Label = Convert::ToString(cantidadTrabajadores[i]);
		}

	}
};
}
