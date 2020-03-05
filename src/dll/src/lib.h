#ifndef EXAMPLE_DLL_H
#define EXAMPLE_DLL_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef BUILDING_EXAMPLE_DLL
#define EXAMPLE_DLL __declspec(dllexport)
#else
#define EXAMPLE_DLL __declspec(dllimport)
#endif
int __stdcall EXAMPLE_DLL dub(int x);
int __stdcall EXAMPLE_DLL rnd();
#ifdef __cplusplus
}
#endif
#endif

