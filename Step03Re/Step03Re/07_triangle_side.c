#include <stdio.h>

int main(void) {
	int num;
	printf("���� �Է� : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int j = 0; j < num - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < i * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}