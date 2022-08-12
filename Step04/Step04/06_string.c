#include <stdio.h>
//자바에서는 문자열을 char형 배열로 관리한다.
int main(void) {

	//한글 = 2byte
	char str1[] = "Hello World";
	char str2[] = "안녕하세요";

	//서식문자 %s > 문자열 출력
	//널 문자를 만날 때 까지 출력
	//널 문자를 지우면 0을(null로 취급) 만날 때 까지 계속 읽는다.
	printf("str1 : %s\n",str1);
	printf("str2 : %s\n",str2);

	//10진수로 나타냄 : 비정상적인 값
	printf("str1 : %d\n", str1);
	printf("str2 : %d\n", str2);

	//16진수로 나타냄 : 정상적인 값
	printf("str1 : %X\n", str1);
	printf("str2 : %X\n", str2);

	//가장 정확
	printf("str1 : %p\n", str1);
	printf("str2 : %p\n", str2);

	printf("str1 : %d\n", sizeof(str1));
	printf("str2 : %d\n", sizeof(str2));

	printf("str1 : %d %c\n", str1[11], str1[11]);
	printf("str2 : %d %c\n", str2[10], str2[10]);

	return 0;
}