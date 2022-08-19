#include <stdio.h>
//선형 구조 -> 2차원, n차원 배열


int main(void) {
	int arr[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%p\n", &arr[i][j]);
		}
		printf("----------------\n");
	}

	int* ptr = arr;
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
		printf("%p\n", ptr++);
	}
	
	//배열 나열법 언어에 따라서 다름

	return 0;
}