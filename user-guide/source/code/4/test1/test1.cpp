
#include "lib1/lib1.h"

#if defined(GUI) && defined(_WIN32)
#include <windows.h>
#endif

#include <stdio.h>

int main()
{
	const char *text = foo();
	printf("%s\n", text);
#if defined(GUI) && defined(_WIN32)
	MessageBox(0, text, "test1", MB_OK);
#endif
	return 0;
}

