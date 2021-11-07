#pragma once
#include "Procedures.h"

namespace Practicet43 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Practice_t4_3
	/// </summary>
	public ref class Practice_t4_3 : public System::Windows::Forms::Form
	{
	public:
		Practice_t4_3(void)
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
		~Practice_t4_3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_array;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Array;

	private: System::Windows::Forms::Button^ btn_add_rows;
	private: System::Windows::Forms::Button^ btn_delete_rows;
	private: System::Windows::Forms::Button^ btn_reset;

	private: System::Windows::Forms::TextBox^ txtb_add_rows;
	private: System::Windows::Forms::TextBox^ txtb_delete_rows;
	private: System::Windows::Forms::TextBox^ txtb_result;
	private: System::Windows::Forms::Label^ lbl_description_sum_of_odd;
	private: System::Windows::Forms::Label^ lbl_max_even_desc;
	private: System::Windows::Forms::Button^ btn_calculate_even_elem;

	private: System::Windows::Forms::TextBox^ txtb_x;

	private: System::Windows::Forms::Label^ lbl_x;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btn_calculete_sum;

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
			this->dgv_array = (gcnew System::Windows::Forms::DataGridView());
			this->Array = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_add_rows = (gcnew System::Windows::Forms::Button());
			this->btn_delete_rows = (gcnew System::Windows::Forms::Button());
			this->btn_reset = (gcnew System::Windows::Forms::Button());
			this->txtb_add_rows = (gcnew System::Windows::Forms::TextBox());
			this->txtb_delete_rows = (gcnew System::Windows::Forms::TextBox());
			this->txtb_result = (gcnew System::Windows::Forms::TextBox());
			this->lbl_description_sum_of_odd = (gcnew System::Windows::Forms::Label());
			this->lbl_max_even_desc = (gcnew System::Windows::Forms::Label());
			this->btn_calculate_even_elem = (gcnew System::Windows::Forms::Button());
			this->txtb_x = (gcnew System::Windows::Forms::TextBox());
			this->lbl_x = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_calculete_sum = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_array))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgv_array
			// 
			this->dgv_array->AllowUserToAddRows = false;
			this->dgv_array->AllowUserToDeleteRows = false;
			this->dgv_array->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_array->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Array });
			this->dgv_array->Location = System::Drawing::Point(12, 12);
			this->dgv_array->MultiSelect = false;
			this->dgv_array->Name = L"dgv_array";
			this->dgv_array->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dgv_array->Size = System::Drawing::Size(143, 254);
			this->dgv_array->TabIndex = 0;
			this->dgv_array->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Practice_t4_3::dgv_array_CellValueChanged);
			// 
			// Array
			// 
			this->Array->HeaderText = L"Array";
			this->Array->Name = L"Array";
			// 
			// btn_add_rows
			// 
			this->btn_add_rows->Location = System::Drawing::Point(196, 140);
			this->btn_add_rows->Name = L"btn_add_rows";
			this->btn_add_rows->Size = System::Drawing::Size(81, 23);
			this->btn_add_rows->TabIndex = 2;
			this->btn_add_rows->Text = L"Add Rows";
			this->btn_add_rows->UseVisualStyleBackColor = true;
			this->btn_add_rows->Click += gcnew System::EventHandler(this, &Practice_t4_3::btn_add_rows_Click);
			// 
			// btn_delete_rows
			// 
			this->btn_delete_rows->Location = System::Drawing::Point(196, 169);
			this->btn_delete_rows->Name = L"btn_delete_rows";
			this->btn_delete_rows->Size = System::Drawing::Size(81, 23);
			this->btn_delete_rows->TabIndex = 3;
			this->btn_delete_rows->Text = L"Delete Rows";
			this->btn_delete_rows->UseVisualStyleBackColor = true;
			this->btn_delete_rows->Click += gcnew System::EventHandler(this, &Practice_t4_3::btn_delete_rows_Click);
			// 
			// btn_reset
			// 
			this->btn_reset->Location = System::Drawing::Point(163, 245);
			this->btn_reset->Name = L"btn_reset";
			this->btn_reset->Size = System::Drawing::Size(257, 23);
			this->btn_reset->TabIndex = 4;
			this->btn_reset->Text = L"Reset";
			this->btn_reset->UseVisualStyleBackColor = true;
			this->btn_reset->Click += gcnew System::EventHandler(this, &Practice_t4_3::btn_reset_Click);
			// 
			// txtb_add_rows
			// 
			this->txtb_add_rows->Location = System::Drawing::Point(165, 141);
			this->txtb_add_rows->Name = L"txtb_add_rows";
			this->txtb_add_rows->Size = System::Drawing::Size(25, 20);
			this->txtb_add_rows->TabIndex = 5;
			this->txtb_add_rows->Text = L"1";
			this->txtb_add_rows->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtb_add_rows->TextChanged += gcnew System::EventHandler(this, &Practice_t4_3::txtb_add_rows_TextChanged);
			// 
			// txtb_delete_rows
			// 
			this->txtb_delete_rows->Location = System::Drawing::Point(165, 170);
			this->txtb_delete_rows->Name = L"txtb_delete_rows";
			this->txtb_delete_rows->Size = System::Drawing::Size(25, 20);
			this->txtb_delete_rows->TabIndex = 6;
			this->txtb_delete_rows->Text = L"1";
			this->txtb_delete_rows->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtb_delete_rows->TextChanged += gcnew System::EventHandler(this, &Practice_t4_3::txtb_delete_rows_TextChanged);
			// 
			// txtb_result
			// 
			this->txtb_result->Location = System::Drawing::Point(163, 12);
			this->txtb_result->Multiline = true;
			this->txtb_result->Name = L"txtb_result";
			this->txtb_result->ReadOnly = true;
			this->txtb_result->Size = System::Drawing::Size(257, 121);
			this->txtb_result->TabIndex = 7;
			// 
			// lbl_description_sum_of_odd
			// 
			this->lbl_description_sum_of_odd->AutoSize = true;
			this->lbl_description_sum_of_odd->Location = System::Drawing::Point(3, 5);
			this->lbl_description_sum_of_odd->Name = L"lbl_description_sum_of_odd";
			this->lbl_description_sum_of_odd->Size = System::Drawing::Size(206, 13);
			this->lbl_description_sum_of_odd->TabIndex = 8;
			this->lbl_description_sum_of_odd->Text = L"Find the sum of odd elements, less than X:";
			// 
			// lbl_max_even_desc
			// 
			this->lbl_max_even_desc->AutoSize = true;
			this->lbl_max_even_desc->Location = System::Drawing::Point(3, 4);
			this->lbl_max_even_desc->Name = L"lbl_max_even_desc";
			this->lbl_max_even_desc->Size = System::Drawing::Size(119, 13);
			this->lbl_max_even_desc->TabIndex = 9;
			this->lbl_max_even_desc->Text = L"Find max even element:";
			// 
			// btn_calculate_even_elem
			// 
			this->btn_calculate_even_elem->Location = System::Drawing::Point(28, 28);
			this->btn_calculate_even_elem->Name = L"btn_calculate_even_elem";
			this->btn_calculate_even_elem->Size = System::Drawing::Size(81, 23);
			this->btn_calculate_even_elem->TabIndex = 10;
			this->btn_calculate_even_elem->Text = L"Calculate";
			this->btn_calculate_even_elem->UseVisualStyleBackColor = true;
			this->btn_calculate_even_elem->Click += gcnew System::EventHandler(this, &Practice_t4_3::btn_calculate_even_elem_Click);
			// 
			// txtb_x
			// 
			this->txtb_x->Location = System::Drawing::Point(89, 23);
			this->txtb_x->Name = L"txtb_x";
			this->txtb_x->Size = System::Drawing::Size(25, 20);
			this->txtb_x->TabIndex = 11;
			this->txtb_x->Text = L"1";
			this->txtb_x->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtb_x->TextChanged += gcnew System::EventHandler(this, &Practice_t4_3::txtb_x_TextChanged);
			// 
			// lbl_x
			// 
			this->lbl_x->AutoSize = true;
			this->lbl_x->Location = System::Drawing::Point(66, 26);
			this->lbl_x->Name = L"lbl_x";
			this->lbl_x->Size = System::Drawing::Size(17, 13);
			this->lbl_x->TabIndex = 12;
			this->lbl_x->Text = L"X:";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btn_calculate_even_elem);
			this->panel1->Controls->Add(this->lbl_max_even_desc);
			this->panel1->Location = System::Drawing::Point(285, 140);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(135, 52);
			this->panel1->TabIndex = 13;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btn_calculete_sum);
			this->panel2->Controls->Add(this->txtb_x);
			this->panel2->Controls->Add(this->lbl_x);
			this->panel2->Controls->Add(this->lbl_description_sum_of_odd);
			this->panel2->Location = System::Drawing::Point(163, 195);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(257, 48);
			this->panel2->TabIndex = 14;
			// 
			// btn_calculete_sum
			// 
			this->btn_calculete_sum->Location = System::Drawing::Point(150, 21);
			this->btn_calculete_sum->Name = L"btn_calculete_sum";
			this->btn_calculete_sum->Size = System::Drawing::Size(81, 23);
			this->btn_calculete_sum->TabIndex = 11;
			this->btn_calculete_sum->Text = L"Calculate";
			this->btn_calculete_sum->UseVisualStyleBackColor = true;
			this->btn_calculete_sum->Click += gcnew System::EventHandler(this, &Practice_t4_3::btn_calculete_sum_Click);
			// 
			// Practice_t4_3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(428, 274);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->txtb_result);
			this->Controls->Add(this->txtb_delete_rows);
			this->Controls->Add(this->txtb_add_rows);
			this->Controls->Add(this->btn_reset);
			this->Controls->Add(this->btn_delete_rows);
			this->Controls->Add(this->btn_add_rows);
			this->Controls->Add(this->dgv_array);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Practice_t4_3";
			this->Text = L"Table Data Processing";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_array))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Procedure for reset all changes to default
	private: System::Void btn_reset_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = dgv_array->Rows->Count - 1; i >= 0; i--)										//Reset rows count to 0
			dgv_array->Rows->RemoveAt(i);															//									
		txtb_result->Text = "Cleared.";
	}

		   //Procedure for adding rows to DataGridView
	private: System::Void btn_add_rows_Click(System::Object^ sender, System::EventArgs^ e) {
		int to_add_rows = 1;																		//Initialize count of adding rows
		bool valid_input = 0;																		//Validation bool
		if (txtb_add_rows->Text != "") {
			txtb_result->Text = Custom::parse_int_input(txtb_add_rows->Text, to_add_rows, valid_input); //Parsing txtb_add_rows to int or throw exception
			if (valid_input)																			//If parsing success
			{
				dgv_array->Rows->Add(to_add_rows);														//Adding Rows
				for (int i = dgv_array->Rows->Count - to_add_rows; i < dgv_array->Rows->Count; i++) {   //Fulling new Rows with 0 value
					dgv_array->Rows[i]->Cells[0]->Value = 0;
				}
			}
		}
		else {
			txtb_result->Text = "Empty count to add. \r\n";
		}
		txtb_add_rows->Text = "1";																	//Reset txtb_add_rows text to 1
	}

		   //Procedure for deleting rows from DataGridView
	private: System::Void btn_delete_rows_Click(System::Object^ sender, System::EventArgs^ e) {
		int to_delele_rows = 1;																		//Initialize count of adding rows
		bool valid_input = 0;																		//Validation bool
		if (txtb_delete_rows->Text != "") {
			txtb_result->Text = Custom::parse_int_input(txtb_delete_rows->Text, to_delele_rows, valid_input);//Parsing txtb_delete_rows to int or throw exception
			if (valid_input)																			//If parsing success
			{
				if (dgv_array->Rows->Count != 0)														//If DataGridView is not empty
				{
					int previous_count = dgv_array->Rows->Count;										//'Deleting rows from' value
					int wanted_count = dgv_array->Rows->Count - to_delele_rows;							//'Deleting rows to' value
					for (int i = previous_count - 1; i > wanted_count - 1; i--) {
						dgv_array->Rows->RemoveAt(i);													//Remove rows from end to wanted_count
					}
				}
				else {
					txtb_result->Text = "Array already empty." + "\r\n";								//If 0 rows then show message
				}
			}
		}
		else {
			txtb_result->Text = "Empty count to delete. \r\n";
		}
		txtb_delete_rows->Text = "1";																//Reset txtb_add_rows text to 1
	}

		   //Procedure for validating entered to cell value
	private: System::Void dgv_array_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		bool valid_input = 1;																	//Validation bool 
		if (dgv_array[e->ColumnIndex, e->RowIndex]->Value != nullptr) {							//If Cell value is not empty do
			System::String^ temp = dgv_array[e->ColumnIndex, e->RowIndex]->Value->ToString();	//Make temp string for deleting 0 from begin 
			if (temp[0] == '0' && temp->Length > 1) {											//If firts symbol in temp is 0 and length more than 1 do
				while (temp[0] == '0' && temp->Length > 1) {									//While first symbol is zero and lenght more than 1
					temp = temp->Remove(0, 1);													//Remove first symbol
				}
				dgv_array[e->ColumnIndex, e->RowIndex]->Value = temp;							//Setting trimmed string as Cell value
			}
			if (temp[0] != '0') {																//If cell value is not default do 
				txtb_result->Text = Custom::validate_value(dgv_array[e->ColumnIndex, e->RowIndex]->Value->ToString(), valid_input); //Validating cell value
				if (!valid_input)																//If cell value not valid set value to default
					dgv_array[e->ColumnIndex, e->RowIndex]->Value = 0;
			}
		}
		else {
			dgv_array[e->ColumnIndex, e->RowIndex]->Value = 0;									//If cell value empty set value to default
		}
	}

		   //Procedure for validating entered to txtb_add_rows value
	private: System::Void txtb_add_rows_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txtb_add_rows->Text->Length > 0) {													//If txtb_add_rows not empty do
			while (txtb_add_rows->Text[0] == '0' && txtb_add_rows->Text->Length > 1) {			//While first symbol is 0 and length more than 1 
				txtb_add_rows->Text = txtb_add_rows->Text->Remove(0, 1);						//Remove first zero symbol
			}
		}
	}

		   //Procedure for validating entered to txtb_delete_rows value
	private: System::Void txtb_delete_rows_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txtb_delete_rows->Text->Length > 0) {												//If txtb_delete_rows not empty do
			while (txtb_delete_rows->Text[0] == '0' && txtb_delete_rows->Text->Length > 1) {	//While first symbol is 0 and length more than 1 
				txtb_delete_rows->Text = txtb_delete_rows->Text->Remove(0, 1);					//Remove first zero symbol
			}
		}
	}

		   //Procedure for validating entered to txtb_x value
	private: System::Void txtb_x_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txtb_x->Text->Length > 0) {															//If X not empty do
			while (txtb_x->Text[0] == '0' && txtb_x->Text->Length > 1) {						//While first symbol is 0 and length more than 1 
				txtb_x->Text = txtb_x->Text->Remove(0, 1);										//Remove first zero symbol
			}
		}
	}

		   //Procedure for calculate sum of odd elements less than X
	private: System::Void btn_calculete_sum_Click(System::Object^ sender, System::EventArgs^ e) {
		int x, buff = 0;																		//Init X and buffer variable
		int sum = 0;																			//Init sum variable
		bool valid_input = 1;																	//Init valid_input variable for validating input
		bool odd_elements_exist = 0;															//Init odd_elements_exist variable for check odd elements existing
		if (txtb_x->Text != "") {																//If X not empty
			txtb_result->Text = Custom::validate_value(txtb_x->Text, x, valid_input);			//Parse txtb_x text and get X
			if (valid_input) {																	//If input is valid
				if (dgv_array->Rows->Count > 0) {												//And if array not empty
					for (int i = 0; i < dgv_array->Rows->Count; i++) {							//For all rows in array
						buff = Convert::ToInt32(dgv_array[0, i]->Value);						//Cashing value in buffer
						if ((buff != 0) && (buff < x) && (buff % 2 != 0)) {						//If buffer is odd and less X
							sum += buff;														//Sum
							odd_elements_exist = 1;												//Set odd_elements_exist to true
						}
					}
					if (odd_elements_exist)														//If odd elements exist show sum
						txtb_result->Text = "Sum of odd elements less than X = " + x + " is " + sum + "\r\n";
					else
					{
						txtb_result->Text = "Odd elements does not exist. \r\n";				//If odd elements doesn't exist show message
					}						
				}
				else {
					txtb_result->Text = "Array is empty. \r\n";									//If array empty show message
				}
			}
		}
		else {
			txtb_result->Text = "Empty X. \r\n";												//If X empty show message
		}
		txtb_x->Text = "1";																		//Reset X to default
	}

		   //Procedure for finding max even element
	private: System::Void btn_calculate_even_elem_Click(System::Object^ sender, System::EventArgs^ e) {
		int buff = 0;																			//Initialize buffer variable
		int max_even = 0;																		//Initialize max_even variable

		if (dgv_array->Rows->Count > 0)															//If array not empty
		{
			for (int i = 0; i < dgv_array->Rows->Count; i++) {									//For all elements in array
				buff = Convert::ToInt32(dgv_array[0, i]->Value);								//Cashing converted to Int value in buffer
				if ((buff != 0) && (buff % 2 == 0) && (buff > max_even))						//If value even and bigger that max
					max_even = buff;															//Set buffer as max
			}
			txtb_result->Text = "Max event element is " + max_even + "\r\n";					//Show max value
		}
		else {
			txtb_result->Text = "Array is empty. \r\n";											//If array empty show message
		}
	}
};
}
