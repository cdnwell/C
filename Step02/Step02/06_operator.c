#include <stdio.h>

int main(void) {
	int a = 10;
	//������ 2�� �̻��̸� ���� X
	printf("%d\n", 5 < a < 10);

	/*
		��������
			AND	:	&&		---> ������ ������ ��� true�� �� true
			OR	:	||		---> ������ ������ �ϳ��� true�� true
			NOT :	!		---> true�� false, false�� true ������ ������

		�ܶ�ȸ�ε� ����ȴ�.

	*/
	printf("%d\n", a > 5 && a < 10);
	printf("%d\n", a < 5 || a > 7);
	printf("%d\n", !(a > 5));
	printf("%d\n", !a);

	return 0;
}