#include <stdio.h>
#include <stdlib.h>

int main(void) {
	void* ptr = malloc(sizeof(int) * 4);

	int* arr1 = (int*)ptr;

	for (int i = 0; i < 4; i++) {
		arr1[i] = i + 1;
	}

	for (int i = 0; i < 4; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\n");

	ptr = calloc(6, sizeof(int));

	int* arr2 = (int*)ptr;

	for (int i = 0; i < 6; i++) {
		arr2[i] = i + 1;
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}

	printf("\n");

	arr1 = realloc(arr1, sizeof(int) * 2);

	for (int i = 0; i < 4; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\n");

	for (int i = 0; i < 2; i++) {
		arr1[i] = (i + 1) * 3;
	}

	for (int i = 0; i < 2; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\n");

	return 0;
}