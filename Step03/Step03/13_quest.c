#include <stdio.h>
/*
	숫자 두 개 입력을 받아서 
	두 수의 최대 공약수를 출력
*/
int main(void) {

	int n1, n2, gcd;
	printf("숫자 두 개 입력 : ");
	scanf("%d %d", &n1, &n2);

	if (n1 > n2) {
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}

	for (int i = 1; i <= n1; i++) {
		if (n1 % i == 0 && n2 % i == 0)
			gcd = i;
	}

	printf("두 수의 최대 공약수 : %d", gcd);

	return 0;
}