#include <stdio.h>

int main(void) {
	int num, temp, total = 0;

	printf("입력할 숫자 개수 : ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		printf("숫자 입력 : ");
		scanf("%d", &temp);
		total += temp;
	}

	printf("평균 : %.2f", (double)total / num);

	return 0;
}