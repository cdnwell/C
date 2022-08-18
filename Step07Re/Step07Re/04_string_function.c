#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parseInt(char* num) {
	int len = strlen(num);
	int result = 0;
	int size = 1;

	for (int i = len -1 ; i >= 0; i--, size *= 10) {
		result += ( *(num+i) - 48) * size;
	}
	return result;
}

int main(void) {
	char str[50];
	printf("숫자로 변화시킬 문자열 : ");
	scanf("%s", str);

	printf("%d", parseInt(str));

	return 0;
}