#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{

	char *x80c5348 = "/bin/sh";
	char *x80c5350 = "No !";

	int atoiret = atoi(argv[0]);

	int eax;
	int esp_x8;
	int esp_x4;
	int esp_x18;
	int esp;
	int esp_x1c;
	int esp_xc;

	if (atoiret == 423) {

		char *esp_x10 = strdup("/bin/sh");
		
		esp_x1c = getegid();
		esp_x18 = geteuid();

		eax = esp_x1c;
		esp_x8 = eax;
		eax = esp_x1c;
		esp_x4 = eax;
		eax = esp_x1c;
		esp = eax;

		eax = setresgid(esp, esp_x4, esp_x8);

		eax = esp_x18;
		esp_x8 = eax;
		eax = esp_x18;
		esp_x4 = eax;
		esp = eax;

		eax = setresuid(esp, esp_x4, esp_x18);

		eax = esp_x10;

		esp_x4 = eax;
		esp = x80c5348;
		
		execv(esp, esp_x4);

	} else {
		//  edx, ds:0x80ee170
		//  edx, eax
		
		eax = x80c5350;
		esp_xc = edx;
		esp_x8 = 0x5;
		esp_x4 = 0x1;
		esp = eax;

		fwrite(esp, esp_x4, esp_x8, esp_xc);
	}

	//cmp

	return 0;
}
