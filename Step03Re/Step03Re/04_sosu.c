#include <stdio.h>

int main(void) {
	int num, temp, total = 0;

	printf("�Է��� ���� ���� : ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		printf("���� �Է� : ");
		scanf("%d", &temp);
		total += temp;
	}

	printf("��� : %.2f", (double)total / num);

	return 0;
}