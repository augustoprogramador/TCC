#pragma once
#include "Frm_Imagem.h"
#include "Frm_Algoritmos.h"
#include "Frm_Configuracoes.h"
#include "Frm_Execucao.h"

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
	public ref class Frm_Principal : public System::Windows::Forms::Form
	{
		public:
		Frm_Principal(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

		protected:
		~Frm_Principal()
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
	private: System::Windows::Forms::Label^ lbl_resultado;




		private:
			Frm_Configuracoes^ form = nullptr;
		System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->sc_tela_principal = (gcnew System::Windows::Forms::SplitContainer());
			this->lbl_resultado = (gcnew System::Windows::Forms::Label());
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
			this->sc_tela_principal->Panel1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->sc_tela_principal->Panel1->Controls->Add(this->lbl_resultado);
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
			// lbl_resultado
			// 
			this->lbl_resultado->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_resultado->AutoSize = true;
			this->lbl_resultado->BackColor = System::Drawing::Color::White;
			this->lbl_resultado->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_resultado->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_resultado->Location = System::Drawing::Point(77, 243);
			this->lbl_resultado->Margin = System::Windows::Forms::Padding(0);
			this->lbl_resultado->Name = L"lbl_resultado";
			this->lbl_resultado->Size = System::Drawing::Size(105, 28);
			this->lbl_resultado->TabIndex = 5;
			this->lbl_resultado->Text = L"Resultado";
			this->lbl_resultado->Visible = false;
			// 
			// lbl_configs
			// 
			this->lbl_configs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_configs->AutoSize = true;
			this->lbl_configs->BackColor = System::Drawing::Color::White;
			this->lbl_configs->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_configs->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_configs->Location = System::Drawing::Point(77, 444);
			this->lbl_configs->Margin = System::Windows::Forms::Padding(0);
			this->lbl_configs->Name = L"lbl_configs";
			this->lbl_configs->Size = System::Drawing::Size(88, 28);
			this->lbl_configs->TabIndex = 4;
			this->lbl_configs->Text = L"Configs.";
			this->lbl_configs->Click += gcnew System::EventHandler(this, &Frm_Principal::lbl_configs_Click);
			// 
			// lbl_imagem
			// 
			this->lbl_imagem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_imagem->AutoSize = true;
			this->lbl_imagem->BackColor = System::Drawing::Color::White;
			this->lbl_imagem->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_imagem->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_imagem->Location = System::Drawing::Point(77, 123);
			this->lbl_imagem->Margin = System::Windows::Forms::Padding(0);
			this->lbl_imagem->Name = L"lbl_imagem";
			this->lbl_imagem->Size = System::Drawing::Size(87, 28);
			this->lbl_imagem->TabIndex = 3;
			this->lbl_imagem->Text = L"Imagem";
			this->lbl_imagem->Click += gcnew System::EventHandler(this, &Frm_Principal::lbl_imagem_Click);
			// 
			// lbl_execucao
			// 
			this->lbl_execucao->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_execucao->AutoSize = true;
			this->lbl_execucao->BackColor = System::Drawing::Color::White;
			this->lbl_execucao->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_execucao->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_execucao->Location = System::Drawing::Point(77, 182);
			this->lbl_execucao->Margin = System::Windows::Forms::Padding(0);
			this->lbl_execucao->Name = L"lbl_execucao";
			this->lbl_execucao->Size = System::Drawing::Size(98, 28);
			this->lbl_execucao->TabIndex = 2;
			this->lbl_execucao->Text = L"Execução";
			this->lbl_execucao->Click += gcnew System::EventHandler(this, &Frm_Principal::lbl_execucao_Click);
			// 
			// lbl_algoritmos
			// 
			this->lbl_algoritmos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_algoritmos->AutoSize = true;
			this->lbl_algoritmos->BackColor = System::Drawing::Color::White;
			this->lbl_algoritmos->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_algoritmos->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_algoritmos->Location = System::Drawing::Point(77, 71);
			this->lbl_algoritmos->Margin = System::Windows::Forms::Padding(0);
			this->lbl_algoritmos->Name = L"lbl_algoritmos";
			this->lbl_algoritmos->Size = System::Drawing::Size(115, 28);
			this->lbl_algoritmos->TabIndex = 0;
			this->lbl_algoritmos->Text = L"Algoritmos";
			this->lbl_algoritmos->Click += gcnew System::EventHandler(this, &Frm_Principal::lbl_algoritmos_Click);
			// 
			// menu_ativo
			// 
			this->menu_ativo->BackColor = System::Drawing::Color::AliceBlue;
			this->menu_ativo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->menu_ativo->Location = System::Drawing::Point(0, 0);
			this->menu_ativo->Name = L"menu_ativo";
			this->menu_ativo->Size = System::Drawing::Size(677, 655);
			this->menu_ativo->TabIndex = 0;
			// 
			// Frm_Principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(997, 655);
			this->Controls->Add(this->sc_tela_principal);
			this->Name = L"Frm_Principal";
			this->Text = L"Segmentation Soft";
			this->Load += gcnew System::EventHandler(this, &Frm_Principal::MyForm_Load);
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
			Frm_Imagem^ form = gcnew Frm_Imagem();
			menu_ativo->Controls->Clear();
			form->TopLevel = false;
			menu_ativo->Controls->Add(form);
			form->Height = sc_tela_principal->Panel2->Height;
			form->Show();
		}

		private: System::Void lbl_algoritmos_Click(System::Object^ sender, System::EventArgs^ e) {
			Frm_Algoritmos^ form = gcnew Frm_Algoritmos();
			menu_ativo->Controls->Clear();
			form->TopLevel = false;
			menu_ativo->Controls->Add(form);
			form->Height = sc_tela_principal->Panel2->Height;
			form->Show();
		}
		private: System::Void lbl_configs_Click(System::Object^ sender, System::EventArgs^ e) {
			if (form == nullptr) {
				form = gcnew Frm_Configuracoes();
			}
			menu_ativo->Controls->Clear();
			form->TopLevel = false;
			menu_ativo->Controls->Add(form);
			form->Height = sc_tela_principal->Panel2->Height;
			form->Show();
		}
		private: System::Void lbl_execucao_Click(System::Object^ sender, System::EventArgs^ e) {
			Frm_Execucao^ form = gcnew Frm_Execucao();
			menu_ativo->Controls->Clear();
			form->TopLevel = false;
			menu_ativo->Controls->Add(form);
			form->Height = sc_tela_principal->Panel2->Height;
			form->Show();
		}
	};
}
