#include <stdio.h>

int main(void) {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;		//int *ptr = &arr[0]°ú °°´Ù

	for (int i = 0; i < 5; i++) {
		printf("%d ", ptr[i]);
	}

	return 0;
}