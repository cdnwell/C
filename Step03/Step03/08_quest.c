#include <stdio.h>
/*
	���� �ϳ� �Է� ���� ��
	�Է� ���� ���� ��ŭ �ﰢ���� ���
	���� �Է� : 7
*/
int main(void) {
	int num;

	printf("���� �Է� : ");
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