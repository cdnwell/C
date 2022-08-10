#include <stdio.h>
/*
*	사칙연산(자바에서는 %가 float형태에도 사용 가능하다.)
*	(c에서는 실수에 쓰면 안된다.)
*		+	-	*	/	%
* 
*	정수 두개 입력을 받아서
*	사칙연산 결과를 출력
*/
int main(void) {
	//c언어는 무조건 변수를 먼저 선언
	//자동으로 0으로 초기화 되어있음
	int n1 = 0, n2 = 0;

	printf("정수 두 개를 입력 : ");
	scanf("%d %d", &n1, &n2);
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
	printf("%d - %d = %d\n", n1, n2, n1 - n2);
	printf("%d * %d = %d\n", n1, n2, n1 * n2);
	printf("%d / %d = %d\n", n1, n2, n1 / n2);
	printf("%d %% %d = %d\n", n1, n2, n1 % n2);

	return 0;
	//콘솔 실행창 x - 에러, ! - 워닝
}