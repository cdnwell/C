#include <stdio.h>

//�Լ��� ������� n�� 2�� n�� ����� ����, �� �ݺ��� x
int PowToNum(int n) {
	if (n == 0) return 1;
	return 2 * PowToNum(n - 1);
}

//���� n�� �ش��ϴ� ���丮�� ���� ����( 5! = 1*2*3*4*5 )
int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int main(void) {
	int n;
	
	printf("���� �Է� : ");
	scanf("%d", &n);

	printf("2�� %d���� : %d\n", n, PowToNum(n));

	printf("���丮�� ���� �Է� : ");
	scanf("%d", &n);
	
	printf("%d! : %d", n, factorial(n));

	return 0;
}