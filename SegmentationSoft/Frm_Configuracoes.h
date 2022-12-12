#pragma once

namespace SegmentationSoft {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MyForm4
	/// </summary>
	public ref class Frm_Configuracoes : public System::Windows::Forms::Form
	{
	public:
		Frm_Configuracoes(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~Frm_Configuracoes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_compilar;
	private: System::Windows::Forms::GroupBox^ gpb_celula;



	private: System::Windows::Forms::TableLayoutPanel^ tlp_campos;



	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_compilar = (gcnew System::Windows::Forms::Button());
			this->gpb_celula = (gcnew System::Windows::Forms::GroupBox());
			this->tlp_campos = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->gpb_celula->SuspendLayout();
			this->tlp_campos->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(37, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(108, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(69, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// btn_compilar
			// 
			this->btn_compilar->BackColor = System::Drawing::Color::White;
			this->btn_compilar->Font = (gcnew System::Drawing::Font(L"Candara", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_compilar->Location = System::Drawing::Point(210, 250);
			this->btn_compilar->Name = L"btn_compilar";
			this->btn_compilar->Size = System::Drawing::Size(86, 31);
			this->btn_compilar->TabIndex = 2;
			this->btn_compilar->Text = L"Compilar";
			this->btn_compilar->UseVisualStyleBackColor = false;
			this->btn_compilar->Click += gcnew System::EventHandler(this, &Frm_Configuracoes::btn_compilar_Click);
			// 
			// gpb_celula
			// 
			this->gpb_celula->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gpb_celula->BackColor = System::Drawing::Color::AliceBlue;
			this->gpb_celula->Controls->Add(this->textBox1);
			this->gpb_celula->Controls->Add(this->label1);
			this->gpb_celula->Location = System::Drawing::Point(3, 3);
			this->gpb_celula->Name = L"gpb_celula";
			this->gpb_celula->Size = System::Drawing::Size(180, 94);
			this->gpb_celula->TabIndex = 5;
			this->gpb_celula->TabStop = false;
			// 
			// tlp_campos
			// 
			this->tlp_campos->AutoSize = true;
			this->tlp_campos->BackColor = System::Drawing::Color::AliceBlue;
			this->tlp_campos->ColumnCount = 2;
			this->tlp_campos->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlp_campos->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlp_campos->Controls->Add(this->gpb_celula, 0, 0);
			this->tlp_campos->Location = System::Drawing::Point(70, 65);
			this->tlp_campos->Name = L"tlp_campos";
			this->tlp_campos->RowCount = 1;
			this->tlp_campos->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tlp_campos->Size = System::Drawing::Size(372, 100);
			this->tlp_campos->TabIndex = 6;
			// 
			// Frm_Configuracoes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->ClientSize = System::Drawing::Size(939, 550);
			this->Controls->Add(this->tlp_campos);
			this->Controls->Add(this->btn_compilar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Frm_Configuracoes";
			this->Text = L"Configurações";
			this->Load += gcnew System::EventHandler(this, &Frm_Configuracoes::Frm_Configuracoes_Load);
			this->gpb_celula->ResumeLayout(false);
			this->gpb_celula->PerformLayout();
			this->tlp_campos->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void Frm_Configuracoes_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btn_compilar_Click(System::Object^ sender, System::EventArgs^ e) {
		/*gpb_celula->Controls;
		tlp_campos->Controls;*/
		clonaComponente();
	}

	private: System::Void clonaComponente() {
		//tlp_campos->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::AutoSize)));
		tlp_campos->Controls->Add(gcnew Button, -1, -1);
		MessageBox::Show(tlp_campos->RowCount.ToString());
	}
};
}
