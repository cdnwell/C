#include <stdio.h>

enum {
	A,B,C,D,E,F
};

enum command {
	CREATE,
	READ,
	UPDATE,
	DELETE
};

int main(void) {
	printf("%d\n", A);
	printf("%d\n", B);
	printf("%d\n", C);
	printf("%d\n", D);

	enum command c;

	c = CREATE;
	printf("%d\n", c);

	c = DELETE;
	printf("%d\n", c);

	return 0;
}