#include <stdio.h>
//UINT  > unsigned int의 약자
#define UINT unsigned int
#define LL long long
#define PINT int *

int main(void) {
	unsigned int n = 10000;
	int i = 4294967295;	//2^32 2의 32승
	unsigned int ui = 4294967295U;
	UINT uint = 4294967295U;
	LL l = 4294967295LL;	//long 타입은 숫자 맨 뒤에 l을 붙여 주는게 좋다. 안붙여도 됨
	unsigned long long ull = 1844674407370951615ULL;
	//자바에서는 long타입 L하나 붙음
	PINT ptr = &n;

	printf("%d\n", n);
	printf("%d\n", i);
	printf("%u\n", ui);		//부호가 없는 정수 출력 %u
	printf("%u\n", uint);
	printf("%lld\n", l);
	printf("%llu\n", ull);
	printf("%d\n", *ptr);

	return 0;
}