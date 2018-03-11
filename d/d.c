#include <Windows.h>

typedef VOID(*DLLPROC) ();
HINSTANCE hinstDLL;
DLLPROC hello;
BOOL fFreeDLL;


int main()
{
	hinstDLL = LoadLibrary("hello.dll");


	if (hinstDLL != NULL)
	{
		hello = (DLLPROC)GetProcAddress(hinstDLL, "hello");

		if (hello != NULL)
		{
			(hello)();
		}

		fFreeDLL = FreeLibrary(hinstDLL);
	}

	return 0;
}