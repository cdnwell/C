#include <stdio.h>

void PrintBin1(int n) {
	int div = 1;
	while (div <= n) div *= 2;
	div /= 2;
	//printf("%d", div);

	while (div > 0) {
		printf("%d ", n / div);
		n %= div;
		//printf(" n : %d ", n);
		div /= 2;
	}
}

//2로 나눈 나머지 이용해서 출력
//배열을 이용해서 32칸 짜리 char 형에 끝에서 부터 저장할 수 있지만
//하기 힘듦
void PrintBin2(int n) {
	if (n < 2) {
		printf("%d", n);
	}
	else {
		PrintBin2(n / 2);
		printf("%d", n % 2);
	}
}

void PrintHex(int n) {
	if (n < 16) {
		printf("%X", n);
	}
	else {
		PrintHex(n / 16);
		printf("%X", n % 16);
	}
}

int main(void) {
	int num;

	printf("숫자 입력 : ");
	scanf("%d", &num);

	//2진수로 변환해서 출력하는 함수를 호출
	PrintBin1(num);
	printf("\n");
	PrintBin2(num);
	printf("\n");
	PrintHex(num);

	return 0;
}