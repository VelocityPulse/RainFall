#include <stdio.h>

int				main(int argc, char *argv[])
{
	FILE		*fd;
	char		buff[132]; // esp + 0x18
	//buff[132-135] is fd 

	fd = fopen("/home/user/end/.pass", "r");
	memset(buff, 0, 132); // 'inline'
	if (fd == NULL)
		return (-1);
	if (argc != 2)
		return (-1);
	fread(buff, 1, 66, fd);
	buff[65] = 0;
	buff[atoi(argv[1])] = 0;
	fread(buff + 66, 1, 65, fd);
	close(fd);
	if (strcmp(buff, argv[1]) == 0)
	{
		execl("/bin/sh", "sh", 0);
	}
	else
	{
		puts(buff[65]);
	}
	return 0;
}
