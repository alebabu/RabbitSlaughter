#include <stdio.h>

#define WINDOWS

#ifdef WINDOWS
#include <Windows.h>
#endif

using namespace std;

int main(int argc, char* args[])
{

	printf("Hello Alex!\n");

#ifdef WINDOWS
	Sleep(3000);
#else
	scanf("%c");
#endif

	return 0;
}