#include <stdio.h>

void swap(int* ptr1, int* ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(void) {
	int n1 = 10, n2 = 20;
	swap(&n1, &n2);
	//어떤 값이 더라도 주소값을 전달하면 값 변경 가능

	printf("n1 : %d, n2 : %d\n", n1, n2);

	return 0;
}