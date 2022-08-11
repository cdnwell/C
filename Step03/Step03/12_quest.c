#include <stdio.h>
/*
	숫자 두개를 입력 받은 뒤
	두 숫자의 뺄셈 결과가 무조건 양수가 나오게끔 출력
	예)
	5 7 입력 ---> 2
	7 5 입력 ---> 2
*/
int main(void) {
	
	int n1, n2;
	printf("숫자 두 개를 입력해 주세요 : ");
	scanf("%d %d", &n1, &n2);

	//1
	if (n1 > n2)
		printf("%d\n", n1 - n2);
	else
		printf("%d\n", n2 - n1);

	//2
	//컴파일러가 업데이트 돼서 int를 어디에나 써도 가능해짐
	int result = n1 - n2;
	if (result < 0)
		result = -result;
	printf("%d\n", result);

	//3
	result = n1 > n2 ? n1 - n2 : n2 < n1;
	printf("%d\n", result);

	return 0;
}