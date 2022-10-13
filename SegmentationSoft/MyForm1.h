#pragma once
#include <iostream>
#include<filesystem>

namespace SegmentationSoft {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::Button^ btn_remover_entrada;

	private: System::Windows::Forms::ListBox^ lb_entrada;
	private: System::Windows::Forms::ListBox^ lb_saida;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ btn_adicionar_saida;
	private: System::Windows::Forms::Button^ btn_remover_saida;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;

	protected:

	private:
		array<String^ >^ ext_aceitas;
		String^ strFiltroExtAceitas = "";
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
/// 
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btn_adicionar = (gcnew System::Windows::Forms::Button());
			this->btn_remover_entrada = (gcnew System::Windows::Forms::Button());
			this->lb_entrada = (gcnew System::Windows::Forms::ListBox());
			this->lb_saida = (gcnew System::Windows::Forms::ListBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btn_adicionar_saida = (gcnew System::Windows::Forms::Button());
			this->btn_remover_saida = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
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
			this->tableLayoutPanel1->Controls->Add(this->btn_remover_entrada, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(51, 308);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(197, 50);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// btn_adicionar
			// 
			this->btn_adicionar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_adicionar->Location = System::Drawing::Point(3, 3);
			this->btn_adicionar->Name = L"btn_adicionar";
			this->btn_adicionar->Size = System::Drawing::Size(92, 44);
			this->btn_adicionar->TabIndex = 0;
			this->btn_adicionar->Text = L"Adicionar";
			this->btn_adicionar->UseVisualStyleBackColor = true;
			this->btn_adicionar->Click += gcnew System::EventHandler(this, &MyForm1::btn_adicionar_Click);
			// 
			// btn_remover_entrada
			// 
			this->btn_remover_entrada->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_remover_entrada->Location = System::Drawing::Point(101, 3);
			this->btn_remover_entrada->Name = L"btn_remover_entrada";
			this->btn_remover_entrada->Size = System::Drawing::Size(93, 44);
			this->btn_remover_entrada->TabIndex = 1;
			this->btn_remover_entrada->Text = L"Remover";
			this->btn_remover_entrada->UseVisualStyleBackColor = true;
			this->btn_remover_entrada->Click += gcnew System::EventHandler(this, &MyForm1::btn_remover_entrada_Click);
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
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// btn_adicionar_saida
			// 
			this->btn_adicionar_saida->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_adicionar_saida->Location = System::Drawing::Point(3, 3);
			this->btn_adicionar_saida->Name = L"btn_adicionar_saida";
			this->btn_adicionar_saida->Size = System::Drawing::Size(92, 41);
			this->btn_adicionar_saida->TabIndex = 0;
			this->btn_adicionar_saida->Text = L"Adicionar";
			this->btn_adicionar_saida->UseVisualStyleBackColor = true;
			this->btn_adicionar_saida->Click += gcnew System::EventHandler(this, &MyForm1::btn_adicionar_saida_Click);
			// 
			// btn_remover_saida
			// 
			this->btn_remover_saida->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_remover_saida->Location = System::Drawing::Point(101, 3);
			this->btn_remover_saida->Name = L"btn_remover_saida";
			this->btn_remover_saida->Size = System::Drawing::Size(93, 41);
			this->btn_remover_saida->TabIndex = 1;
			this->btn_remover_saida->Text = L"Remover";
			this->btn_remover_saida->UseVisualStyleBackColor = true;
			this->btn_remover_saida->Click += gcnew System::EventHandler(this, &MyForm1::btn_remover_saida_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->btn_adicionar_saida, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->btn_remover_saida, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(291, 308);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(197, 47);
			this->tableLayoutPanel2->TabIndex = 5;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(689, 465);
			this->Controls->Add(this->tableLayoutPanel2);
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
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		Directory::CreateDirectory("./imagens/entrada");
		Directory::CreateDirectory("./imagens/saida");
		
		this->atualizarListaImagens();
		lb_entrada->SelectionMode = SelectionMode::MultiExtended;
		ext_aceitas = gcnew array<String^ >{".jpg", ".jpeg", ".png"};
		criaStringFiltro();
	}
	private: System::Void btn_adicionar_Click(System::Object^ sender, System::EventArgs^ e) {

		openFileDialog1->Multiselect = true;
		openFileDialog1->Filter = "Imagens " + strFiltroExtAceitas;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			String^ nomeArquivo = "";
			String^ extensao = "";
			int cont = 1;
			
			for each (String^ file in openFileDialog1->FileNames)
			{
				nomeArquivo = Path::GetFileName(file);
				extensao = Path::GetExtension(file);
				File::Copy(file, "./imagens/entrada/" + "in_" + (cont++) + extensao);
			}
			this->atualizarListaImagens();

		}
	}
	private: System::Void btn_adicionar_saida_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->Multiselect = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			String^ nomeArquivo = "";
			String^ extensao = "";
			int cont = 1;
			Directory::CreateDirectory("./imagens/saida");
			
			for each (String ^ file in openFileDialog1->FileNames)
			{
				nomeArquivo = Path::GetFileName(file);
				extensao = Path::GetExtension(file);
				File::Copy(file, "./imagens/saida/" + "saida" + (cont++) + extensao);
			}
			this->atualizarListaImagens();

		}
	}

	private: System::Void btn_remover_entrada_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (lb_entrada->SelectedItem) {
			ListBox::SelectedObjectCollection^ nome_entrada = lb_entrada->SelectedItems;
			String^ dir_entrada = Directory::GetCurrentDirectory() + "/imagens/entrada/";
			for each (String^ arquivo in nome_entrada)
			{
				for each (String^ ext in ext_aceitas)
				{
					if (File::Exists(dir_entrada + arquivo + ext)) {
						MessageBox::Show("Vamos deletar essa entrada \n" + dir_entrada + arquivo + ext);
						File::Delete(dir_entrada + arquivo + ext);
					}
				}
			}
		}
		this->atualizarListaImagens();
	}
	private: System::Void btn_remover_saida_Click(System::Object^ sender, System::EventArgs^ e) {
		
		MessageBox::Show("Vamos deletar essa saída");
		this->atualizarListaImagens();
	}

	private: System::Void atualizarListaImagens () {
		DirectoryInfo^ entrada_dir = gcnew DirectoryInfo("./imagens/entrada");
		DirectoryInfo^ saida_dir = gcnew DirectoryInfo("./imagens/saida");

		lb_entrada->Items->Clear();
		lb_saida->Items->Clear();
		for each (FileInfo ^ f in entrada_dir->GetFiles())
		{
			String^ nomeArquivo = Path::GetFileNameWithoutExtension(f->FullName);
			nomeArquivo = nomeArquivo->ToUpper();
			lb_entrada->Items->Add(nomeArquivo);
		};
		for each (FileInfo ^ f in saida_dir->GetFiles())
		{
			String^ nomeArquivo = Path::GetFileNameWithoutExtension(f->FullName);
			nomeArquivo = nomeArquivo->ToUpper();
			lb_saida->Items->Add(nomeArquivo);
		};
	}
	
	private: System::Void criaStringFiltro() {
		strFiltroExtAceitas += "(";
		for each (String^ ext in ext_aceitas)
		{
			strFiltroExtAceitas += "*" + ext + ";";
		}
		strFiltroExtAceitas = strFiltroExtAceitas->Substring(0, strFiltroExtAceitas->Length - 1);
		strFiltroExtAceitas += ")|";
		for each (String ^ ext in ext_aceitas)
		{
			strFiltroExtAceitas += "*" + ext->ToUpper() + ";";
		}
		strFiltroExtAceitas = strFiltroExtAceitas->Substring(0, strFiltroExtAceitas->Length - 1);
	}
};
}
