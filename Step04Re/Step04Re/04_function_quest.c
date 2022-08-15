#include <stdio.h>
/*
반지름 하나 매개변수로 받아서 원넓이를 리턴하는 함수

```
숫자 두개를 매개변수로 받아서 큰 값을 리턴하는 함수

```

*/

double circle(double n1, double n2);

int max(int n1, int n2);

int main(void) {
	double n1, n2;
	int n3, n4;

	printf("반지름 두개를 입력해주세요 : ");
	scanf("%lf %lf", &n1, &n2);
	printf("원 넓이 : %g\n", circle(n1, n2));

	printf("정수 두개 입력 : ");
	scanf("%d %d", &n3, &n4);
	printf("큰 값 : %d", max(n3, n4));

	return 0;
}

double circle(double n1, double n2) {
	return n1 * n2 * 3.1415;
}

int max(int n1, int n2) {
	return n1 > n2 ? n1 : n2;
}