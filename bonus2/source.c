#include <string.h>
#include <wchar.h>
#include <stdlib.h>

int language;
int hello1[] = L"Hyvää päivää ";
char hello2[] = "Goedemiddag! ";
char hello3[] = "Hello ";

void greetuser(char *c)
{
	char a[72];

	if (language == 1) {
		((int*)a)[0] = ((int*)hello1)[0];
		((int*)a)[1] = ((int*)hello1)[1];
		((int*)a)[2] = ((int*)hello1)[2];
		((int*)a)[3] = ((int*)hello1)[3];
		((short*)a)[8] = ((short*)hello1)[8];
		((char*)a)[18] = ((char*)hello1)[18];
	} else if (language == 2) {
		((int*)a)[0] = ((int*)hello2)[0];
		((int*)a)[1] = ((int*)hello2)[1];
		((int*)a)[3] = ((int*)hello2)[3];
		((short*)a)[8] = ((short*)hello2)[8];
	} else if (language == 0) {
		((int*)a)[0] = ((int*)hello3)[0];
		((short*)a)[2] = ((short*)hello3)[2];
		((char*)a)[6] = ((char*)hello3)[6];
	}

	strcat(a, c);
	puts(a);
}

int main(int argc, char **argv) 
{
	char *env;
	char a[76];   // esp + 0x50
	char b[80];

	if (argc != 3)
		return 1;
	memset(a, 0, 0x13 * 4); // 76

	strncpy(a, argv[1], 0x28); // 40
	strncpy(a + 0x28, argv[2], 0x20); // 0x20 == 32

	env = getenv("LANG");
	if (env != 0) {
		if (memcmp(env, "fi", 2) == 0) {
			language = 1;
		} else if (memcmp(env, "nl", 2) == 0) {
			language = 2;
		}
	}

	memmove(b, a, 76); // 76

	greetuser(b);

	return 0;
}





