#pragma once
#include <iostream>
#include <filesystem>

namespace SegmentationSoft {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Sumário para MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ lb_algoritmos;
	protected:

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ btn_adicionar_algo;
	private: System::Windows::Forms::Button^ btn_remover_algo;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;

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
		void InitializeComponent(void)
		{
			this->lb_algoritmos = (gcnew System::Windows::Forms::ListBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btn_adicionar_algo = (gcnew System::Windows::Forms::Button());
			this->btn_remover_algo = (gcnew System::Windows::Forms::Button());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lb_algoritmos
			// 
			this->lb_algoritmos->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_algoritmos->FormattingEnabled = true;
			this->lb_algoritmos->ItemHeight = 30;
			this->lb_algoritmos->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Algo1", L"Algo2", L"Algo3" });
			this->lb_algoritmos->Location = System::Drawing::Point(3, 3);
			this->lb_algoritmos->Name = L"lb_algoritmos";
			this->lb_algoritmos->Size = System::Drawing::Size(259, 244);
			this->lb_algoritmos->TabIndex = 0;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->lb_algoritmos, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(64, 49);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 82.56881F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 17.43119F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(265, 327);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->btn_adicionar_algo, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->btn_remover_algo, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 273);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(259, 51);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// btn_adicionar_algo
			// 
			this->btn_adicionar_algo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_adicionar_algo->Location = System::Drawing::Point(3, 3);
			this->btn_adicionar_algo->Name = L"btn_adicionar_algo";
			this->btn_adicionar_algo->Size = System::Drawing::Size(123, 45);
			this->btn_adicionar_algo->TabIndex = 2;
			this->btn_adicionar_algo->Text = L"Adicionar";
			this->btn_adicionar_algo->UseVisualStyleBackColor = true;
			this->btn_adicionar_algo->Click += gcnew System::EventHandler(this, &MyForm2::btn_adicionar_algo_Click);
			// 
			// btn_remover_algo
			// 
			this->btn_remover_algo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_remover_algo->Location = System::Drawing::Point(132, 3);
			this->btn_remover_algo->Name = L"btn_remover_algo";
			this->btn_remover_algo->Size = System::Drawing::Size(124, 45);
			this->btn_remover_algo->TabIndex = 3;
			this->btn_remover_algo->Text = L"Remover";
			this->btn_remover_algo->UseVisualStyleBackColor = true;
			this->btn_remover_algo->Click += gcnew System::EventHandler(this, &MyForm2::btn_remover_algo_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 448);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_adicionar_algo_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog2->Multiselect = true;
		openFileDialog2->Filter = "Texto " + strFiltroExtAceitas;

		if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			String^ nomeArquivo = "";
			String^ extensao = "";
			int cont = 1;

			for each (String ^ file in openFileDialog2->FileNames)
			{
				nomeArquivo = Path::GetFileName(file);
				extensao = Path::GetExtension(file);
				File::Copy(file, "./algoritmos/" + nomeArquivo + extensao);
			}
			this->atualizarListaAlgoritmos();

		}
	}
	private: System::Void btn_remover_algo_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lb_algoritmos->SelectedItem) {
			ListBox::SelectedObjectCollection^ nome_entrada = lb_algoritmos->SelectedItems;
			String^ dir_entrada = Directory::GetCurrentDirectory() + "/algoritmos/";
			for each (String ^ arquivo in nome_entrada)
			{
				for each (String ^ ext in ext_aceitas)
				{
					if (File::Exists(dir_entrada + arquivo + ext)) {
						//MessageBox::Show("Vamos deletar essa entrada \n" + dir_entrada + arquivo + ext);
						File::Delete(dir_entrada + arquivo + ext);
					}
				}
			}
		}
		this->atualizarListaAlgoritmos();
	}

	private: System::Void atualizarListaAlgoritmos() {
		DirectoryInfo^ entrada_dir = gcnew DirectoryInfo("./algoritmos");

		lb_algoritmos->Items->Clear();
		for each (FileInfo ^ f in entrada_dir->GetFiles())
		{
			String^ nomeArquivo = Path::GetFileNameWithoutExtension(f->FullName);
			nomeArquivo = nomeArquivo->ToUpper();
			lb_algoritmos->Items->Add(nomeArquivo);
		};
	}

	private: System::Void criaStringFiltro() {
		strFiltroExtAceitas += "(";
		for each (String ^ ext in ext_aceitas)
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

	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		Directory::CreateDirectory("./algoritmos");

		this->atualizarListaAlgoritmos();
		lb_algoritmos->SelectionMode = SelectionMode::MultiExtended;
		ext_aceitas = gcnew array<String^ >{".txt", ".pdf"};
		criaStringFiltro();
	}
};
}
