#include <stdio.h>

int main(void) {
	//동적할당을 해야 입력한 값으로 배열 선언가능
	//이전까지는 상수로만 선언가능
	int size;
	printf("배열 개수 입력 : ");
	scanf("%d", &size);

	//int arr[size];
	int arr[5];

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;

	// c언어는 length가 없음
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
