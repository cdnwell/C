#include <stdio.h>

enum {
	A, B, C = 100, D, E, F
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
	printf("%d\n", E);
	printf("%d\n", F);

	enum command c;

	c = CREATE;
	printf("%d\n", c);
	c = UPDATE;
	printf("%d\n", c);

	return 0;
}