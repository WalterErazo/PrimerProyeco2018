#include "FormPrincipal.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PrimerProyecto2018::FormPrincipal form;
	Application::Run(%form);
	return 0;
}

