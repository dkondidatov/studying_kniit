#pragma once
#include "Procedures.h"
#include "Windows.h"

namespace Practicet22 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int max_value = 19;

	/// <summary>
	/// Summary for Practice_t2_2
	/// </summary>
	public ref class Practice_t2_2 : public System::Windows::Forms::Form
	{
	public:
		Practice_t2_2(void)
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
		~Practice_t2_2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lbl_input_to_calculate;



	private: System::Windows::Forms::Panel^ panel_input;
	private: System::Windows::Forms::TextBox^ txtb_input_x;


	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::Button^ btn_calculate;
	private: System::Windows::Forms::TextBox^ txtb_result;

	private: System::Windows::Forms::Label^ lbl_result;
	private: System::Windows::Forms::Label^ lbl_x_var;
	private: System::Windows::Forms::Label^ lbl_y;
	private: System::Windows::Forms::TextBox^ txtb_input_y;
	protected:

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
			this->lbl_input_to_calculate = (gcnew System::Windows::Forms::Label());
			this->panel_input = (gcnew System::Windows::Forms::Panel());
			this->lbl_y = (gcnew System::Windows::Forms::Label());
			this->txtb_input_y = (gcnew System::Windows::Forms::TextBox());
			this->lbl_x_var = (gcnew System::Windows::Forms::Label());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_calculate = (gcnew System::Windows::Forms::Button());
			this->txtb_input_x = (gcnew System::Windows::Forms::TextBox());
			this->txtb_result = (gcnew System::Windows::Forms::TextBox());
			this->lbl_result = (gcnew System::Windows::Forms::Label());
			this->panel_input->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_input_to_calculate
			// 
			this->lbl_input_to_calculate->AutoSize = true;
			this->lbl_input_to_calculate->Location = System::Drawing::Point(5, 6);
			this->lbl_input_to_calculate->Name = L"lbl_input_to_calculate";
			this->lbl_input_to_calculate->Size = System::Drawing::Size(98, 13);
			this->lbl_input_to_calculate->TabIndex = 0;
			this->lbl_input_to_calculate->Text = L"Calculate Function:";
			// 
			// panel_input
			// 
			this->panel_input->Controls->Add(this->lbl_y);
			this->panel_input->Controls->Add(this->txtb_input_y);
			this->panel_input->Controls->Add(this->lbl_x_var);
			this->panel_input->Controls->Add(this->btn_clear);
			this->panel_input->Controls->Add(this->btn_calculate);
			this->panel_input->Controls->Add(this->txtb_input_x);
			this->panel_input->Controls->Add(this->lbl_input_to_calculate);
			this->panel_input->Location = System::Drawing::Point(5, 7);
			this->panel_input->Name = L"panel_input";
			this->panel_input->Size = System::Drawing::Size(250, 92);
			this->panel_input->TabIndex = 2;
			// 
			// lbl_y
			// 
			this->lbl_y->AutoSize = true;
			this->lbl_y->Location = System::Drawing::Point(159, 29);
			this->lbl_y->Name = L"lbl_y";
			this->lbl_y->Size = System::Drawing::Size(17, 13);
			this->lbl_y->TabIndex = 6;
			this->lbl_y->Text = L"Y:";
			// 
			// txtb_input_y
			// 
			this->txtb_input_y->Location = System::Drawing::Point(182, 26);
			this->txtb_input_y->Name = L"txtb_input_y";
			this->txtb_input_y->Size = System::Drawing::Size(65, 20);
			this->txtb_input_y->TabIndex = 5;
			this->txtb_input_y->Text = L"0";
			this->txtb_input_y->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lbl_x_var
			// 
			this->lbl_x_var->AutoSize = true;
			this->lbl_x_var->Location = System::Drawing::Point(159, 6);
			this->lbl_x_var->Name = L"lbl_x_var";
			this->lbl_x_var->Size = System::Drawing::Size(17, 13);
			this->lbl_x_var->TabIndex = 4;
			this->lbl_x_var->Text = L"X:";
			// 
			// btn_clear
			// 
			this->btn_clear->Location = System::Drawing::Point(154, 64);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(93, 25);
			this->btn_clear->TabIndex = 3;
			this->btn_clear->Text = L"Clear";
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &Practice_t2_2::btn_clear_Click);
			// 
			// btn_calculate
			// 
			this->btn_calculate->Location = System::Drawing::Point(3, 64);
			this->btn_calculate->Name = L"btn_calculate";
			this->btn_calculate->Size = System::Drawing::Size(93, 25);
			this->btn_calculate->TabIndex = 2;
			this->btn_calculate->Text = L"Calculate";
			this->btn_calculate->UseVisualStyleBackColor = true;
			this->btn_calculate->Click += gcnew System::EventHandler(this, &Practice_t2_2::btn_calculate_Click);
			// 
			// txtb_input_x
			// 
			this->txtb_input_x->Location = System::Drawing::Point(182, 3);
			this->txtb_input_x->Name = L"txtb_input_x";
			this->txtb_input_x->Size = System::Drawing::Size(65, 20);
			this->txtb_input_x->TabIndex = 1;
			this->txtb_input_x->Text = L"0";
			this->txtb_input_x->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtb_result
			// 
			this->txtb_result->Location = System::Drawing::Point(10, 122);
			this->txtb_result->Multiline = true;
			this->txtb_result->Name = L"txtb_result";
			this->txtb_result->ReadOnly = true;
			this->txtb_result->Size = System::Drawing::Size(241, 83);
			this->txtb_result->TabIndex = 3;
			// 
			// lbl_result
			// 
			this->lbl_result->AutoSize = true;
			this->lbl_result->Location = System::Drawing::Point(12, 104);
			this->lbl_result->Name = L"lbl_result";
			this->lbl_result->Size = System::Drawing::Size(40, 13);
			this->lbl_result->TabIndex = 4;
			this->lbl_result->Text = L"Result:";
			// 
			// Practice_t2_2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(260, 212);
			this->Controls->Add(this->lbl_result);
			this->Controls->Add(this->txtb_result);
			this->Controls->Add(this->panel_input);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"Practice_t2_2";
			this->Text = L"Function Calculation";
			this->panel_input->ResumeLayout(false);
			this->panel_input->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		txtb_input_x->Text = "0"; //Clear input textbox
		txtb_input_y->Text = "0"; //Clear input textbox
		txtb_result->Text = "";	  //Clear log textbox
	}

	private: System::Void btn_calculate_Click(System::Object^ sender, System::EventArgs^ e) {
		int input_x = 0; //Variable for X
		int input_y = 0; //Variable for Y 
		double function = 0;
		bool valid_input_x = 0; //Variable for validation X
		bool valid_input_y = 0; //Variable for validation Y
		bool scope_check = 0; //Variable for scope_check

		txtb_result->Text = ""; //Clear log textbox

		txtb_result->Text += "X: " + Custom::parse_int_input(txtb_input_x->Text, input_x, valid_input_x); //Parse and validate X input and write result to log textbox
		txtb_result->Text += "Y: " + Custom::parse_int_input(txtb_input_y->Text, input_y, valid_input_y); //Parse and validate Y input and write result to log textbox
		if (valid_input_x && valid_input_y)
		{
			txtb_result->Text = txtb_result->Text + Custom::scope_check(input_x, input_y, scope_check); //Check variables for function scope X != -1, Y != 5
			if (scope_check)
			{
				function = Custom::calculate_function(input_x, input_y);
				txtb_result->Text = txtb_result->Text + "Function result: " + function.ToString() + "\r\n"; //Calculate function
			}
			else
			{
				txtb_input_x->Text = "0"; //If input not valid clear input textbox
				txtb_input_y->Text = "0"; //If input not valid clear input textbox
			}
		}
		else
		{
			txtb_input_x->Text = "0"; //If input not valid clear input textbox
			txtb_input_y->Text = "0"; //If input not valid clear input textbox
		}
	}
	};
}
