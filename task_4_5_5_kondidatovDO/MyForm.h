#pragma once
#include "animals.h"
#include <vcclr.h>


namespace task455kondidatovDO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	bool first_start = 1;
	
	int cows_count = 30 + rand() % 40;
	int goats_count = 10 + rand() % 30;
	int sheeps_count = 20 + rand() % 50;

	//gcroot<array<Custom::Cow^>^> cows = gcnew array<Custom::Cow^>(cows_count);
	gcroot<array<Custom::Cow^>^> cows;
	gcroot<array<Custom::Goat^>^> goats;
	gcroot<array<Custom::Sheep^>^> sheeps;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 39);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(255, 344);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(247, 318);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Cows";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(1, 1);
			this->listBox1->MultiColumn = true;
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(245, 316);
			this->listBox1->TabIndex = 1;
			this->listBox1->DoubleClick += gcnew System::EventHandler(this, &MyForm::listBox1_DoubleClick);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(247, 318);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Goats";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(1, 1);
			this->listBox2->MultiColumn = true;
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(245, 316);
			this->listBox2->TabIndex = 2;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(247, 318);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Sheeps";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(1, 1);
			this->listBox3->MultiColumn = true;
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(245, 316);
			this->listBox3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(271, 326);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 56);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(271, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Info";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(272, 81);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(140, 239);
			this->textBox1->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(754, 395);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first_start) {
			cows = gcnew array<Custom::Cow^>(cows_count);
			//array<Custom::Cow^>^ animals = gcnew array<Custom::Cow^>(array_size);
			for (int i = 0; i < cows_count; i++)
			{
				cows[i] = gcnew Custom::Cow();
				listBox1->Items->Add(cows[i]->describe());
			}
			goats = gcnew array<Custom::Goat^>(goats_count);
			for (int i = 0; i < goats_count; i++)
			{
				goats[i] = gcnew Custom::Goat();
				listBox2->Items->Add(goats[i]->describe());
			}
			sheeps = gcnew array<Custom::Sheep^>(sheeps_count);
			for (int i = 0; i < sheeps_count; i++)
			{
				sheeps[i] = gcnew Custom::Sheep();
				listBox3->Items->Add(sheeps[i]->describe());
			}
			first_start = false;
		}
	}
	private: System::Void listBox1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String ^from_listbox = gcnew String(listBox1->SelectedItem->ToString());
		
		array<String^>^ temp = from_listbox->Split('[', ']');
		int i = (Convert::ToInt32(temp[1]) - 1);

		textBox1->Text = "Kind: " + cows[i]->get_kind() + "\r\n"
			+ "ID: " + cows[i]->get_id() + "\r\n"
			+ "Age: " + cows [i]->get_age() + "\r\n"
			+ "Productivity: " + cows[i]->get_productivity() + "\r\n"
			+ "Income: " + cows[i]->get_income() + "\r\n";
	}
	private: System::Void listBox2_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ from_listbox = gcnew String(listBox2->SelectedItem->ToString());

		array<String^>^ temp = from_listbox->Split('[', ']');
		int i = (Convert::ToInt32(temp[1]) - 1);

		textBox1->Text = "Kind: " + goats[i]->get_kind() + "\r\n"
			+ "ID: " + goats[i]->get_id() + "\r\n"
			+ "Age: " + goats[i]->get_age() + "\r\n"
			+ "Productivity: " + goats[i]->get_productivity() + "\r\n"
			+ "Income: " + goats[i]->get_income() + "\r\n";
	}
	private: System::Void listBox3_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ from_listbox = gcnew String(listBox3->SelectedItem->ToString());

		array<String^>^ temp = from_listbox->Split('[', ']');
		int i = (Convert::ToInt32(temp[1]) - 1);

		textBox1->Text = "Kind: " + sheeps[i]->get_kind() + "\r\n"
			+ "ID: " + sheeps[i]->get_id() + "\r\n"
			+ "Age: " + sheeps[i]->get_age() + "\r\n"
			+ "Productivity: " + sheeps[i]->get_productivity() + "\r\n"
			+ "Income: " + sheeps[i]->get_income() + "\r\n";
	}

};
}
