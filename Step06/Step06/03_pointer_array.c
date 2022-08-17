#include <stdio.h>

int main(void) {
	int n1 = 1;
	int n2 = 2;
	int n3 = 3;
	int n4 = 4;

	int* arr[4] = {&n1, &n2, &n3, &n4};

	for (int i = 0; i < 4; i++) {
		printf("%d\n", *arr[i]);
	}

	return 0;
}