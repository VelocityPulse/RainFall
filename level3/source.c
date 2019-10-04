#include <stdlib.h>
#include <stdio.h>

void v()
{

	char str[512];
	int var;

	fgets(str, 512, stdin);

	printf(str);

	if (var != 0x40)
		return;

	fwrite("Wait what?!\n", 12, 1, stdin);
	system("/bin/sh");

	return;
}

int main()
{
	v();
}
