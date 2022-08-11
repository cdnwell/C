#include <stdio.h>

int main(void) {

	/*
		점수하나 입력 받아서 성적 등급을 출력
		90-100  성적 등급 A
		80-89	성적 등급 B
		70-79	성적 등급 C
		60-69	성적 등급 D
		 0-59	성적 등급 F
	*/
	int score;
	printf("성적 입력 : ");
	scanf("%d", &score);

	if (score >= 90)
		printf("A\n");
	else if (score >= 80)
		printf("B\n");
	else if (score >= 70)
		printf("C\n");
	else if (score >= 60)
		printf("D\n");
	else
		printf("F\n");

	return 0;
}