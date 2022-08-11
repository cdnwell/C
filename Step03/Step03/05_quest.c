#include <stdio.h>

int main(void) {
	/*
		입력받을 숫자 개수를 입력한 후
		입력한 숫자만큼 숫자를 입력 받아서
		입력 받은 숫자들의 평균을 출력
		단 평균을 출력할때는 소수점 둘째자리까지 출력
	*/
	int i = 0, ea, num, total = 0;
	printf("입력받을 숫자 개수 : ");
	scanf("%d", &ea);
	
	// 실수형으로 total을 선언하면 계속 형변환이 일어나서 더 느림
	// 마지막에 형변환을 하는 이유

	// 시작과 끝이 정해져있으면 for문, 아니면 while문
	for (i = 0; i < ea; i++) {
		printf("숫자 입력 : ");
		scanf("%d",&num);
		total += num;
	}

	// lf > double이상 출력
	// 실수는 기본적으로 소수점 6자리
	printf("입력하신 숫자들의 평균 : %.2lf\n", (double)total / ea);

	return 0;
}