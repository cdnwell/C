#include <stdio.h>
#define SUM(A,B) A+B
#define MAX(A,B) A > B ? A : B
#define MIN(A,B) A < B ? A : B
//숫자 두개를 매개변수로 받아서 큰값을 구하는 매크로 함수 - MAX
//숫자 두개를 매개변수로 받아서 작은값을 구하는 매크로 함수 - MIN
//요즘은 컴파일러가 발달해서 위에서도 잘못된 define문을 구분할 수 있다.

int main(void) {
	//define은 컴파일이전에? 미리 되는데 산술연산을 위해서는 프로그램이 실행된 이후에 해야한다.
	//그냥 대입해주는 것임

	//define SUM과 함수 SUM 중 매크로 함수가 훨씬 더 빠르다.
	//함수는 내려가면서 실행하다 다시 올라가서 실행
	//매크로함수는 호출이 아니라 작업된 코드를 조립해서 넣어줌

	//c++ 인라인함수 : 매크로함수 비슷 자동으로 넣어주는 것 미리 준비되어있다.
	printf("SUM : %d\n", SUM(10, 20));

	printf("MAX : %d\n", MAX(12, 4));
	printf("MIN : %d\n", MIN(13, 6));

	return 0;
}