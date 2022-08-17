#include <stdio.h>
/*
	전역변수 - 데이터 영역 사용 (java : static 영역 - static으로 선언한 변수, 전역변수)
		모든 함수에서 동일한 변수를 사용
		전역변수는 함수 밖에다가 선언
*/

//전역변수는 함수 밖에 만들면 된다.
int count = 0;
int sum(int a, int b) {
	count++;
	return a + b;
}

int main(void) {
	int count = -1;	//지역변수와 전역변수가 이름이 같으면 전역변수에 접근 할 수 없다.
	printf("sum : %d\n",sum(1,2));
	printf("sum : %d\n",sum(3,5));
	printf("sum : %d\n",sum(6,7));
	printf("sum : %d\n",sum(8,12));
	printf("count : %d\n", count);

	return 0;
}