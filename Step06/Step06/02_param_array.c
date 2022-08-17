#include <stdio.h>
//배열의 모든 요소를 출력하는 함수를 작성
void printArray(int arr[], int len) {
	//c언어에서는 함수에서 따로 개수를 구할 수 없다.
	//아래와 같이 길이를 연산하면 arr은 포인터 변수로 취급되어 8의 값을 가지고
	//항상 len이 2가 나온다 (8 / 4 이므로)
	//int len = sizeof(arr) / sizeof(int);
	//printf("%d\n", len);

	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}

int main(void) {
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
	int arr3[10] = { 1,2,3,4 };

	printArray(arr1,sizeof(arr1) /sizeof(int));
	printArray(arr2,sizeof(arr2) /sizeof(int));
	printArray(arr3,sizeof(arr3) /sizeof(int));

	return 0;
}