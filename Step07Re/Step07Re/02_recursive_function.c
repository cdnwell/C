//�Լ��� ������� n�� 2�� n�� ����� ����, �� �ݺ��� x
//���� n�� �ش��ϴ� ���丮�� ���� ����( 5! = 12345 )
#include <stdio.h>

int TwoSquare(int num) {
	if (num == 0) return 1;
	return 2 * TwoSquare(num - 1);
}

int Factorial(int num) {
	if (num == 1) return 1;
	return num * Factorial(num - 1);
}

int main(void) {
	int num;
	printf("2�� n�� : ");
	scanf("%d", &num);

	printf("2�� %d�� : %d\n", num, TwoSquare(num));
	printf("���丮�� 6! : %d\n", Factorial(6));
	return 0;
}