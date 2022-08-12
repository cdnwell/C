#include <stdio.h>

int main(void) {
	int arr1[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");

	int arr2[] = { 1,2,3,4,5,6,7 };

	for (int i = 0; i < 7; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");

	//앞에서 부터 순서대로 채움, 나머지 없는 값(빈공간)은 0으로 초기화
	int arr3[5] = { 1,2,3 };

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr3[i]);
	}
	printf("\n");

	//정수형 배열 사이즈가 5인 배열을 전부 0으로 초기화
	//0으로 모두 초기화 하는 방법 , 첫번째 배열에 0을 넣으면 나머지도 0으로 채워짐
	int arr4[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr4[i]);
	}
	printf("\n");

	return 0;
}