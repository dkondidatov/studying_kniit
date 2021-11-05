#pragma once
#include "animals.h"
#include <vcclr.h>
#include <cliext/map>


namespace task455kondidatovDO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	bool first_start = 1;
	bool new_month = true;
	bool in_shop = false;

	int cows_in_shop_count = 5 + rand() % 5;
	int goats_in_shop_count = 5 + rand() % 5;
	int sheeps_in_shop_count = 5 + rand() % 5;

	int cows_my_own_count = 0;
	int goats_my_own_count = 0;
	int	sheeps_my_own_count = 0;


	//gcroot<array<Custom::Cow^>^> cows = gcnew array<Custom::Cow^>(cows_count);
	gcroot<array<Custom::Cow^>^> cows_in_shop;
	gcroot<array<Custom::Goat^>^> goats_in_shop;
	gcroot<array<Custom::Sheep^>^> sheeps_in_shop;

	gcroot<array<Custom::Cow^>^> cows_my_own;
	gcroot<array<Custom::Goat^>^> goats_my_own;
	gcroot<array<Custom::Sheep^>^> sheeps_my_own;


	//typedef iterator;
	//typedef cliext::map<int, Custom::Cow^>^ Cows_map;
	//gcroot<Cows_map> cows;
	gcroot<cliext::map<int, Custom::Cow^>^> cows;


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

	protected:

	protected:

	protected:






	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::ListBox^ listBox4;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(602, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 41);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(269, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Info";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(272, 60);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(320, 323);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(639, 10);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(106, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(598, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Money";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(602, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 41);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Shop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(601, 342);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 41);
			this->button3->TabIndex = 7;
			this->button3->Text = L"End Month";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(486, 10);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(106, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(350, 10);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(106, 20);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(214, 10);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(106, 20);
			this->textBox5->TabIndex = 10;
			this->textBox5->Text = L"0";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(188, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(25, 20);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(324, 10);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(25, 20);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(460, 10);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(25, 20);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 13;
			this->pictureBox3->TabStop = false;
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
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(12, 60);
			this->listBox4->MultiColumn = true;
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(252, 316);
			this->listBox4->TabIndex = 3;
			this->listBox4->DoubleClick += gcnew System::EventHandler(this, &MyForm::listBox4_DoubleClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(754, 395);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first_start) {
		//	Cows_map< cows;
			//array<Custom::Cow^>^ animals = gcnew array<Custom::Cow^>(array_size);
			

			for (int i = 0; i < 10; i++)
			{
				Custom::Cow ^cow_temp = gcnew Custom::Cow();
				cows->make_value(Custom::cow_id, cow_temp);
			}
			
			

			
		//	goats = gcnew array<Custom::Goat^>(goats_count);
		//	for (int i = 0; i < goats_count; i++)
		//	{
		//		goats[i] = gcnew Custom::Goat();
		//		listBox2->Items->Add(goats[i]->describe());
		//	}
		//	sheeps = gcnew array<Custom::Sheep^>(sheeps_count);
		//	for (int i = 0; i < sheeps_count; i++)
		//	{
		//		sheeps[i] = gcnew Custom::Sheep();
		//		listBox3->Items->Add(sheeps[i]->describe());
		//	}
		//	first_start = false;
		}
	}
	private: System::Void listBox1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ from_listbox = gcnew String(listBox1->SelectedItem->ToString());

		array<String^>^ temp = from_listbox->Split('[', ']');
		int i = (Convert::ToInt32(temp[1]) - 1);

		textBox1->Text = "Kind: " + cows_my_own[i]->get_kind() + "\r\n"
			+ "ID: " + cows_my_own[i]->get_id() + "\r\n"
			+ "Age: " + cows_my_own[i]->get_age() + "\r\n"
			+ "Productivity: " + cows_my_own[i]->get_productivity() + "\r\n"
			+ "Income: " + cows_my_own[i]->get_income() + "\r\n";
	}
	private: System::Void listBox2_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ from_listbox = gcnew String(listBox2->SelectedItem->ToString());

		array<String^>^ temp = from_listbox->Split('[', ']');
		int i = (Convert::ToInt32(temp[1]) - 1);

		textBox1->Text = "Kind: " + goats_my_own[i]->get_kind() + "\r\n"
			+ "ID: " + goats_my_own[i]->get_id() + "\r\n"
			+ "Age: " + goats_my_own[i]->get_age() + "\r\n"
			+ "Productivity: " + goats_my_own[i]->get_productivity() + "\r\n"
			+ "Income: " + goats_my_own[i]->get_income() + "\r\n";
	}
	private: System::Void listBox3_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ from_listbox = gcnew String(listBox3->SelectedItem->ToString());

		array<String^>^ temp = from_listbox->Split('[', ']');
		int i = (Convert::ToInt32(temp[1]) - 1);

		textBox1->Text = "Kind: " + sheeps_my_own[i]->get_kind() + "\r\n"
			+ "ID: " + sheeps_my_own[i]->get_id() + "\r\n"
			+ "Age: " + sheeps_my_own[i]->get_age() + "\r\n"
			+ "Productivity: " + sheeps_my_own[i]->get_productivity() + "\r\n"
			+ "Income: " + sheeps_my_own[i]->get_income() + "\r\n";
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!in_shop) {
			listBox4->Visible = true;
			tabControl1->Visible = false;
			button2->Text = "Home";
			in_shop = true;


			textBox1->Text = "You entered in the Shop. You can buy some animals here.\r\n";
			if (new_month) {
				cows_in_shop = gcnew array<Custom::Cow^>(cows_in_shop_count);
				//array<Custom::Cow^>^ animals = gcnew array<Custom::Cow^>(array_size);
				for (int i = 0; i < cows_in_shop_count; i++)
				{
					cows_in_shop[i] = gcnew Custom::Cow();
					listBox4->Items->Add(cows_in_shop[i]->describe());
				}
				goats_in_shop = gcnew array<Custom::Goat^>(cows_in_shop_count);
				for (int i = 0; i < cows_in_shop_count; i++)
				{
					goats_in_shop[i] = gcnew Custom::Goat();
					listBox4->Items->Add(goats_in_shop[i]->describe());
				}
				sheeps_in_shop = gcnew array<Custom::Sheep^>(cows_in_shop_count);
				for (int i = 0; i < cows_in_shop_count; i++)
				{
					sheeps_in_shop[i] = gcnew Custom::Sheep();
					listBox4->Items->Add(sheeps_in_shop[i]->describe());
				}
			}
		}
		else {
			button2->Text = "Shop";
			tabControl1->Visible = true;
			listBox4->Visible = false;
			in_shop = false;
			textBox1->Text = "You are on your farm.\r\n";

		}
	}
	private: System::Void listBox4_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ from_listbox = gcnew String(listBox4->SelectedItem->ToString());

		array<String^>^ temp = from_listbox->Split('[', ']');
		int i = (Convert::ToInt32(temp[1]) - 1);

		/*textBox1->Text = "Kind: " + sheeps_my_own[i]->get_kind() + "\r\n"
			+ "ID: " + sheeps_my_own[i]->get_id() + "\r\n"
			+ "Age: " + sheeps_my_own[i]->get_age() + "\r\n"
			+ "Productivity: " + sheeps_my_own[i]->get_productivity() + "\r\n"
			+ "Income: " + sheeps_my_own[i]->get_income() + "\r\n";*/
		textBox1->Text = temp[0];
	}
	private: System::Void tabControl1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
