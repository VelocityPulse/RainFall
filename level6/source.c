#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void n()
{
	system("/bin/cat /home/user/level7/.pass");
}

void m()
{
	puts("Nope");
}

int main(int argc, char **argv)
{
	char *a = malloc(0x40); // 64
	void (*p)() = malloc(0x4);  // 4

	p = m;
	strcpy(a, argv[1]);

	p();
	return 0;
}
