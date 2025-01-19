#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;


[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	LifeSystemProject::MyForm form;
	Application::Run(% form);
}