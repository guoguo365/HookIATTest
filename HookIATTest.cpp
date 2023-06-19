#include<Windows.h>

int main()
{
	HMODULE hModule = LoadLibraryA("IATDLL.dll");
	if (hModule)
	{
		MessageBoxW(0, L"¹þà¶", L"1111", MB_OK);
	}

	return 0;
}