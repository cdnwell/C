#include <stdio.h>
/*
������ �ϳ� �Ű������� �޾Ƽ� �����̸� �����ϴ� �Լ�

```
���� �ΰ��� �Ű������� �޾Ƽ� ū ���� �����ϴ� �Լ�

```

*/

double circle(double n1, double n2);

int max(int n1, int n2);

int main(void) {
	double n1, n2;
	int n3, n4;

	printf("������ �ΰ��� �Է����ּ��� : ");
	scanf("%lf %lf", &n1, &n2);
	printf("�� ���� : %g\n", circle(n1, n2));

	printf("���� �ΰ� �Է� : ");
	scanf("%d %d", &n3, &n4);
	printf("ū �� : %d", max(n3, n4));

	return 0;
}

double circle(double n1, double n2) {
	return n1 * n2 * 3.1415;
}

int max(int n1, int n2) {
	return n1 > n2 ? n1 : n2;
}