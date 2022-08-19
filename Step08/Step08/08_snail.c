#include <stdio.h>

//2차원 배열중에 열 개수가 5개 짜리인 배열을 가리키는 포인터
void printArray(int(*arr)[5]) {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main(void) {
	int arr[5][5] ={ 0 };

	int i = 0, j = -1, s = 1, k = 5, n = 0;

	while (1) {
		//행방향
		for (int p = 0; p < k; p++) {
			n++;
			j+=s;	//s는 증감값
			arr[i][j] = n;
		}
		k--;
		printArray(arr);
		printf("----------------\n");
		if (k == 0) break;
		//열방향
		for (int p = 0; p < k; p++) {
			n++;
			i += s;	//s는 증감값
			arr[i][j] = n;
		}
		s = -s;	//증감값 -1로 변경
		printArray(arr);
		printf("----------------\n");
	}

	return 0;
}