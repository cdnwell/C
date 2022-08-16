#include <stdio.h>
/*
	call : 메서드나 함수를 불러 쓰겠다.
	call by value
*/

void swap(int n1, int n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

int main(void) {
	int n1 = 10, n2 = 20;
	swap(n1, n2);

	printf("n1 : %d, n2 : %d\n", n1, n2);

	return 0;
}