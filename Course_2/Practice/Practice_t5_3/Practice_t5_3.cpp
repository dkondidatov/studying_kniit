#include "Practice_t5_3.h"
#include <windows.h>

using namespace Practicet53;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Practice_t5_3);
	return 0;
}

