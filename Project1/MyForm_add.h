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
			dataGridView1->Columns[0]->Width = 100;
			AcceptButton = btn_ok;
			dataGridView1->RowCount = 1;
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Column1;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_ok
			// 
			this->btn_ok->Location = System::Drawing::Point(12, 275);
			this->btn_ok->Name = L"btn_ok";
			this->btn_ok->Size = System::Drawing::Size(161, 33);
			this->btn_ok->TabIndex = 0;
			this->btn_ok->Text = L"Подтвердить";
			this->btn_ok->UseVisualStyleBackColor = true;
			this->btn_ok->Click += gcnew System::EventHandler(this, &MyForm_add::btn_ok_Click);
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
			this->tb_Len->Location = System::Drawing::Point(12, 243);
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
			this->label4->Location = System::Drawing::Point(216, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Длительность";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(12, 79);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(198, 158);
			this->dataGridView1->TabIndex = 9;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Выбрать";
			this->Column1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Pagan", L"Folk", L"Funk", L"Stoner" });
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// MyForm_add
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(390, 320);
			this->Controls->Add(this->dataGridView1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
			if (dataGridView1[0, 0]->Value == nullptr)
				return "";
			return dataGridView1[0,0]->Value->ToString();
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
			dataGridView1[0,0]->Value = genre;
		}
		void SetLen(String^ len) {
			tb_Len->Text = len;
		}
	private: System::Void btn_ok_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		//dataGridView1->RowCount = 1;
	}
	};
}
