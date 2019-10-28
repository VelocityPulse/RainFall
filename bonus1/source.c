int main(int argc, char *argv[])
{
	int		i;				// esp + 0x3c
	char	buffer[40];		// right behind this buffer is i at esp+0x3c

	i = atoi(argv[1]);
	if (i > 9)
		return 1;
	memcpy(buffer, argv[2], i * 4);
	return 0;
}
