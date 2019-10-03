#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void p()
{
	char str[64]; // (0x4C - 0xC = 0x40 = 64)

	fflush(stdin);

	gets(str);

	int tmp = __builtin_return_address(0);

	if ((tmp & 0xb0000000) == 0xb0000000)
	{
		printf("(%p)\n", tmp);
		exit(1);
	}
	else
	{
		puts(str);
		strdup(str);
	}

}

int main()
{
	p();
	return 0;
}
