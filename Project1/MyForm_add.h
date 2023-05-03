#pragma once
//#include "MyForm.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm_add
	/// </summary>
	public ref class MyForm_add : public System::Windows::Forms::Form
	{
	public:
		MyForm_add(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			btn_ok->DialogResult = Windows::Forms::DialogResult::OK;
			btnCancel->DialogResult = Windows::Forms::DialogResult::Cancel;
			//dlg_Main = gcnew MyForm();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm_add()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_ok;
	private: System::Windows::Forms::TextBox^ tb_Name;
	private: System::Windows::Forms::TextBox^ tb_Author;

	private: System::Windows::Forms::TextBox^ tb_Len;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cb;
	private: System::Windows::Forms::Button^ btnCancel;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_ok = (gcnew System::Windows::Forms::Button());
			this->tb_Name = (gcnew System::Windows::Forms::TextBox());
			this->tb_Author = (gcnew System::Windows::Forms::TextBox());
			this->tb_Len = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cb = (gcnew System::Windows::Forms::ComboBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_ok
			// 
			this->btn_ok->Location = System::Drawing::Point(12, 163);
			this->btn_ok->Name = L"btn_ok";
			this->btn_ok->Size = System::Drawing::Size(161, 55);
			this->btn_ok->TabIndex = 0;
			this->btn_ok->Text = L"Подтвердить";
			this->btn_ok->UseVisualStyleBackColor = true;
			// 
			// tb_Name
			// 
			this->tb_Name->Location = System::Drawing::Point(12, 12);
			this->tb_Name->Name = L"tb_Name";
			this->tb_Name->Size = System::Drawing::Size(198, 26);
			this->tb_Name->TabIndex = 1;
			// 
			// tb_Author
			// 
			this->tb_Author->Location = System::Drawing::Point(12, 44);
			this->tb_Author->Name = L"tb_Author";
			this->tb_Author->Size = System::Drawing::Size(198, 26);
			this->tb_Author->TabIndex = 2;
			// 
			// tb_Len
			// 
			this->tb_Len->Location = System::Drawing::Point(12, 110);
			this->tb_Len->Name = L"tb_Len";
			this->tb_Len->Size = System::Drawing::Size(198, 26);
			this->tb_Len->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(216, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Название";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(216, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Исполнитель";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(216, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Жанр";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(216, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Длительность";
			// 
			// cb
			// 
			this->cb->FormattingEnabled = true;
			this->cb->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Pagan", L"Folk", L"Funk", L"Stoner" });
			this->cb->Location = System::Drawing::Point(12, 76);
			this->cb->Name = L"cb";
			this->cb->Size = System::Drawing::Size(198, 28);
			this->cb->TabIndex = 10;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(179, 163);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(161, 55);
			this->btnCancel->TabIndex = 11;
			this->btnCancel->Text = L"Отмена";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// MyForm_add
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(390, 249);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->cb);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb_Len);
			this->Controls->Add(this->tb_Author);
			this->Controls->Add(this->tb_Name);
			this->Controls->Add(this->btn_ok);
			this->Name = L"MyForm_add";
			this->Text = L"MyForm_add";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//MyForm^ dlg_Main;
		public:
		String^ GetName() {
			if (tb_Name->Text == nullptr)
				return "";
			return tb_Name->Text;
		}
		String^ GetAuthor() {
			if (tb_Author->Text == nullptr)
				return "";
			return tb_Author->Text;
		}
		String^ GetGenre() {
			if (cb->Text == nullptr)
				return "";
			return cb->Text;
		}
		String^ GetLen() {
			if (tb_Len->Text == nullptr)
				return "";
			return tb_Len->Text;
		}
		void SetName(String^ name) {
			tb_Name->Text = name;
		}
		void SetAuthor(String^ author) {
			tb_Author->Text = author;
		}
		void SetGenre(String^ genre) {
			cb->Text = genre;
		}
		void SetLen(String^ len) {
			tb_Len->Text = len;
		}
	private: System::Void btn_ok_Click(System::Object^ sender, System::EventArgs^ e) {
		SetName("");
		SetAuthor("");
		SetGenre("");
		SetLen("");
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		SetName("");
		SetAuthor("");
		SetGenre("");
		SetLen("");
	}
};
}
