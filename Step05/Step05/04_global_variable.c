#include <stdio.h>
/*
	�������� - ������ ���� ��� (java : static ���� - static���� ������ ����, ��������)
		��� �Լ����� ������ ������ ���
		���������� �Լ� �ۿ��ٰ� ����
*/

//���������� �Լ� �ۿ� ����� �ȴ�.
int count = 0;
int sum(int a, int b) {
	count++;
	return a + b;
}

int main(void) {
	int count = -1;	//���������� ���������� �̸��� ������ ���������� ���� �� �� ����.
	printf("sum : %d\n",sum(1,2));
	printf("sum : %d\n",sum(3,5));
	printf("sum : %d\n",sum(6,7));
	printf("sum : %d\n",sum(8,12));
	printf("count : %d\n", count);

	return 0;
}