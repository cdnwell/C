#include <stdio.h>

//����Լ��� ���� �θ��� �Լ��� ������ �������� ���� ������ ��� ����־
//�޸𸮸� ���� �Ծ� ���� ���� ����� �Ұ����ϴ�.
void PrintNumber(int n) {
	printf("%d\n", n);
	if (n == 0) return;
	PrintNumber(n - 1);
}

int main(void) {
	PrintNumber(10);
	return 0;
}