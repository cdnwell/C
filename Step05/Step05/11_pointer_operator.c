#include <stdio.h>

int main(void) {
	//int* p1 = 10;
	//double* p2 = 10;
	
	//10번지, 메모리값 넣을 때에는 16진수로 넣는 것이 일반적이다.
	//접근 까지는 괜찮지만(메모리 번지에) 이미 사용중인 메모리 값을
	//바꾸면 문제가 생긴다. 프로그램 터짐
	int* p1 = 0xA;	
	double* p2 = 0xA;

	printf("p1 : %p\tp2 : %p\n", p1,p2);
	printf("p1 : %p\tp2 : %p\n", p1+1,p2+1);
	printf("p1 : %p\tp2 : %p\n", p1+2,p2+2);


	return 0;
}