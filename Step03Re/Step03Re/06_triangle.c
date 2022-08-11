#include <stdio.h>

int main(void) {
	int num;
	printf("숫자 입력 : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int j = 0; j < num - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}