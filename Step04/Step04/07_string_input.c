#include <stdio.h>

int main(void) {
	char str[20];
	int i;

	//데이터 저장할 때 자동으로 맨 끝에 널문자를 넣음
	//띄어쓰기 이후에 값 입력되지 않음, 다른 함수로 적어야 함
	printf("문자열 입력 : ");
	scanf("%s", str);
	
	for (i = 0; i < 20; i++) {
		printf("%c %d\n", str[i], str[i]);
	}

	return 0;
}