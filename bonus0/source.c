#include <stdio.h>
#include <unistd.h>
#include <string.h>

void p(char *tab, char *dash)
{
	char buff[4096];

	puts(dash);
	read(0, buff, 4096);

	*strchr(buff, '\n') = '\0';
	strncpy(tab, buff, 20);
}

void pp(char *param)
{
	char a[28];
	char b[20];

	p(b, " - ");
	p(a, " - ");

	strcpy(param, b);
	param[strlen(param)] = ' ';
	strcat(param, a);
}

int main()
{
	char a[42];

	pp(a);
	puts(a);
	return 0;
}

















