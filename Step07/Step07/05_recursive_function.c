#include <stdio.h>

//재귀함수는 많이 부르면 함수가 끝나는 지점까지 가기 전까지 모두 살아있어서
//메모리를 많이 먹어 많은 양의 계산이 불가능하다.
void PrintNumber(int n) {
	printf("%d\n", n);
	if (n == 0) return;
	PrintNumber(n - 1);
}

int main(void) {
	PrintNumber(10);
	return 0;
}