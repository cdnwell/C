#include <stdio.h>

//main 함수 아래에 함수가 있음을 알려줌.
//함수 만들 때 되도록이면 main 위에 만들기
int sum(int n1, int n2);
int main(void) {
	int result = 0;
	result = sum(10, 20);

	printf("result : %d\n", result);

	return 0;
}

// 예전에는 main 함수 뒤에는 검색 안함
int sum(int n1, int n2) {
	return n1 + n2;
}