#include <stdio.h>
/*
	���� �ϳ� �Է� ���� ��
	�Է¹��� ������ŭ �ﰢ���� ���
	���� �Է� : 7
*/
int main(void) {
	int line;

	printf("�� ���� : ");
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