#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{

	char *sh_string = "/bin/sh";
	char *nope = "No !";

	int atoiret = atoi(argv[0]);

	if (atoiret == 423) {

		char *sh_strdup = strdup(sh_string);

		int gid = getegid();
		int uid = geteuid();

		int retgid = setresgid(gid, gid, gid);
		int retuid = setresuid(uid, uid, uid);

		execv(sh_string, sh_strdup);

	} else {
		fwrite(nope, 0x1, 0x5, stderr);
	}

	return 0;
}
