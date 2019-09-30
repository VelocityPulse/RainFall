#include <stdio.h>

void p()
{
	char str[0x40];

	fflush(stdin);
	system("/bin/sh");
}

int main()
{
	p();
	return 0;
}
