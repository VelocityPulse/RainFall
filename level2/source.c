#include <stdio.h>
#include <stdlib.h>

void p()
{
	char str[64]; // (0x4C - 0xC = 0x40 = 64)

	fflush(stdin);

	gets(str);


	int *ebp;
	asm("movl %%ebp, %0" : "=r"(ebp) :);

	int tmp = ebp[1];
	if ((tmp & 0xb0000000) == 0xb0000000)
	{
		printf("(%p)\n", tmp);
		exit(1);
	}
	else
	{
		// puts
		// strdup
	}

}

int main()
{
	p();
	return 0;
}
