#include <stdio.h>

int main(void) {

	/*
		������ 2�� ~ 9�� ���
	*/

	for (int dan = 2; dan < 10; dan++) {
		printf("%d��\n", dan);
		for (int is = 1; is <= 9; is++) {
			printf("%d * %d = %d\n", dan, is, dan * is);
		}
	}

	return 0;
}