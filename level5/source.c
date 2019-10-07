#include <stdio.h>
#include <stdlib.h>

void o()
{
	char str[] = "/bin/sh";
	
	system(str);
	exit(1);
}

void n()
{
	char str[512];

	fgets(str, 512, stdin);
	printf(str);
	exit(1);
}

int main ()
{
	n();
	return 0;
}
