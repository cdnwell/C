#include <stdio.h>]
/*
	문자형 배열 길이가 50인 배열을 선언
	문자열을 입력 받은 후
	입력 받은 문자열 길이를 출력

	입력 받은 문자열이 회문 인지 체크
	: 정상적으로 읽어도 거꾸로 읽어도 같은 문장
	영문 기준으로, 한글은 불가능
	ex ] 스위스

	문자열이 회문이면 회문입니다.
	회문이 아니면 입력한 문자열은 회문이 아닙니다. 출력
*/
int main(void) {
	char str[50];
	int idx = 0;
	char str2[50];
	int dif = 0;
	int i;

	printf("문자열 입력 : ");
	scanf("%s", str);

	while (str[idx] != 0) idx++;

	printf("문자열 길이 : %d\n", idx);


	printf("회문 입력 : ");
	scanf("%s", str2);

	idx = 0;
	while (str2[idx] != 0) idx++;
	
	for (i = 0; i < idx / 2; i++) {
		if (str[i] != str[idx - 1 - i])
			break;
	}

	printf("idx / 2 : %d\n", idx / 2);

	if (i != idx/2) {
		printf("회문이 아닙니다.");
	}
	else {
		printf("회문 입니다.");
	}

	return 0;
}