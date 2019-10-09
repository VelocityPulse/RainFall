#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char buff[64];

void m()
{
	printf("%s - %d\n", buff, time(NULL));
}
int main(int argc, char **argv)
{
	unsigned int *a = malloc(0x8);
	*a = 0x1;
	a[1] = (unsigned int)malloc(0x8);

	unsigned int *c = malloc(0x8);
	*c = 0x2;
	c[1] = (unsigned int)malloc(0x8);

	strcpy((char *)&a[1], argv[1]);
	strcpy((char *)&c[1], argv[2]);

	FILE *ret = fopen("/home/user/level8/.pass", "r");

	fgets(buff, 44, ret);

	puts("~~");

	return 0;
}
