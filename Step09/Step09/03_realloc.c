#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int* arr = (int*)malloc(sizeof(int) * 10);

	for (int i = 0; i < 10; i++) {
		arr[i] = i + 1;
	}

	printf("%p\n", arr);		//메모리가 동적할당 된 곳 주소를 출력

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	printf("\n");

	//컴파일러 버전에 따라서 재할당을 할 때 크기를 줄이면 
	//메모리 주소가 안바뀌기도 한다.

	//재할당
	//최초의 동적할당한 곳 주소랑, 몇 바이트 할당할지
	//arr = (int*)realloc(arr, sizeof(int) * 5);
	arr = (int*)realloc(arr, sizeof(int) * 15);
		
	printf("%p\n", arr);

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}