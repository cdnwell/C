#include <stdio.h>
/*
	���� Ÿ��
		������ : short(2) int(4) long(4)
		�Ǽ��� : float(4) double(8)
		������ : char(1)
	sizeof(?) : ?�� �ִ� ���� Ÿ���̳�, ��, ������ �Ҵ�� ����Ʈ ���� ����
*/
int main(void) {
	printf("%d\n", sizeof(int));
	int n = 10;
	float f = 3.1415f;
	char ch = 'A';

	printf("int : %d\n", n);
	printf("float : %.4f\n", f);
	printf("char : %c\n", ch);
	return 0;
}