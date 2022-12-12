#pragma once

namespace SegmentationSoft {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para Frm_Execucao
	/// </summary>
	public ref class Frm_Execucao : public System::Windows::Forms::Form
	{
	public:
		Frm_Execucao(void)
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
		~Frm_Execucao()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox2;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(264, 334);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 45);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Executar";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::Color::AliceBlue;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(67, 78);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(247, 154);
			this->checkedListBox1->TabIndex = 3;
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->BackColor = System::Drawing::Color::AliceBlue;
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Location = System::Drawing::Point(372, 78);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(247, 154);
			this->checkedListBox2->TabIndex = 4;
			// 
			// Frm_Execucao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->ClientSize = System::Drawing::Size(1029, 607);
			this->Controls->Add(this->checkedListBox2);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Frm_Execucao";
			this->Text = L"Frm_Execucao";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
