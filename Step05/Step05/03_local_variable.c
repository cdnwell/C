#include <stdio.h>
/*
	��������(local variable) --> stack �޸𸮿� ����
		{}������ ���� �����ϰ� �ش� {}������ �޸𸮿��� �����Ǵ� ����
		���������� stack �޸𸮿� ���� �ش� ������ ������ stack�� �� ���ư�
*/
int main(void) {
	int i = 1, count = 200;
	if (i == 1) {
		//int count = 100;	//if���� ������ ������
		printf("count : %d\n", count);
	}
	printf("count : %d\n", count);

	return 0;
}