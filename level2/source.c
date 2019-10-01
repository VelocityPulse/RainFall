#include <stdio.h>

int main();

void p()
{
	char str[64]; // (0x4C - 0xC = 0x40 = 64)

	fflush(stdin);

//	gets(str);

	int ebp;
	//	asm volatile("1: lea 1b(%%rbp), %0;": "=a"(ebp));

	int *regVal;
	asm("movl %%ebp, %0" : "=r"(regVal) :);

	//	register int *e asm("rbp");

	int e;
	//	asm("movl %%rbp,%0" : "=r"(e));
	//	asm("movl %%esp, %0" : "=r" (e));

	printf("volatile ebp     : %#x\n", *regVal);
	printf("volatipe ebp+0x4 : %#x\n", regVal[1]);
	printf("function address : %#x\n", main);


	/*	if ((eax & 0xb0000000) == 0xb0000000)
		{
	// printf
	// exit
	}
	else
	{
	// puts
	// strdup
	}
	*/
}

int main()
{
	p();
	return 0;
}
