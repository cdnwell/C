#include<stdio.h>

int main(void) {
	int i = 1;
	do {
		printf("%d ", i++);
	} while (i < 11);

	return 0;
}