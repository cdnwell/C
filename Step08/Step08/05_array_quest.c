#include <stdio.h>
/*
	2차원 배열 2행 4열 짜리 배열에 초기화

	1 2 3 4
	5 6 7 8

	2차원 배열 4행 2열 짜리 선언 후에
	위에 생성해서 초기화한 배열을 4행 2 열 배열에 
	복사한 후에 배열 전체 내용을 출력

	1 5
	2 6
	3 7
	4 8
*/
int main(void) {
	int arr1[2][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};

	int arr2[4][2];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			arr2[i][j] = arr1[j][i];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}

	return 0;
}