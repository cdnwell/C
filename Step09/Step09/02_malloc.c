#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//동적 할당으로 정수형 변수 10개 저장할 공간을 만든 후에
	//동적 할당한 곳에 1부터 10까지 숫자를 넣어서 초기화

	//int* arr = (int*)malloc(sizeof(int) * 10);

	void* ptr = malloc(40);

	int* arr = ptr;

	for (int i = 0; i < 10; i++) 
		arr[i] = i + 1;

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	printf("\n");

	free(arr);

	//calloc -> 리턴타입 void, 첫번째 인수 - 몇개 짜리 만들건지, 각각의 byte 크기
	arr = (int*)calloc(10, sizeof(int));

	for (int i = 0; i < 10; i++)
		arr[i] = (i + 1)*2;

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	free(arr);

	return 0;
}