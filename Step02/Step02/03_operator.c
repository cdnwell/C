#include <stdio.h>
/*
*	복합대입 연산자
*		+=	-=	*=	/=	%=
*/
int main(void) {
	int n = 10;

	n += 5;
	printf("%d\n", n);

	n -= 3;
	printf("%d\n", n);

	n *= 2;
	printf("%d\n", n);

	return 0;
}