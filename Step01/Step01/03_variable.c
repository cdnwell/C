#include <stdio.h>
/*
	변수 타입
		정수형 : short(2) int(4) long(4)
		실수형 : float(4) double(8)
		문자형 : char(1)
	sizeof(?) : ?에 있는 변수 타입이나, 값, 변수가 할당된 바이트 수를 리턴
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