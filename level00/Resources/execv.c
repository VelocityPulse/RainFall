#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {

	char *args[2] = {0};


	args[0] = strdup("/bin/sh");

	// tester de tronquer strdup pour ne laisser aparaitre
	// que /sh

	execv("/bin/sh", args);

	return 0;

}
