#include "MyForm.h"
#include "MainForm.h"
#include "Registration.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true) {
		LoginRegister::MyForm loginForm;
		loginForm.ShowDialog();
		
		if (loginForm.switchToRegister) {
			LoginRegister::Registration registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
			else {
				user = registerForm.user;
				break;
			}
		}
		else {
			user = loginForm.user;
			break;

		}
	}

	if (user != nullptr) {
		LoginRegister::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("Login Failed", "Program.cpp", MessageBoxButtons::OK);
	}
}