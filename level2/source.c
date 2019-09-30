#include <stdio.h>

void p()
{
	char str[0x40];

	fflush(stdin);
	gets(str);

}

int main()
{
	p();
	return 0;
}
