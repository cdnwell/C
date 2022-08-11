#include <stdio.h>
/*
	1부터 100까지 숫자들 중 3과 5의 배수를 출력
	단 3과 5의 공배수는 한번만 출력
	반복문 if문을 사용

	3 5 6 9 10 12 ...
*/

int main(void) {
	
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}