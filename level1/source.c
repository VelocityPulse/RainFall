#include "stdio.h"
#include <stdlib.h>

void run()
{
	char str[] = "Good... Wait what?\n";
	fwrite(str, 1, 19, stdout);
	system("/bin/sh");
}

int main(int argc, char **argv)
{
	char str[76];

	gets(str);
	return 0;
}
