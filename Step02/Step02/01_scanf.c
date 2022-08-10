#include <stdio.h>

int main(void) {
	int n1=0, n2=0;

	printf("숫자 두개 입력 : ");
	//서식문자열 개수만큼 입력, 출력 가능
	//띄어쓰기 하는 이유 : 데이터 구분을 위해 c에서 사용하는
	//방법
	//엔터도 가능
	//scanf에서 데이터 구분 방법 : 띄어쓰기, 서식문자
	scanf("%d %d",&n1,&n2);
	
	printf("입력받은 숫자 : %d, %d", n1, n2);
	return 0;
}