#include <stdio.h>
#include "a.h"
#include "b.h"

//헤더는 구성요소가 아님 컴파일이 안됨
//a와 b는 구현부가 헤더파일에 있지 않음
//별도로 만듦, 파일을 기계어로 번역하는 프로그램이 있음
//자바 - .class, c언어 - .obj
//오브젝트 파일을 하나로 묶어주는 역할 -> 링커
//오브젝트 파일 -> exe 파일 : 링크
//gcc 컴파일러는 이 작업을 다 해줘야함
int main(void) {
	printf("%d\n", sum(10, 20));
	printf("%d\n", mul(10, 20));
	return 0;
}