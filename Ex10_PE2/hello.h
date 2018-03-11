#include <Windows.h>

#ifndef INDLL_H
#define INDLL_H

#ifdef EXPORTING_DLL
extern __declspec(dllexport) void hello();
#else
extern __declspec(dllimport) void hello();
#endif

void world();

#endif