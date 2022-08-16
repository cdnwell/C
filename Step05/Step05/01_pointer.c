#include <stdio.h>
/*
	포인터(pointer)
		- 메모리 주소값만 저장하는 변수
		- 저장하고 있는 주소값을 이용하여 주소값 근처나,
		  해당 주소에 저장되어 있는 값을 읽고 쓰기가 가능함.

	※ 키워드
		포인터는 메모리 주소값만 저장하는 변수
*/
int main(void) {
	int num = 10;
	int* ptr = &num;	//포인터 변수의 별은 변수타입, 변수명, 띄어쓰기 사이에 모두 위치 가능

	printf("%p %p\n", &num, ptr);
	printf("%d %d\n", num, *ptr);

	*ptr = num;
	ptr = &num;	//두 개 는 같음, 참조형 변수

	return 0;
}