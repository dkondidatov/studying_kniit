#include "Practice_main_window.h"
#include <windows.h>

using namespace Practicet11;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Practice_main_window);
	return 0;
}