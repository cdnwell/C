#include <stdio.h>
//�Լ��� 10���� ���� ������ 2������ ��Ÿ���� ����Լ��� �Լ��� �����Ͻÿ�

void PrintBinary(int num) {
	if (num < 2) {
		printf("%d",num);
	}
	else {
		PrintBinary(num / 2);
		printf("%d", num % 2);

	}
}

void LoopBinary(int num) {
	int div = 1;
	while (div <= num) div *= 2;
	div /= 2;

	while (div > 0) {
		printf("%d", num / div);
		num %= div;
		div /= 2;
	}

}

void PrintHex(int num) {
	if (num < 16) {
		printf("%X", num);
	}
	else {
		PrintHex(num / 16);
		printf("%X", num % 16);
	}
}


int main(void) {
	int num;

	printf("2������ ��ȯ�� ���ڸ� �Է����ּ��� : ");
	scanf("%d", &num);

	PrintBinary(num);
	printf("\n");
	LoopBinary(num);
	printf("\n");
	PrintHex(num);
	return 0;
}