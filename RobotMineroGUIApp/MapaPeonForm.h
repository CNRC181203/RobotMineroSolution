#pragma once

namespace RobotMineroGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace RobotMineroGUIApp;


	/// <summary>
	/// Resumen de MapaPeonForm
	/// </summary>
	public ref class MapaPeonForm : public System::Windows::Forms::Form
	{
	public:
		MapaPeonForm(void)
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
		~MapaPeonForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbImagePeon;
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
			this->pbImagePeon = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImagePeon))->BeginInit();
			this->SuspendLayout();
			// 
			// pbImagePeon
			// 
			this->pbImagePeon->Location = System::Drawing::Point(64, 12);
			this->pbImagePeon->Name = L"pbImagePeon";
			this->pbImagePeon->Size = System::Drawing::Size(339, 312);
			this->pbImagePeon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbImagePeon->TabIndex = 0;
			this->pbImagePeon->TabStop = false;
			// 
			// MapaPeonForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(470, 343);
			this->Controls->Add(this->pbImagePeon);
			this->Name = L"MapaPeonForm";
			this->Text = L"MapaPeonForm";
			this->Load += gcnew System::EventHandler(this, &MapaPeonForm::MapaPeonForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImagePeon))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MapaPeonForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Load the image of the peon map
		//pbImagePeon->Image = Image::FromFile("path_to_peon_map_image.jpg"); // Update with the correct path to your image
		//pbImagePeon->SizeMode = PictureBoxSizeMode::StretchImage;	
	}
	};
}
