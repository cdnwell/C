#include <stdio.h>
/*
	static 변수
		함수가 끝나더라도 계속 보관해야 되는 값이 있을 때
		static으로 변수 선언을 하면 stack이 아니라 데이터 영역에 메모리를 할당
		static은 프로그램 실행시 먼저 메모리가 할당
*/
int sum(int a, int b) {
	static int count = 0;	//실행되는 시기 : 프로그램 실행이 될 때 한번 실행됨. 함수 실행될때마다 실행 X
	count++;
	printf("count : %d\n", count);

	return a + b;
}

int main(void) {
	sum(10, 2);
	sum(14, 22);
	sum(17, 62);
	sum(14, 21);
	sum(10, 82);
	return 0;
}