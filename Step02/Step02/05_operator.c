#include <stdio.h>
/*
	true : 1 , false : 0
	4byte 숫자로 판단.
	true : 0이 아닌 값
	false : 0 (만 가능)
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