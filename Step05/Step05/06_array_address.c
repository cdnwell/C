#include <stdio.h>

int main(void) {
	/*
		정수형 배열 길이가 5인 배열을 선언한 뒤
		배열의 모든 요소의 주소값을 출력
	*/
	int arr[5];
	for (int i = 0; i < 5; i++) {
		printf("%d번 째 : %p\n", i, &arr[i]);
		//메모리 주소는 맨 끝 두자리만 보면 된다.
	}

	/*
		double형 배열 길이가 5인 배열을 선언한 뒤
		배열의 모든 요소의 주소값을 출력
	*/
	printf("-----------\n");
	double arr2[5];
	for (int i = 0; i < 5; i++) {
		printf("%d번 째 : %p\n", i, &arr2[i]);
	}

	return 0;
}