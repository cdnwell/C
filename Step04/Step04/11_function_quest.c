#include <stdio.h>
/*
	������ �ϳ� �Ű������� �޾Ƽ� �����̸� �����ϴ� �Լ�

	���� �ΰ��� �Ű������� �޾Ƽ� ū ���� �����ϴ� �Լ�
*/

double circle(double r) {
	return r * r * 3.1415;
}

int max(int n1, int n2) {
	if (n1 > n2)
		return n1;
	else
		return n2;
}

//%g�� �ڸ��� ��ŭ�� ������(�Ǽ���)
int main(void) {
	int n1, n2;
	double r;
	printf("�� ������ : ");
	scanf("%lf", &r);
	printf("�� ���� : %g\n", circle(r));
	printf("���� �ΰ� �Է� : ");
	scanf("%d %d", &n1, &n2);
	printf("�� ū �� : %d\n", max(n1, n2));


	return 0;
}