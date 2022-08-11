#include <stdio.h>
/*
	정수 하나 입력 받은 후
	입력받은 정수만큼 삼각형을 출력
	숫자 입력 : 7
*/
int main(void) {
	int line;

	printf("줄 개수 : ");
	scanf("%d", &line);

	for (int i = 1; i <= line; i++) {
		for (int j = 0; j < line - i; j++) 
			printf(" ");
		
		for (int j = 0; j < i; j++) 
			printf("*");
		printf("\n");
	}

	return 0;
}