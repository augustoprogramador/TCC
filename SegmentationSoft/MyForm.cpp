#include "Frm_Principal.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SegmentationSoft::Frm_Principal form;
	Application::Run(% form);
}