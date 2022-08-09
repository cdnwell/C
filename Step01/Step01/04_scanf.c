#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	int a = 0;

	printf("숫자 입력 : ");
	scanf_s("%d", &a);

	printf("입력 받은 정수 : %d\n", a);

	return 0;
}