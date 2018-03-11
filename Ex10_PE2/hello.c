#define EXPORTING_DLL
#include "hello.h"

BOOL APIENTRY DllMain(
	HANDLE hModule,	   // Handle to DLL module 
	DWORD ul_reason_for_call,
	LPVOID lpReserved)     // Reserved
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		hello();
		world();

		break;

	case DLL_THREAD_ATTACH:

		break;

	case DLL_THREAD_DETACH:
		// A thread exits normally.
		break;

	case DLL_PROCESS_DETACH:
		// A process unloads the DLL.
		break;
	}

	
	return TRUE;
}

void hello()
{
	MessageBox(NULL, TEXT("Hello World"),
		TEXT("From another module"), MB_OK);
}

void world()
{
	MessageBox(NULL, TEXT("Just a function"),
		TEXT("In a DLL"), MB_OK);
}