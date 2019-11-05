#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	FILE* fd;
	char first_read[132];

	fd = fopen("/home/user/end/.pass", "r");

	memset(first_read, 0, 132);

	if (fd == 0 || argc != 2)
		return -1;

	fread(first_read, 1, 66, fd);
	first_read[65] = 0;

	first_read[atoi(argv[1])] = 0;

	fread(first_read + 66, 1, 65, fd);

	fclose(fd);

	if (strcmp(first_read, argv[1]) == 0) {
		execl("/bin/sh", "sh", 0);
	} else {
		puts(first_read + 66);
	}

	return 0;
}
