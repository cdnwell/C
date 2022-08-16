#include <stdio.h>

int main(void) {
	int num1 = 10, num2 = 20;
	int* ptr = &num1;

	//%d라고 해도 되지만 64bit 운영체제라 %d는 32bit까지만 표현 가능하므로 오류남
	//%ld로 표현하면 가능 (long long : 자료형) 8byte int
	printf("num1의 주소값 : %p, ptr이 저장하고 있는 주소값 : %p\n", &num1, ptr);
	num1 += 1;	//11 : num1
	*ptr += 1;	//12 : num1
	printf("num1의 저장하고 있는 값 : %d, ptr이 가리키고 있는 대상의 값 : %d\n", num1, *ptr);

	ptr = &num2;
	printf("num2의 주소값 : %p, ptr이 저장하고 있는 주소값 : %p\n", &num2, ptr);
	num2 += 1;
	*ptr += 1;
	printf("num2의 저장하고 있는 값 : %d, ptr이 가리키고 있는 대상의 값 : %d\n", num2, *ptr);
	return 0;
}