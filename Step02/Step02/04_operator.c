#include <stdio.h>

int main(void) {
	
	int n1 = 10, n2 = 10;

	printf("%d\n", n1);
	printf("%d\n", n1++);
	printf("%d\n", n1);

	printf("%d\n", n2);
	printf("%d\n", ++n2);
	printf("%d\n", n2);

	return 0;
}