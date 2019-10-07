#include <stdio.h>
#include <stdlib.h>

void p(char *str)
{
	printf(str);
}

void n()
{
	char str[512];
	int var;

	fgets(str, 512, stdin);

	p(str);
	if (var != 0x01025544)
		return;
	system("/bin/cat /home/user/level5/.pass");
}


int main()
{
	n();
}
