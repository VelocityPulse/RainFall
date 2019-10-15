#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{

	char str[128];
	char *auth = 0; // 0x08049aac
	char *service = 0;

	char auth_cmp[] = "auth ";
	char reset_cmp[] = "reset";
	char service_cmp[] = "service";
	char login_cmp[] = "login";

	int i;
	int i2;

	while (1)
	{
		do {

			printf("%p, %p \n", auth, service);

			if (fgets(str, 128, stdin) == NULL)
				return (0); // jump 456

			///////// main+87

			i = 5; // ecx
			i2 = 0; // repz index
			while (str[i2] - auth_cmp[i2] == 0 && i > 0)
			{
				i--;
				i2++;
			}

			// Test si seta et setb sont égaux
			if (i2 == 5) 
			{
				//seta dl = 1
				//setb al = 1
				//movsx eax al: Comme un "mov eax 0" PUIS "mov eax, al"

				auth = malloc(4);
				*auth = 0x0;
				//		a += 0x5;

				int b = 0xffffffff;

				i = 5;
				i2 = -1;
				// calculate the size after a+0x5
				while (str[i++]) ;

				if (i < 30) 
				{
					strcpy(auth, &(str[5]));
				} 
			}
			/////// main+222

			i = 5;
			i2 = 0;
			while (str[i2] - reset_cmp[i2] == 0 && i > 0)
			{
				i--;
				i2++;
			}

			if (i2 == 5)
				free(auth);

			i = 6;
			i2 = 0;
			while (str[i2] - service_cmp[i2] == 0 && i > 0)
			{
				i--;
				i2++;
			}

			if (i2 == 6)
				service = strdup(&(str[7]));

			//////// main++337

			i = 5;
			i2 = 0;
			while (str[i2] - login_cmp[i2] == 0 && i > 0)
			{
				i--;
				i2++;
			}

			if (i2 == 5 && auth[32])
				system("/bin/sh");

		} while (i != 5);
	}

	fwrite("Password:\n", 1, 10, stdout);

	return 0;
}
