#include <stdio.h>
//2차원 배열 -> 행번호, 열번호
//배열 마다 개수를 다르게하는 것 -> 래기드 배열 (java에서는 가능 c에서는 안된다.)

int main(void) {
	//		3행 5열
	int arr1[3][5] = {
		{1,2,3,4,5}, // 0번째
		{6,7,8,9,10},	//1번째
		{11,12,13,14,15}	//2번째
	};

	//arr1 처음부터 마지막까지 출력하기
	//접근 -> 행부터
	for (int i = 0; i < 3; i++) {
		printf("%d번째 행\n", i);
		for (int j = 0; j < 5; j++) {
			printf("%d\n", arr1[i][j]);
		}
	}

	int arr2[4][4] = {
		{1,2,3,4},
		{5,6},
		{7,8,9},
		{10}
	};

	for (int i = 0; i < 4; i++) {
		printf("%d번 째\n", i);
		for (int j = 0; j < 4; j++) {
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("---------------\n");

	//int arr3[5][5] = { 1,2,3,4 };
	int arr3[5][5] = { 1,2,3,4,5,6,7,8,9 };	//개수가 넘어가면 다음 행으로 넘어감
	//포인터를 잘 쓰면 다차원 배열도 포인터로 접근 가능하다.

	for (int i = 0; i < 5; i++) {
		printf("%d번 행\n", i);
		for (int j = 0; j < 5; j++) {
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}

	return 0;
}