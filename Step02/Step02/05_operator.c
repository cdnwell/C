#include <stdio.h>
/*
	true : 1 , false : 0
	4byte ���ڷ� �Ǵ�.
	true : 0�� �ƴ� ��
	false : 0 (�� ����)
*/
int main(void) {
	int a = 10;

	printf("%d\n", a < 20);
	printf("%d\n", a > 20);
	printf("%d\n", a <= 10);
	printf("%d\n", a >= 10);
	printf("%d\n", a != 10);
	printf("%d\n", a == 10);
	printf("sizeof %d\n", sizeof(a < 20));
	
	return 0;
}