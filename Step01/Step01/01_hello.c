#include <stdio.h>

int main(void) {
	// c언어에서 함수에 void가 들어가면 main 함수는 받아올 값 없다는 뜻, 요즘은 안써도 된다.
	// 옛날 컴파일러는 에러 나기도 함
	// 프로그램이 종료되면 프로그램이 정상적으로 끝났음을 알려줘야 됨
	// 요즘은 안써줘도 된다.
	
	printf("Hello World");

	return 0;
}