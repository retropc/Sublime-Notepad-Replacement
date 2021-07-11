// SublimeLauncher.cpp : Defines the entry point for the application.
//

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <shellapi.h>

int WINAPI wWinMain(HINSTANCE  hInstance,
                    HINSTANCE  hPrevInstance,
                    LPWSTR  lpCmdLine,
                    int nCmdShow)
{
	UNREFERENCED_PARAMETER(hInstance);
	UNREFERENCED_PARAMETER(hPrevInstance);

	LPTSTR arguments = (LPTSTR)malloc(sizeof(TCHAR) * wcslen(lpCmdLine) * 2 + 100);
	arguments[0] = L'\0';

	bool argumentsPassed = false;
	for( int i=1; i < __argc; i++)
	{
		if (wcscmp(__wargv[i], L"-z") == 0)
		{
			// -z specificed - skip the next parameter
			i++;
		}
		else
		{
			if (argumentsPassed == false)
				wcscat(arguments, L"\"");
			else
				wcscat(arguments, L" ");

			argumentsPassed = true;
			wcscat(arguments, __wargv[i]);
		}
	}

	if (argumentsPassed == true)
		wcscat(arguments, L"\"");
	
	wchar_t* sublimeExe = _wcsdup(__wargv[0]);
	sublimeExe[wcslen(sublimeExe) - wcslen(L"SublimeLauncher.exe")] = '\0';
	wcscat(sublimeExe, L"sublime_text.exe");

	ShellExecute(NULL, NULL, sublimeExe, arguments, NULL, nCmdShow);

	return (int) 0;
}


