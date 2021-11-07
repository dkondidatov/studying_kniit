#include "Practice_t4_3.h"
#include <windows.h>

using namespace Practicet43;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Practice_t4_3);
	return 0;
}
