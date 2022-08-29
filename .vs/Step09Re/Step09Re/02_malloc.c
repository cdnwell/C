#include <stdio.h>
#include <stdlib.h>

int main(void) {
	void* ptr = malloc(40);

	int* arr = ptr;

	for (int i = 0; i < 10; i++)
		arr[i] = i + 1;

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	printf("\n");
	
	free(arr);

	arr = (int*)calloc(10, sizeof(short));

	for (int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 2;

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	printf("\n");

	free(arr);

	return 0;
}