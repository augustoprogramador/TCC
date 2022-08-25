#pragma once

using namespace System::IO;

namespace SegmentationSoft {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_adicionar;
	private: System::Windows::Forms::Button^ btn_remover;


	private: System::Windows::Forms::ListBox^ lb_entrada;
	private: System::Windows::Forms::ListBox^ lb_saida;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;



	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btn_adicionar = (gcnew System::Windows::Forms::Button());
			this->btn_remover = (gcnew System::Windows::Forms::Button());
			this->lb_entrada = (gcnew System::Windows::Forms::ListBox());
			this->lb_saida = (gcnew System::Windows::Forms::ListBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(102, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Entrada";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(354, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Saída";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btn_adicionar, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_remover, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(153, 317);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(229, 53);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// btn_adicionar
			// 
			this->btn_adicionar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_adicionar->Location = System::Drawing::Point(3, 3);
			this->btn_adicionar->Name = L"btn_adicionar";
			this->btn_adicionar->Size = System::Drawing::Size(108, 47);
			this->btn_adicionar->TabIndex = 0;
			this->btn_adicionar->Text = L"Adicionar";
			this->btn_adicionar->UseVisualStyleBackColor = true;
			this->btn_adicionar->Click += gcnew System::EventHandler(this, &MyForm1::btn_adicionar_Click);
			// 
			// btn_remover
			// 
			this->btn_remover->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_remover->Location = System::Drawing::Point(117, 3);
			this->btn_remover->Name = L"btn_remover";
			this->btn_remover->Size = System::Drawing::Size(109, 47);
			this->btn_remover->TabIndex = 1;
			this->btn_remover->Text = L"Remover";
			this->btn_remover->UseVisualStyleBackColor = true;
			// 
			// lb_entrada
			// 
			this->lb_entrada->FormattingEnabled = true;
			this->lb_entrada->Location = System::Drawing::Point(51, 64);
			this->lb_entrada->Name = L"lb_entrada";
			this->lb_entrada->Size = System::Drawing::Size(197, 238);
			this->lb_entrada->TabIndex = 3;
			// 
			// lb_saida
			// 
			this->lb_saida->FormattingEnabled = true;
			this->lb_saida->Location = System::Drawing::Point(291, 64);
			this->lb_saida->Name = L"lb_saida";
			this->lb_saida->Size = System::Drawing::Size(197, 238);
			this->lb_saida->TabIndex = 4;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->InitialDirectory = L"./";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(689, 465);
			this->Controls->Add(this->lb_saida);
			this->Controls->Add(this->lb_entrada);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_adicionar_Click(System::Object^ sender, System::EventArgs^ e) {
		Stream^ myStream;
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "arquivos de imagem |*.jpg|*.bmp|*.png|*.gif";
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->RestoreDirectory = true;
		//if (saveFileDialog1->ShowDialog() == System::) {
			//if ((myStream = saveFileDialog1->OpenFile()) != nullptr) {
				//myStream->Close();
			//}
		//}
	}
};
}
