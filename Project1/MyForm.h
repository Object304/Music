#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <fstream>
#include <iostream>
#include <locale>
#include <Windows.h>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <cctype>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			dgv->AllowUserToDeleteRows = true;
			dgv->RowCount = 1;
			//lst = createlist<song>();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}







	private: System::Windows::Forms::Button^ btn_append;











	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_search;
	private: System::Windows::Forms::Button^ btn_sort;



	private: System::Windows::Forms::DataGridView^ dgv;




	private: System::Windows::Forms::Button^ btn_addat;




	private: System::Windows::Forms::TextBox^ tbFind;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ ofdOpen;
	private: System::Windows::Forms::SaveFileDialog^ sfdSave;




	private: System::Windows::Forms::Button^ btn_autoFill;
	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ clnName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Singer;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Genre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Len;






























	protected:

	protected:

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_append = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->btn_sort = (gcnew System::Windows::Forms::Button());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->btn_addat = (gcnew System::Windows::Forms::Button());
			this->tbFind = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ofdOpen = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfdSave = (gcnew System::Windows::Forms::SaveFileDialog());
			this->btn_autoFill = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->clnName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Singer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Genre = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Len = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_append
			// 
			this->btn_append->Location = System::Drawing::Point(1017, 74);
			this->btn_append->Name = L"btn_append";
			this->btn_append->Size = System::Drawing::Size(257, 35);
			this->btn_append->TabIndex = 6;
			this->btn_append->Text = L"�������� � �����";
			this->btn_append->UseVisualStyleBackColor = true;
			this->btn_append->Click += gcnew System::EventHandler(this, &MyForm::btn_append_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(1017, 156);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(257, 35);
			this->btn_delete->TabIndex = 18;
			this->btn_delete->Text = L"������� �����.";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// btn_search
			// 
			this->btn_search->Location = System::Drawing::Point(1017, 238);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(257, 35);
			this->btn_search->TabIndex = 19;
			this->btn_search->Text = L"����� �� �����������";
			this->btn_search->UseVisualStyleBackColor = true;
			this->btn_search->Click += gcnew System::EventHandler(this, &MyForm::btn_search_Click);
			// 
			// btn_sort
			// 
			this->btn_sort->Location = System::Drawing::Point(1017, 197);
			this->btn_sort->Name = L"btn_sort";
			this->btn_sort->Size = System::Drawing::Size(257, 35);
			this->btn_sort->TabIndex = 20;
			this->btn_sort->Text = L"���������� �� ������������";
			this->btn_sort->UseVisualStyleBackColor = true;
			this->btn_sort->Click += gcnew System::EventHandler(this, &MyForm::btn_sort_Click);
			// 
			// dgv
			// 
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->clnName, this->Singer,
					this->Genre, this->Len
			});
			this->dgv->Location = System::Drawing::Point(12, 74);
			this->dgv->Name = L"dgv";
			this->dgv->RowHeadersWidth = 62;
			this->dgv->RowTemplate->Height = 28;
			this->dgv->Size = System::Drawing::Size(999, 469);
			this->dgv->TabIndex = 24;
			// 
			// btn_addat
			// 
			this->btn_addat->Location = System::Drawing::Point(1017, 115);
			this->btn_addat->Name = L"btn_addat";
			this->btn_addat->Size = System::Drawing::Size(257, 35);
			this->btn_addat->TabIndex = 15;
			this->btn_addat->Text = L"�������� ����� �����.";
			this->btn_addat->UseVisualStyleBackColor = true;
			this->btn_addat->Click += gcnew System::EventHandler(this, &MyForm::btn_addat_Click);
			// 
			// tbFind
			// 
			this->tbFind->Location = System::Drawing::Point(1017, 279);
			this->tbFind->Name = L"tbFind";
			this->tbFind->Size = System::Drawing::Size(257, 26);
			this->tbFind->TabIndex = 25;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1405, 33);
			this->menuStrip1->TabIndex = 26;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�������ToolStripMenuItem,
					this->���������ToolStripMenuItem, this->������������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(69, 29);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(232, 34);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(232, 34);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(232, 34);
			this->������������ToolStripMenuItem->Text = L"��������� ���";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(232, 34);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// ofdOpen
			// 
			this->ofdOpen->DefaultExt = L"dat";
			this->ofdOpen->FileName = L"MyFile";
			// 
			// sfdSave
			// 
			this->sfdSave->DefaultExt = L"dat";
			this->sfdSave->FileName = L"MyFile";
			this->sfdSave->InitialDirectory = L"C:\\Users\\Zhon1\\Desktop\\�����";
			// 
			// btn_autoFill
			// 
			this->btn_autoFill->Location = System::Drawing::Point(1017, 517);
			this->btn_autoFill->Name = L"btn_autoFill";
			this->btn_autoFill->Size = System::Drawing::Size(257, 26);
			this->btn_autoFill->TabIndex = 27;
			this->btn_autoFill->Text = L"��������������";
			this->btn_autoFill->UseVisualStyleBackColor = true;
			this->btn_autoFill->Click += gcnew System::EventHandler(this, &MyForm::btn_autoFill_Click);
			// 
			// btn_clear
			// 
			this->btn_clear->Location = System::Drawing::Point(1017, 311);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(257, 26);
			this->btn_clear->TabIndex = 28;
			this->btn_clear->Text = L"�������";
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &MyForm::btn_clear_Click);
			// 
			// clnName
			// 
			this->clnName->HeaderText = L"��������";
			this->clnName->MinimumWidth = 8;
			this->clnName->Name = L"clnName";
			this->clnName->Width = 150;
			// 
			// Singer
			// 
			this->Singer->HeaderText = L"�����������";
			this->Singer->MinimumWidth = 8;
			this->Singer->Name = L"Singer";
			this->Singer->Width = 150;
			// 
			// Genre
			// 
			this->Genre->HeaderText = L"����";
			this->Genre->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Pagan", L"Funk", L"Stoner", L"Folk" });
			this->Genre->MinimumWidth = 8;
			this->Genre->Name = L"Genre";
			this->Genre->Width = 150;
			// 
			// Len
			// 
			this->Len->HeaderText = L"������������";
			this->Len->MinimumWidth = 8;
			this->Len->Name = L"Len";
			this->Len->Width = 150;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1405, 555);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->btn_autoFill);
			this->Controls->Add(this->tbFind);
			this->Controls->Add(this->dgv);
			this->Controls->Add(this->btn_sort);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_addat);
			this->Controls->Add(this->btn_append);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:

	private: System::Void btn_append_Click(System::Object^ sender, System::EventArgs^ e) {
		dgv->RowCount++;
	}
	private: System::Void btn_addat_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < dgv->RowCount; i++) {
			if (dgv->Rows[i]->Selected == true) {
				dgv->Rows->Insert(i);
				return;
			}
		}
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		while (0 < dgv->SelectedRows->Count) {
			if (dgv->SelectedRows[0]->Index < dgv->RowCount - 1) {
				dgv->Rows->RemoveAt(dgv->SelectedRows[0]->Index);
				continue;
			}
			break;
		}
	}
	private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
		int num = 0;
		String^ nameone = tbFind->Text;
		String^ s = "���������� ������:" + "\n";
		bool ok = true;
		for (int i = 0; i < dgv->RowCount - 1; i++) {
			if (nameone == dgv[1, i]->Value->ToString()) {
				s += num + ". " + dgv[0, i]->Value->ToString() + " " + dgv[1, i]->Value->ToString() + " " + dgv[2, i]->Value->ToString() + " " + dgv[3, i]->Value->ToString() + "\n";
				ok = false;
			}
			num++;
		}
		if (ok)
			s = "����� ����������� �� ������.";
		MessageBox::Show(s);
	}
	private: System::Void btn_sort_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = dgv->RowCount - 1; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				if (Convert::ToSingle(dgv[3, j]->Value) < Convert::ToSingle(dgv[3, j + 1]->Value)) {
					for (int k = 0; k < 4; k++) {
						auto temp = dgv[k, j]->Value;
						dgv[k, j]->Value = dgv[k, j + 1]->Value;
						dgv[k, j + 1]->Value = temp;
					}
				}
			}
		}
	}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ofdOpen->ShowDialog() == Windows::Forms::DialogResult::OK) {
			MessageBox::Show("�� �������: " + ofdOpen->FileName); // ������ ������� ������ �������� ��� �����. 
		}
		char* name = (char*)(void*)Marshal::StringToHGlobalAnsi(ofdOpen->FileName);
		std::ifstream in (name);
		if (!in)
			MessageBox::Show("�� ������� ������� ���� " + ofdOpen->FileName + " ��� ������");
		else {
			btn_clear_Click(sender, e);
			char* val = new char[255];
			for (int i = 0; in.eof() == false; i++) {
				btn_append_Click(sender, e);
				for (int j = 0; j < 4 && (in.getline(val, sizeof(val))); j++) {
					String^ str = gcnew String(val);
					/*if (val != nullptr)*/
					dgv[j, i]->Value = str;
				}
			}
			delete[] val;
			dgv->RowCount--;
		}
		in.close();

	}
	private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (sfdSave->ShowDialog() == Windows::Forms::DialogResult::OK) {
			MessageBox::Show("�� �������: " + sfdSave->FileName);
		}
		/*String^ s = sfdSave->FileName;
		char* name = (char*)(void*)Marshal::StringToHGlobalAnsi(s);
		strcat(name, "\0");*/

		FILE* fLog;
		fLog = fopen((char*)(void*)Marshal::StringToHGlobalAnsi(sfdSave->FileName), "w");
		for (int i = 0; i < dgv->RowCount - 1; i++) {
			String^ name = "";
			String^ singer = "";
			String^ genre = "";
			String^ len = "";
			if (dgv[0, i]->Value != nullptr)
				name = dgv[0, i]->Value->ToString();
			if (dgv[1, i]->Value != nullptr)
				singer = dgv[1, i]->Value->ToString();
			if (dgv[2, i]->Value != nullptr)
				genre = dgv[2, i]->Value->ToString();
			if (dgv[3, i]->Value != nullptr)
				len = dgv[3, i]->Value->ToString();
			fprintf(fLog, "%s\n%s\n%s\n%s\n", name, singer, genre, len);
		}
		fclose(fLog);

		/*std::ofstream out (name, std::ios::binary);
		if (!out)
			MessageBox::Show("�� ������� ������� ���� " + sfdSave->FileName + " ��� ������");
		else {
			for (int i = 0; i < dgv->RowCount - 1; i++) {
				for (int j = 0; j < 4; j++) {
					char* val = "";
					if (dgv[j, i]->Value != nullptr)
						val = ((char*)(void*)Marshal::StringToHGlobalAnsi(dgv[j, i]->Value->ToString()));
					out.write((char*)& val, sizeof(val));
				}
			}
		}
		out.close();*/

	}
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void btn_autoFill_Click(System::Object^ sender, System::EventArgs^ e) {
		btn_append_Click(sender, e);
		btn_append_Click(sender, e);
		btn_append_Click(sender, e);
		btn_append_Click(sender, e);

	}
private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0, j = dgv->RowCount - 1; i < j; i++) {
		dgv->Rows->RemoveAt(dgv->Rows[0]->Index);
	}
}
};
}
