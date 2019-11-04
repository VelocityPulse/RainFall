#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	FILE* fd;
	char a[66];
	int value;
// space ?
	char b[33];

	fd = fopen("/home/user/end/.pass", "r");

	memset(b, 0, 33);

	if (fd == 0 || argc != 2)
		return -1;
	
	fread(b, 1, 66, fd);
	value = 0;

	b[atoi(argv[1])] = 0;

	fread(a, 1, 65, fd);

	fclose(fd);

	if (strcmp(b, argv[1]) == 0) {
		execl("/bin/sh", "sh", 0);
	} else {
		puts(a);
	}



return 0;
}
