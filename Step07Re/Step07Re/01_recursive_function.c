#include <stdio.h>
//Q]1부터 10까지의 숫자를 차례로 콘솔에 출력하는 재귀함수를 만드시오
void PrintNum(int num) {
	if (num == 0) return;
	PrintNum(num - 1);
	printf("%d\n", num);
}

int main(void) {
	PrintNum(10);
	return 0;
}