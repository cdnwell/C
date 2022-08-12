#include <stdio.h>
/*
	반지름 하나 매개변수로 받아서 원넓이를 리턴하는 함수

	숫자 두개를 매개변수로 받아서 큰 값을 리턴하는 함수
*/

double circle(double r) {
	return r * r * 3.1415;
}

int max(int n1, int n2) {
	if (n1 > n2)
		return n1;
	else
		return n2;
}

//%g는 자리수 만큼만 보여줌(실수형)
int main(void) {
	int n1, n2;
	double r;
	printf("원 반지름 : ");
	scanf("%lf", &r);
	printf("원 넓이 : %g\n", circle(r));
	printf("숫자 두개 입력 : ");
	scanf("%d %d", &n1, &n2);
	printf("더 큰 값 : %d\n", max(n1, n2));


	return 0;
}