#include <stdio.h>

int main(void) {
	//int i를 먼저 선언해주는 것이 일반적임
	for (int i = 1; i < 11; i++) {
		printf("%d ", i);
	}
	//안됨 i = 지역변수
	//printf("%d", i);
	return 0;
}