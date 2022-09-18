#include <stdio.h>

void test(int a) {
	if (a <= 0) return;
	printf("%d¹øÂ° printf\n", a);
	return test(a - 1);
}

int main(void) {

	test(5);
	return 0;
}