//함수의 결과값이 n이 2의 n승 결과를 리턴, 단 반복문 x
//숫자 n에 해당하는 팩토리얼 값을 리턴( 5! = 12345 )
#include <stdio.h>

int TwoSquare(int num) {
	if (num == 0) return 1;
	return 2 * TwoSquare(num - 1);
}

int Factorial(int num) {
	if (num == 1) return 1;
	return num * Factorial(num - 1);
}

int main(void) {
	int num;
	printf("2의 n승 : ");
	scanf("%d", &num);

	printf("2의 %d승 : %d\n", num, TwoSquare(num));
	printf("팩토리얼 6! : %d\n", Factorial(6));
	return 0;
}