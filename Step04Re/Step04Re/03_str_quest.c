#include <stdio.h>
/*
문자형 배열 길이가 50인 배열을 선언
문자열을 입력 받은 후
입력 받은 문자열 길이를 출력

```
입력 받은 문자열이 회문 인지 체크
: 정상적으로 읽어도 거꾸로 읽어도 같은 문장
영문 기준으로, 한글은 불가능
ex ] 스위스

문자열이 회문이면 회문입니다.
회문이 아니면 입력한 문자열은 회문이 아닙니다. 출력

```

*/
int main(void) {
	char str[50];
	int idx, j;
	printf("문자열 입력 : ");
	scanf("%s", str);

	for (int i = 0; i < 50; i++) {
		if (str[i] == 0){
			idx = i;
			break;
		}
	}

	for (j = 0; j < idx / 2; j++) {
		if (str[j] != str[idx-1]) break;
		idx--;
	}

	if (j == idx / 2) {
		printf("회문입니다.");
	}
	else {
		printf("회문이 아닙니다.");
	}

	return 0;
}