#pragma once
#include <iostream>
#include "User.h"

namespace LoginRegister {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblRegister;
	protected:
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::TextBox^ txtNewName;
	private: System::Windows::Forms::TextBox^ txtNewPassword;
	private: System::Windows::Forms::Label^ lblPassword;
	private: System::Windows::Forms::TextBox^ txtConfirmPassword;
	private: System::Windows::Forms::Label^ lblConfirmPassword;
	private: System::Windows::Forms::Button^ btnSubmit1;

	private: System::Windows::Forms::Button^ btnCancel1;
	private: System::Windows::Forms::LinkLabel^ llLogin;



	protected:

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
			this->lblRegister = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->txtNewName = (gcnew System::Windows::Forms::TextBox());
			this->txtNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->txtConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->lblConfirmPassword = (gcnew System::Windows::Forms::Label());
			this->btnSubmit1 = (gcnew System::Windows::Forms::Button());
			this->btnCancel1 = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// lblRegister
			// 
			this->lblRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRegister->Location = System::Drawing::Point(12, 24);
			this->lblRegister->Name = L"lblRegister";
			this->lblRegister->Size = System::Drawing::Size(503, 55);
			this->lblRegister->TabIndex = 0;
			this->lblRegister->Text = L"Register";
			this->lblRegister->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(139, 103);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(68, 25);
			this->lblName->TabIndex = 1;
			this->lblName->Text = L"Name";
			// 
			// txtNewName
			// 
			this->txtNewName->Location = System::Drawing::Point(246, 97);
			this->txtNewName->Name = L"txtNewName";
			this->txtNewName->Size = System::Drawing::Size(230, 31);
			this->txtNewName->TabIndex = 2;
			// 
			// txtNewPassword
			// 
			this->txtNewPassword->Location = System::Drawing::Point(246, 156);
			this->txtNewPassword->Name = L"txtNewPassword";
			this->txtNewPassword->Size = System::Drawing::Size(230, 31);
			this->txtNewPassword->TabIndex = 4;
			this->txtNewPassword->UseSystemPasswordChar = true;
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(101, 162);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(106, 25);
			this->lblPassword->TabIndex = 3;
			this->lblPassword->Text = L"Password";
			// 
			// txtConfirmPassword
			// 
			this->txtConfirmPassword->Location = System::Drawing::Point(246, 212);
			this->txtConfirmPassword->Name = L"txtConfirmPassword";
			this->txtConfirmPassword->Size = System::Drawing::Size(230, 31);
			this->txtConfirmPassword->TabIndex = 6;
			this->txtConfirmPassword->UseSystemPasswordChar = true;
			// 
			// lblConfirmPassword
			// 
			this->lblConfirmPassword->AutoSize = true;
			this->lblConfirmPassword->Location = System::Drawing::Point(21, 218);
			this->lblConfirmPassword->Name = L"lblConfirmPassword";
			this->lblConfirmPassword->Size = System::Drawing::Size(186, 25);
			this->lblConfirmPassword->TabIndex = 5;
			this->lblConfirmPassword->Text = L"Confirm Password";
			// 
			// btnSubmit1
			// 
			this->btnSubmit1->Location = System::Drawing::Point(132, 281);
			this->btnSubmit1->Name = L"btnSubmit1";
			this->btnSubmit1->Size = System::Drawing::Size(114, 35);
			this->btnSubmit1->TabIndex = 7;
			this->btnSubmit1->Text = L"Submit";
			this->btnSubmit1->UseVisualStyleBackColor = true;
			this->btnSubmit1->Click += gcnew System::EventHandler(this, &Registration::btnSubmit1_Click);
			// 
			// btnCancel1
			// 
			this->btnCancel1->Location = System::Drawing::Point(305, 281);
			this->btnCancel1->Name = L"btnCancel1";
			this->btnCancel1->Size = System::Drawing::Size(105, 35);
			this->btnCancel1->TabIndex = 8;
			this->btnCancel1->Text = L"Cancel";
			this->btnCancel1->UseVisualStyleBackColor = true;
			this->btnCancel1->Click += gcnew System::EventHandler(this, &Registration::btnCancel1_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Location = System::Drawing::Point(450, 317);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(65, 25);
			this->llLogin->TabIndex = 9;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Registration::llLogin_LinkClicked);
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(527, 351);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnCancel1);
			this->Controls->Add(this->btnSubmit1);
			this->Controls->Add(this->txtConfirmPassword);
			this->Controls->Add(this->lblConfirmPassword);
			this->Controls->Add(this->txtNewPassword);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->txtNewName);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->lblRegister);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Registration";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btnCancel1_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

	public: bool switchToLogin = false;

	private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			this->switchToLogin = true;
			this->Close();
		}
	public: User^ user = nullptr;

	private: System::Void btnSubmit1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = txtNewName->Text;
		String^ password = txtNewPassword->Text;
		String^ confirmPassword = txtConfirmPassword->Text;

		if (name->Length == 0 || password->Length == 0) {
			MessageBox::Show("Incomplete Form", "Please fill out all fields", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmPassword) != 0) {
			
			MessageBox::Show("Passwords must be the same", "Password Mismatch", MessageBoxButtons::OK);
			return;
		}

		try {
			
			String^ connString = "Data Source=.\\sqlexpress;Initial Catalog=loginPass;Integrated Security=True";
			SqlConnection sqlConn(connString);
			
			sqlConn.Open();
			

			String^ sqlQuery = "INSERT INTO users " + "(name, password) VALUES " + "(@name, @password);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@password", password);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = name;
			user->password = password;
			MessageBox::Show("New User Registered: "  + user->name, "Success", MessageBoxButtons::OK);

			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Registration Failure", "Unable to register new user", MessageBoxButtons::OK);
		}
	}
};
}
