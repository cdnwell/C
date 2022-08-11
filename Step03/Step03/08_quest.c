#include <stdio.h>
/*
	정수 하나 입력 받은 후
	입력 받은 정수 만큼 삼각형을 출력
	숫자 입력 : 7
*/
int main(void) {
	int num;

	printf("숫자 입력 : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int j = 0; j < num - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}