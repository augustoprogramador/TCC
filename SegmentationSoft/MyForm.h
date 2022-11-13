#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "Frm_Configuracoes.h"

namespace SegmentationSoft {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ sc_tela_principal;
	protected:

		protected:
		private: System::Windows::Forms::Label^ lbl_algoritmos;
		private: System::Windows::Forms::Label^ lbl_configs;
	private: System::Windows::Forms::Label^ lbl_imagem;

		private: System::Windows::Forms::Label^ lbl_execucao;
	private: System::Windows::Forms::Panel^ menu_ativo;
	private: System::Windows::Forms::Label^ label1;



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
			this->sc_tela_principal = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_configs = (gcnew System::Windows::Forms::Label());
			this->lbl_imagem = (gcnew System::Windows::Forms::Label());
			this->lbl_execucao = (gcnew System::Windows::Forms::Label());
			this->lbl_algoritmos = (gcnew System::Windows::Forms::Label());
			this->menu_ativo = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sc_tela_principal))->BeginInit();
			this->sc_tela_principal->Panel1->SuspendLayout();
			this->sc_tela_principal->Panel2->SuspendLayout();
			this->sc_tela_principal->SuspendLayout();
			this->SuspendLayout();
			// 
			// sc_tela_principal
			// 
			this->sc_tela_principal->Dock = System::Windows::Forms::DockStyle::Fill;
			this->sc_tela_principal->Location = System::Drawing::Point(0, 0);
			this->sc_tela_principal->Name = L"sc_tela_principal";
			// 
			// sc_tela_principal.Panel1
			// 
			this->sc_tela_principal->Panel1->Controls->Add(this->label1);
			this->sc_tela_principal->Panel1->Controls->Add(this->lbl_configs);
			this->sc_tela_principal->Panel1->Controls->Add(this->lbl_imagem);
			this->sc_tela_principal->Panel1->Controls->Add(this->lbl_execucao);
			this->sc_tela_principal->Panel1->Controls->Add(this->lbl_algoritmos);
			// 
			// sc_tela_principal.Panel2
			// 
			this->sc_tela_principal->Panel2->Controls->Add(this->menu_ativo);
			this->sc_tela_principal->Size = System::Drawing::Size(997, 655);
			this->sc_tela_principal->SplitterDistance = 316;
			this->sc_tela_principal->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(77, 243);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 24);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Resultado";
			this->label1->Visible = false;
			// 
			// lbl_configs
			// 
			this->lbl_configs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_configs->AutoSize = true;
			this->lbl_configs->BackColor = System::Drawing::SystemColors::Control;
			this->lbl_configs->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_configs->Location = System::Drawing::Point(77, 444);
			this->lbl_configs->Margin = System::Windows::Forms::Padding(0);
			this->lbl_configs->Name = L"lbl_configs";
			this->lbl_configs->Size = System::Drawing::Size(99, 24);
			this->lbl_configs->TabIndex = 4;
			this->lbl_configs->Text = L"Configs.";
			this->lbl_configs->Click += gcnew System::EventHandler(this, &MyForm::lbl_configs_Click);
			// 
			// lbl_imagem
			// 
			this->lbl_imagem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_imagem->AutoSize = true;
			this->lbl_imagem->BackColor = System::Drawing::SystemColors::Control;
			this->lbl_imagem->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_imagem->Location = System::Drawing::Point(77, 123);
			this->lbl_imagem->Margin = System::Windows::Forms::Padding(0);
			this->lbl_imagem->Name = L"lbl_imagem";
			this->lbl_imagem->Size = System::Drawing::Size(96, 24);
			this->lbl_imagem->TabIndex = 3;
			this->lbl_imagem->Text = L"Imagem";
			this->lbl_imagem->Click += gcnew System::EventHandler(this, &MyForm::lbl_imagem_Click);
			// 
			// lbl_execucao
			// 
			this->lbl_execucao->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_execucao->AutoSize = true;
			this->lbl_execucao->BackColor = System::Drawing::SystemColors::Control;
			this->lbl_execucao->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_execucao->Location = System::Drawing::Point(77, 182);
			this->lbl_execucao->Margin = System::Windows::Forms::Padding(0);
			this->lbl_execucao->Name = L"lbl_execucao";
			this->lbl_execucao->Size = System::Drawing::Size(114, 24);
			this->lbl_execucao->TabIndex = 2;
			this->lbl_execucao->Text = L"Execução";
			// 
			// lbl_algoritmos
			// 
			this->lbl_algoritmos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_algoritmos->AutoSize = true;
			this->lbl_algoritmos->BackColor = System::Drawing::SystemColors::Control;
			this->lbl_algoritmos->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_algoritmos->Location = System::Drawing::Point(77, 71);
			this->lbl_algoritmos->Margin = System::Windows::Forms::Padding(0);
			this->lbl_algoritmos->Name = L"lbl_algoritmos";
			this->lbl_algoritmos->Size = System::Drawing::Size(130, 24);
			this->lbl_algoritmos->TabIndex = 0;
			this->lbl_algoritmos->Text = L"Algoritmos";
			this->lbl_algoritmos->Click += gcnew System::EventHandler(this, &MyForm::lbl_algoritmos_Click);
			// 
			// menu_ativo
			// 
			this->menu_ativo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->menu_ativo->Location = System::Drawing::Point(0, 0);
			this->menu_ativo->Name = L"menu_ativo";
			this->menu_ativo->Size = System::Drawing::Size(677, 655);
			this->menu_ativo->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(997, 655);
			this->Controls->Add(this->sc_tela_principal);
			this->Name = L"MyForm";
			this->Text = L"Segmentation Soft";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->sc_tela_principal->Panel1->ResumeLayout(false);
			this->sc_tela_principal->Panel1->PerformLayout();
			this->sc_tela_principal->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sc_tela_principal))->EndInit();
			this->sc_tela_principal->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		#pragma endregion
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void lbl_imagem_Click(System::Object^ sender, System::EventArgs^ e) {
			MyForm1^ form = gcnew MyForm1();
			menu_ativo->Controls->Clear();
			form->TopLevel = false;
			menu_ativo->Controls->Add(form);
			form->Height = sc_tela_principal->Panel2->Height;
			form->Show();
		}

		private: System::Void lbl_algoritmos_Click(System::Object^ sender, System::EventArgs^ e) {
			MyForm2^ form = gcnew MyForm2();
			menu_ativo->Controls->Clear();
			form->TopLevel = false;
			menu_ativo->Controls->Add(form);
			form->Height = sc_tela_principal->Panel2->Height;
			form->Show();
		}
		private: System::Void lbl_configs_Click(System::Object^ sender, System::EventArgs^ e) {
			Frm_Configuracoes^ form = gcnew Frm_Configuracoes();
			menu_ativo->Controls->Clear();
			form->TopLevel = false;
			menu_ativo->Controls->Add(form);
			form->Height = sc_tela_principal->Panel2->Height;
			form->Show();
		}
	};
}
