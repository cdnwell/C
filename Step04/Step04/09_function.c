#include <stdio.h>

//main �Լ� �Ʒ��� �Լ��� ������ �˷���.
//�Լ� ���� �� �ǵ����̸� main ���� �����
int sum(int n1, int n2);
int main(void) {
	int result = 0;
	result = sum(10, 20);

	printf("result : %d\n", result);

	return 0;
}

// �������� main �Լ� �ڿ��� �˻� ����
int sum(int n1, int n2) {
	return n1 + n2;
}