#include <stdio.h>

void p()
{
	char str[64]; // (0x4C - 0xC = 0x40 = 64)

	fflush(stdin);

	gets(str);

	if ((eax & 0xb0000000) == 0xb0000000) 
	{
		// printf
		// exit
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
