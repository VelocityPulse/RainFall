#include <stdlib.h>
#include <string.h>

class N {

	public:
	char str[64];
	int x;

	N(int a) {
		this->x = a;
	}

	void setAnnotation(char *str) {
		memcpy(this->str, str, strlen(str));
	}

	virtual int operator+(N &rhs) {
		this->x += rhs.x;
		return this->x;
	}

	virtual int operator-(N &rhs) {
		this->x -= rhs.x;
		return this->x;
	}

};



int main(int argc, char **argv)
{

	if (argc == 1)
		exit(0);
	N *a = new N(5);
	N *b = new N(6);

	a->setAnnotation(argv[1]);
	*b + *a;
	return 0;
}





