#pragma once
#include "Procedures.h"

namespace Practicet53 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int row_value = 0;

	/// <summary>
	/// Summary for Practice_t5_3
	/// </summary>
	public ref class Practice_t5_3 : public System::Windows::Forms::Form
	{
	public:
		Practice_t5_3(void)
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
		~Practice_t5_3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_first;
	protected:
	private: System::Windows::Forms::DataGridView^ dgv_second;
	private: System::Windows::Forms::Button^ btn_add_columns;
	private: System::Windows::Forms::Button^ btn_delete_columns;
	private: System::Windows::Forms::Button^ btn_delete_rows;
	private: System::Windows::Forms::Button^ btn_add_rows;
	private: System::Windows::Forms::Button^ btn_execute;
	private: System::Windows::Forms::TextBox^ txtb_result;
	private: System::Windows::Forms::TextBox^ txtb_add_columns;
	private: System::Windows::Forms::TextBox^ txtb_delete_columns;
	private: System::Windows::Forms::TextBox^ txtb_add_rows;
	private: System::Windows::Forms::TextBox^ txtb_delete_rows;
	private: System::Windows::Forms::Button^ btn_reset;

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
			this->dgv_first = (gcnew System::Windows::Forms::DataGridView());
			this->dgv_second = (gcnew System::Windows::Forms::DataGridView());
			this->btn_add_columns = (gcnew System::Windows::Forms::Button());
			this->btn_delete_columns = (gcnew System::Windows::Forms::Button());
			this->btn_delete_rows = (gcnew System::Windows::Forms::Button());
			this->btn_add_rows = (gcnew System::Windows::Forms::Button());
			this->btn_execute = (gcnew System::Windows::Forms::Button());
			this->txtb_result = (gcnew System::Windows::Forms::TextBox());
			this->txtb_add_columns = (gcnew System::Windows::Forms::TextBox());
			this->txtb_delete_columns = (gcnew System::Windows::Forms::TextBox());
			this->txtb_add_rows = (gcnew System::Windows::Forms::TextBox());
			this->txtb_delete_rows = (gcnew System::Windows::Forms::TextBox());
			this->btn_reset = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_first))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_second))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_first
			// 
			this->dgv_first->AllowUserToAddRows = false;
			this->dgv_first->AllowUserToDeleteRows = false;
			this->dgv_first->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_first->Location = System::Drawing::Point(9, 10);
			this->dgv_first->MultiSelect = false;
			this->dgv_first->Name = L"dgv_first";
			this->dgv_first->Size = System::Drawing::Size(258, 261);
			this->dgv_first->TabIndex = 0;
			// 
			// dgv_second
			// 
			this->dgv_second->AllowUserToAddRows = false;
			this->dgv_second->AllowUserToDeleteRows = false;
			this->dgv_second->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_second->Location = System::Drawing::Point(273, 10);
			this->dgv_second->MultiSelect = false;
			this->dgv_second->Name = L"dgv_second";
			this->dgv_second->Size = System::Drawing::Size(258, 261);
			this->dgv_second->TabIndex = 1;
			// 
			// btn_add_columns
			// 
			this->btn_add_columns->Location = System::Drawing::Point(41, 277);
			this->btn_add_columns->Name = L"btn_add_columns";
			this->btn_add_columns->Size = System::Drawing::Size(95, 29);
			this->btn_add_columns->TabIndex = 2;
			this->btn_add_columns->Text = L"Add Columns";
			this->btn_add_columns->UseVisualStyleBackColor = true;
			this->btn_add_columns->Click += gcnew System::EventHandler(this, &Practice_t5_3::btn_add_columns_Click);
			// 
			// btn_delete_columns
			// 
			this->btn_delete_columns->Location = System::Drawing::Point(41, 312);
			this->btn_delete_columns->Name = L"btn_delete_columns";
			this->btn_delete_columns->Size = System::Drawing::Size(95, 29);
			this->btn_delete_columns->TabIndex = 3;
			this->btn_delete_columns->Text = L"Delete Columns";
			this->btn_delete_columns->UseVisualStyleBackColor = true;
			this->btn_delete_columns->Click += gcnew System::EventHandler(this, &Practice_t5_3::btn_delete_columns_Click);
			// 
			// btn_delete_rows
			// 
			this->btn_delete_rows->Location = System::Drawing::Point(172, 312);
			this->btn_delete_rows->Name = L"btn_delete_rows";
			this->btn_delete_rows->Size = System::Drawing::Size(95, 29);
			this->btn_delete_rows->TabIndex = 5;
			this->btn_delete_rows->Text = L"Delete Rows";
			this->btn_delete_rows->UseVisualStyleBackColor = true;
			this->btn_delete_rows->Click += gcnew System::EventHandler(this, &Practice_t5_3::btn_delete_rows_Click);
			// 
			// btn_add_rows
			// 
			this->btn_add_rows->Location = System::Drawing::Point(172, 277);
			this->btn_add_rows->Name = L"btn_add_rows";
			this->btn_add_rows->Size = System::Drawing::Size(95, 29);
			this->btn_add_rows->TabIndex = 4;
			this->btn_add_rows->Text = L"Add Rows";
			this->btn_add_rows->UseVisualStyleBackColor = true;
			this->btn_add_rows->Click += gcnew System::EventHandler(this, &Practice_t5_3::btn_add_rows_Click);
			// 
			// btn_execute
			// 
			this->btn_execute->Location = System::Drawing::Point(142, 347);
			this->btn_execute->Name = L"btn_execute";
			this->btn_execute->Size = System::Drawing::Size(127, 39);
			this->btn_execute->TabIndex = 6;
			this->btn_execute->Text = L"Execute";
			this->btn_execute->UseVisualStyleBackColor = true;
			this->btn_execute->Click += gcnew System::EventHandler(this, &Practice_t5_3::btn_execute_Click);
			// 
			// txtb_result
			// 
			this->txtb_result->Location = System::Drawing::Point(275, 277);
			this->txtb_result->Multiline = true;
			this->txtb_result->Name = L"txtb_result";
			this->txtb_result->ReadOnly = true;
			this->txtb_result->Size = System::Drawing::Size(255, 108);
			this->txtb_result->TabIndex = 7;
			// 
			// txtb_add_columns
			// 
			this->txtb_add_columns->Location = System::Drawing::Point(11, 282);
			this->txtb_add_columns->Name = L"txtb_add_columns";
			this->txtb_add_columns->Size = System::Drawing::Size(28, 20);
			this->txtb_add_columns->TabIndex = 8;
			this->txtb_add_columns->Text = L"1";
			this->txtb_add_columns->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtb_add_columns->TextChanged += gcnew System::EventHandler(this, &Practice_t5_3::txtb_add_columns_TextChanged);
			// 
			// txtb_delete_columns
			// 
			this->txtb_delete_columns->Location = System::Drawing::Point(11, 317);
			this->txtb_delete_columns->Name = L"txtb_delete_columns";
			this->txtb_delete_columns->Size = System::Drawing::Size(28, 20);
			this->txtb_delete_columns->TabIndex = 9;
			this->txtb_delete_columns->Text = L"1";
			this->txtb_delete_columns->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtb_delete_columns->TextChanged += gcnew System::EventHandler(this, &Practice_t5_3::txtb_delete_columns_TextChanged);
			// 
			// txtb_add_rows
			// 
			this->txtb_add_rows->Location = System::Drawing::Point(142, 282);
			this->txtb_add_rows->Name = L"txtb_add_rows";
			this->txtb_add_rows->Size = System::Drawing::Size(28, 20);
			this->txtb_add_rows->TabIndex = 10;
			this->txtb_add_rows->Text = L"1";
			this->txtb_add_rows->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtb_add_rows->TextChanged += gcnew System::EventHandler(this, &Practice_t5_3::txtb_add_rows_TextChanged);
			// 
			// txtb_delete_rows
			// 
			this->txtb_delete_rows->Location = System::Drawing::Point(142, 316);
			this->txtb_delete_rows->Name = L"txtb_delete_rows";
			this->txtb_delete_rows->Size = System::Drawing::Size(28, 20);
			this->txtb_delete_rows->TabIndex = 11;
			this->txtb_delete_rows->Text = L"1";
			this->txtb_delete_rows->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtb_delete_rows->TextChanged += gcnew System::EventHandler(this, &Practice_t5_3::txtb_delete_rows_TextChanged);
			// 
			// btn_reset
			// 
			this->btn_reset->Location = System::Drawing::Point(9, 347);
			this->btn_reset->Name = L"btn_reset";
			this->btn_reset->Size = System::Drawing::Size(127, 39);
			this->btn_reset->TabIndex = 12;
			this->btn_reset->Text = L"Reset";
			this->btn_reset->UseVisualStyleBackColor = true;
			this->btn_reset->Click += gcnew System::EventHandler(this, &Practice_t5_3::btn_reset_Click);
			// 
			// Practice_t5_3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 394);
			this->Controls->Add(this->btn_reset);
			this->Controls->Add(this->txtb_delete_rows);
			this->Controls->Add(this->txtb_add_rows);
			this->Controls->Add(this->txtb_delete_columns);
			this->Controls->Add(this->txtb_add_columns);
			this->Controls->Add(this->txtb_result);
			this->Controls->Add(this->btn_execute);
			this->Controls->Add(this->btn_delete_rows);
			this->Controls->Add(this->btn_add_rows);
			this->Controls->Add(this->btn_delete_columns);
			this->Controls->Add(this->btn_add_columns);
			this->Controls->Add(this->dgv_second);
			this->Controls->Add(this->dgv_first);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Practice_t5_3";
			this->Text = L"Table data processing";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_first))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_second))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			//Validate add_columns textbox
	private: System::Void txtb_add_columns_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txtb_add_columns->Text->Length > 0) {														//If txtb_add_rows not empty do
			while (txtb_add_columns->Text[0] == '0' && txtb_add_columns->Text->Length > 1) {			//While first symbol is 0 and length more than 1 
				txtb_add_columns->Text = txtb_add_columns->Text->Remove(0, 1);							//Remove first zero symbol
			}
		}
	}

		   //Validate delete_columns textbox
	private: System::Void txtb_delete_columns_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txtb_delete_columns->Text->Length > 0) {														//If txtb_add_rows not empty do
			while (txtb_delete_columns->Text[0] == '0' && txtb_delete_columns->Text->Length > 1) {			//While first symbol is 0 and length more than 1 
				txtb_delete_columns->Text = txtb_delete_columns->Text->Remove(0, 1);						//Remove first zero symbol
			}
		}
	}

		   //Validate add_rows textbox
	private: System::Void txtb_add_rows_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txtb_add_rows->Text->Length > 0) {													//If txtb_add_rows not empty do
			while (txtb_add_rows->Text[0] == '0' && txtb_add_rows->Text->Length > 1) {			//While first symbol is 0 and length more than 1 
				txtb_add_rows->Text = txtb_add_rows->Text->Remove(0, 1);						//Remove first zero symbol
			}
		}
	}

		   //Validate delete_rows textbox
	private: System::Void txtb_delete_rows_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txtb_delete_rows->Text->Length > 0) {														//If txtb_add_rows not empty do
			while (txtb_delete_rows->Text[0] == '0' && txtb_delete_rows->Text->Length > 1) {			//While first symbol is 0 and length more than 1 
				txtb_delete_rows->Text = txtb_delete_rows->Text->Remove(0, 1);							//Remove first zero symbol
			}
		}
	}

		   //Add columns
	private: System::Void btn_add_columns_Click(System::Object^ sender, System::EventArgs^ e) {
		int to_add_columns = 1;																					//Initialize count of adding rows
		bool valid_input = 0;																					//Validation bool
		if (txtb_add_columns->Text != "") {																		//If add_columns not empty do
			txtb_result->Text = Custom::parse_int_input(txtb_add_columns->Text, to_add_columns, valid_input);	//Parsing txtb_add_rows to int or throw exception
			if (valid_input)																					//If parsing success
			{
				dgv_first->ColumnCount = dgv_first->ColumnCount + to_add_columns;								//Adding Rows
				dgv_second->ColumnCount = dgv_second->ColumnCount + to_add_columns;								//Adding Rows

				if (dgv_first->Rows->Count == 0)																//If Rows count = 0 add row
					dgv_first->Rows->Add(1);
				if (dgv_second->Rows->Count == 0)																//If Rows count = 0 add row
					dgv_second->Rows->Add(1);

				for (int i = dgv_first->Columns->Count - to_add_columns; i < dgv_first->Columns->Count; i++) {	//Fulling new Rows with value
					for (int j = 0; j < dgv_first->Rows->Count; j++) {

						dgv_first->Rows[j]->Cells[i]->Value = j + 1;
						dgv_second->Rows[j]->Cells[i]->Value = j + 1;
					}
				}
			}
		}
		else {
			txtb_result->Text = "Empty count to add. \r\n";														//If add_columns empty show message
		}
		txtb_add_columns->Text = "1";
	}

		   //Delete columns
	private: System::Void btn_delete_columns_Click(System::Object^ sender, System::EventArgs^ e) {
		int to_delele_columns = 1;																		//Initialize count of adding rows
		bool valid_input = 0;																			//Validation bool
		if (txtb_delete_columns->Text != "") {															//If txtb_delete_columns not empty do
			txtb_result->Text = Custom::parse_int_input(txtb_delete_columns->Text, to_delele_columns, valid_input);//Parsing txtb_delete_rows to int or throw exception
			if (valid_input)																			//If parsing success
			{
				if (dgv_first->Columns->Count != 0)														//If DataGridView is not empty
				{
					int previous_count = dgv_first->Columns->Count;										//'Deleting rows from' value
					int wanted_count = dgv_first->Columns->Count - to_delele_columns;					//'Deleting rows to' value
					if (to_delele_columns > dgv_first->Columns->Count)									//If delete_columns more than total columns count delete all
						wanted_count = 0;
					dgv_first->ColumnCount = wanted_count;												//Remove rows from end to wanted_count
					dgv_second->ColumnCount = wanted_count;												//Remove rows from end to wanted_count
				}
				else {
					txtb_result->Text = "Array already empty." + "\r\n";								//If 0 rows then show message
				}
			}
			else {
				txtb_result->Text = "Empty count to delete. \r\n";										//If txtb_delete_columns empty show message
			}
			txtb_delete_columns->Text = "1";
		}
	}

		   //Add rows
	private: System::Void btn_add_rows_Click(System::Object^ sender, System::EventArgs^ e) {
		int to_add_rows = 1;																			//Initialize count of adding rows
		bool valid_input = 0;																			//Validation bool
		if (txtb_add_rows->Text != "") {																//If txtb_add_rows not empty do
			txtb_result->Text = Custom::parse_int_input(txtb_add_rows->Text, to_add_rows, valid_input); //Parsing txtb_add_rows to int or throw exception
			if (valid_input)																			//If parsing success
			{
				if (dgv_first->ColumnCount == 0)														//If columns doesn't exist
					dgv_first->ColumnCount = 1;															//Set 1 column
				if (dgv_second->ColumnCount == 0)														//If columns doesn't exist
					dgv_second->ColumnCount = 1;														//Set 1 column

				dgv_first->Rows->Add(to_add_rows);														//Adding Rows
				dgv_second->Rows->Add(to_add_rows);														//Adding Rows
				for (int i = dgv_first->Rows->Count - to_add_rows; i < dgv_first->Rows->Count; i++) {   //Fulling new Rows with value
					for (int j = 0; j < dgv_first->Columns->Count; j++) {
						dgv_first->Rows[i]->Cells[j]->Value = dgv_first->Rows->Count;
						dgv_second->Rows[i]->Cells[j]->Value = dgv_second->Rows->Count;
					}
				}
			}
		}
		else {
			txtb_result->Text = "Empty count to add. \r\n";												//If txtb_add_rows empty show message
		}
		txtb_add_rows->Text = "1";
	}

		   //Delete rows
	private: System::Void btn_delete_rows_Click(System::Object^ sender, System::EventArgs^ e) {
		int to_delele_rows = 1;																			//Initialize count of adding rows
		bool valid_input = 0;																			//Validation bool
		if (txtb_delete_rows->Text != "") {																//If textb not emty
			txtb_result->Text = Custom::parse_int_input(txtb_delete_rows->Text, to_delele_rows, valid_input);//Parsing txtb_delete_rows to int or throw exception
			if (valid_input)																			//If parsing success
			{
				if (dgv_first->Rows->Count != 0)														//If DataGridView is not empty
				{
					int previous_count = dgv_first->Rows->Count;										//'Deleting rows from' value
					int wanted_count = dgv_first->Rows->Count - to_delele_rows;							//'Deleting rows to' value
					if (to_delele_rows >= dgv_first->Rows->Count) {										//If requested delete count more than total rows count set columns count to 0
						dgv_first->ColumnCount = 0;
						dgv_second->ColumnCount = 0;
					}
					else {
						for (int i = previous_count - 1; i > wanted_count - 1; i--) {					//If requested delete count less than total delete rows from end
							dgv_first->Rows->RemoveAt(i);												//Remove rows from end to wanted_count
							dgv_second->Rows->RemoveAt(i);												//Remove rows from end to wanted_count
						}
					}
				}
				else {
					txtb_result->Text = "Array already empty." + "\r\n";								//If 0 rows then show message
				}
			}
		}
		else {
			txtb_result->Text = "Empty count to delete. \r\n";											//If textbox is empty show message
		}
		txtb_delete_rows->Text = "1";																	//Reset value to default
	}
		   
		   //Execute function
	private: System::Void btn_execute_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgv_second->ColumnCount != 0) {																//If 2nd array not empty
			for (int i = 1; i < dgv_second->RowCount; i += 2) {											//For i less than total RowCount with step 2
				for (int j = 0; j < dgv_second->ColumnCount; j++) {										//For every column
					if (i < dgv_second->RowCount) {														//If i less RowCount
						dgv_second->Rows[i]->Cells[j]->Value = dgv_first->Rows[i - 1]->Cells[j]->Value; //2nd_arr Row[i] = 1st_arr Row [i - 1] 
						dgv_second->Rows[i - 1]->Cells[j]->Value = dgv_first->Rows[i]->Cells[j]->Value;	//2nd_arr Row[i - 1] = 1st_arr Row [i]
					}
				}
			}
			txtb_result->Text = "Executing completed.\r\n";												//Show message when finished
		}
		else {
			txtb_result->Text = "Arrays is empty.\r\n";													//If empty show message
		}		
	}

		   //Reset arrays
	private: System::Void btn_reset_Click(System::Object^ sender, System::EventArgs^ e) {
		dgv_first->ColumnCount = 0;
		dgv_second->ColumnCount = 0;
	}
};
}
