#include <stdio.h>
/*
	static ����
		�Լ��� �������� ��� �����ؾ� �Ǵ� ���� ���� ��
		static���� ���� ������ �ϸ� stack�� �ƴ϶� ������ ������ �޸𸮸� �Ҵ�
		static�� ���α׷� ����� ���� �޸𸮰� �Ҵ�
*/
int sum(int a, int b) {
	static int count = 0;	//����Ǵ� �ñ� : ���α׷� ������ �� �� �ѹ� �����. �Լ� ����ɶ����� ���� X
	count++;
	printf("count : %d\n", count);

	return a + b;
}

int main(void) {
	sum(10, 2);
	sum(14, 22);
	sum(17, 62);
	sum(14, 21);
	sum(10, 82);
	return 0;
}