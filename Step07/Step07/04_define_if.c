#include <stdio.h>
//선택적 컴파일
#define MODE 1

int main(void) {
//워터 마크로 적용되지 않는 부분이 워터마크 표시된다. 색이 흐려지거나 달라짐
//#endif를 붙여줘야 #if문이 끝났다는 것을 알 수 있다.
//선행처리자

#if MODE == 1
	printf("Hello");
#elif MODE == 2
	printf("World");
#else
	printf("Test");
#endif

	return 0;
}