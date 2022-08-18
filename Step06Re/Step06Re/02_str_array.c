#include <stdio.h>
/*

문자형 배열 길이가 50인 배열을 선언

문자열을 입력 받은 후

입력 받은 문자열 길이를 출력

입력 받은 문자열이 회문(palindrome) 인지 체크

문자열이 회문이면 '회문 입니다.' 출력

회문이 아니만 '회문이 아닙니다.' 출력

idx를 사용하지 않고 포인터로 해결

*/
int main(void) {
	char str[50];
	char* ptr;
	ptr = str;
	int end = 0, i;

	printf("회문을 입력해주세요 : ");
	scanf("%s", str);
	while (*ptr++ != 0) end++;
	ptr = str;
	//위 연산시 end가 배열의 마지막번째 수를 가리킨다.(각 글자당 1byte인 영어만 가능)

	for (i = 0; i < end / 2; i++) {
		if (*(ptr + i) != *(ptr + end - 1 - i)) break;
	}

	if (i < end / 2)
		printf("회문이 아닙니다.");
	else
		printf("회문입니다.");

	return 0;
}