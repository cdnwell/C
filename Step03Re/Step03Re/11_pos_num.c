#include <stdio.h>

int main(void) {
	int n1, n2, gdc;

	printf("���� �Է�(2��) : ");
	scanf("%d %d", &n1, &n2);

	if (n1 > n2) {
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}

	for (int i = 1; i <= n1; i++) {
		if (n1 % i == 0 && n2 % i == 0)
			gdc = i;
	}

	printf("�ִ� ����� : %d", gdc);

	return 0;
}