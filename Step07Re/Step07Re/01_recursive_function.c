#include <stdio.h>
//Q]1���� 10������ ���ڸ� ���ʷ� �ֿܼ� ����ϴ� ����Լ��� ����ÿ�
void PrintNum(int num) {
	if (num == 0) return;
	PrintNum(num - 1);
	printf("%d\n", num);
}

int main(void) {
	PrintNum(10);
	return 0;
}