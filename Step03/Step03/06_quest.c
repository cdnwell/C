#include <stdio.h>

int main(void) {

	/*
		구구단 2단 ~ 9단 출력
	*/

	for (int dan = 2; dan < 10; dan++) {
		printf("%d단\n", dan);
		for (int is = 1; is <= 9; is++) {
			printf("%d * %d = %d\n", dan, is, dan * is);
		}
	}

	return 0;
}