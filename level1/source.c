#include "stdio.h"

void run()
{
	char str[] = "Good... Wait what?\n";
	fwrite(str, 1, 19, stdout);
}

int main(int argc, char **argv)
{
	gets(&argv[0][16]);
	return 0;
}
