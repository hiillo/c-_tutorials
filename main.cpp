#include <windows.h>

int WINAPI WinMain (HINSTANCE hinstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow){
	MessageBox (NULL, TEXT ("hello, Windows 98!"), TEXT ("HelloMsg"), 0);
	return 0;
}
