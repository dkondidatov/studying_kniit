#include "Practice_t3_1.h"
#include <windows.h>

using namespace Practicet31;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Practice_t3_1);
	return 0;
}