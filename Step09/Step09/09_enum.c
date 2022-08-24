#include <stdio.h>

//열거형(enum)
// 상수를 미리 정의해 놓는 문법
// 동시에 여러개의 정수형 상수를 만들어야 할때 사용
// 문자열, 문자와 같은 것 안됨 정수만 가능하다.

enum {
	A, B, C = 100, D, E, F
};

enum command {
	CREATE,		//정수 0을 가짐, 초기화를 가지면 초기화 값부터 1씩 할당
	READ,		//정수 1을 가짐
	UPDATE,		//정수 2를 가짐
	DELETE		//정수 3을 가짐
};

int main(void) {
	printf("%d\n", A);
	printf("%d\n", B);
	printf("%d\n", C);
	printf("%d\n", D);
	printf("%d\n", E);
	printf("%d\n", F);

	//구조체와 선언하는 방식이 같다.
	//구조체와 마찬가지로 typedef 사용이 동일하게 가능하다.
	enum command c;

	c = CREATE;
	printf("%d\n", c);
	c = UPDATE;
	printf("%d\n", c);
	
	//자바에도 열거형이 있지만 쓰는 방법이 다르다.

	return 0;
}