#include <stdio.h>
//컴파일 하기 전에 코드 추가 include -> 선행 처리자
//매크로라고도 불림
//매크로는 사용자가 할일을 대신 해주는 것
//매크로함수 - 특정일을하는 것을 바꿔주는것, 매크로 상수 - 특정값을 바꿔주는 것
//매크로 상수 예] 변하지 않는 값 pi

//자바는 선행처리자 개념이 없음 import만 있음, 하지만 c와 다르게 import는 파일만 연결해주는 것
//c에서는 직접 씀

//매크로 상수는 미리 이름을 지정하기 때문에 다 대문자를 쓴다.
#define NAME "홍길동"
#define AGE 20
//define 컴파일 되기 전에 치환
#define HELLO printf("Hello World\n");

int main(void) {
	printf("%s %d\n", NAME, AGE);
	HELLO		//세미콜론을 찍지 않아도 기존에 있기 때문에 문장 실행 가능

	return 0;
}