#include <stdio.h>

int main(void) {
	/*
	*	���� �ϳ��� �Է� �޾Ƽ� 
	*	�Է��� ������ �������� ���
	*/

	int is = 1, dan;

	printf("���Է� : ");
	scanf("%d",&dan);
	while (is <= 9) {
		printf("%2d * %2d = %3d\n", dan, is, dan * is);
		is++;
	}


	return 0;
}