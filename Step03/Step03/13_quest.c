#include <stdio.h>
/*
	���� �� �� �Է��� �޾Ƽ� 
	�� ���� �ִ� ������� ���
*/
int main(void) {

	int n1, n2, gcd;
	printf("���� �� �� �Է� : ");
	scanf("%d %d", &n1, &n2);

	if (n1 > n2) {
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}

	for (int i = 1; i <= n1; i++) {
		if (n1 % i == 0 && n2 % i == 0)
			gcd = i;
	}

	printf("�� ���� �ִ� ����� : %d", gcd);

	return 0;
}