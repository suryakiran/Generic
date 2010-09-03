#ifndef DLL_HXX
#define DLL_HXX 1

#ifdef WINDOWS
#define DllExport __declspec (dllexport)
#define DllImport __declspec (dllimport)
#else
#define DllExport
#define DllImport
#endif

#ifdef DLL_SOURCE
#define DLL_EXPORT DllExport
#else
#define DLL_EXPORT DllImport
#endif

#endif
