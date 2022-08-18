#include <stdio.h>

int main(void) {
	char str[] = "Hello World";
	//포인터 변수 ptr은 Hello World라는 객체의 주소값만 저장한다.
	//그래서 ptr[0] = 'K';로 값을 바꾸는 것이 안된다.
	//ptr = str;로 배열을 받아서 ptr[0] = 'K';로 바꿀 수는 있다.
	char* ptr = "Hello World";

	printf("%s\n", str);
	printf("%s\n", ptr);

	str[0] = 'K';
	printf("%s\n", str);

	ptr = str;
	ptr[0] = 'T';
	printf("%s\n", ptr);

	return 0;
}