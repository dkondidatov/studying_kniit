#include "Practice_t2_2.h"

#include <windows.h>

using namespace Practicet22;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Practice_t2_2);
	return 0;
}