#include <stdio.h>

void PrintBin1(int n) {
	int div = 1;
	while (div <= n) div *= 2;
	div /= 2;
	//printf("%d", div);

	while (div > 0) {
		printf("%d ", n / div);
		n %= div;
		//printf(" n : %d ", n);
		div /= 2;
	}
}

//2�� ���� ������ �̿��ؼ� ���
//�迭�� �̿��ؼ� 32ĭ ¥�� char ���� ������ ���� ������ �� ������
//�ϱ� ����
void PrintBin2(int n) {
	if (n < 2) {
		printf("%d", n);
	}
	else {
		PrintBin2(n / 2);
		printf("%d", n % 2);
	}
}

void PrintHex(int n) {
	if (n < 16) {
		printf("%X", n);
	}
	else {
		PrintHex(n / 16);
		printf("%X", n % 16);
	}
}

int main(void) {
	int num;

	printf("���� �Է� : ");
	scanf("%d", &num);

	//2������ ��ȯ�ؼ� ����ϴ� �Լ��� ȣ��
	PrintBin1(num);
	printf("\n");
	PrintBin2(num);
	printf("\n");
	PrintHex(num);

	return 0;
}