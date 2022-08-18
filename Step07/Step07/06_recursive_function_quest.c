#include <stdio.h>

//함수의 결과값이 n이 2의 n승 결과를 리턴, 단 반복문 x
int PowToNum(int n) {
	if (n == 0) return 1;
	return 2 * PowToNum(n - 1);
}

//숫자 n에 해당하는 팩토리얼 값을 리턴( 5! = 1*2*3*4*5 )
int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int main(void) {
	int n;
	
	printf("숫자 입력 : ");
	scanf("%d", &n);

	printf("2의 %d승은 : %d\n", n, PowToNum(n));

	printf("팩토리얼 숫자 입력 : ");
	scanf("%d", &n);
	
	printf("%d! : %d", n, factorial(n));

	return 0;
}