#include <stdio.h>
//구조체를 배열로 만드는 부분

struct Student {
	char no[9];
	char name[11];
	double score;
	char major[21];
};

int main(void) {
	//scanf(" %s",&array);
	//에서 앞에 띄어쓰기를 하면 for문안에 scanf함수가 있을 경우 여러번
	//실행해도 엔터키 때문에 입력이 안되고 넘어가는 것을 방지할 수 있다.
	//fflush(stdin); -> 엔터와 같은 남은 것을 없애준다.

	/*struct Student s1;*/

	/*printf("학번 입력 : ");
	scanf("%s", s1.no);
	printf("이름 입력 : ");
	scanf("%s", s1.name);
	printf("평점 입력 : ");
	scanf("%lf", &s1.score);
	printf("학과명 입력 : ");
	scanf("%s", s1.major);

	printf("\n");

	printf("결과\n");
	printf("%s %s %lf %s\n", s1.no, s1.name, s1.score, s1.major);*/

	struct Student arr[3] = {
		{"20051234", "김철수", 2.45, "코딩학과"},
		{"20051571", "홍길동", 3.4, "컴퓨터공학과"},
		{"20051247", "임정수", 2.7, "소프트웨어공학과"}
	};

	for (int i = 0; i < sizeof(arr) / sizeof(struct Student); i++) {
		printf("%d번째\n", i + 1);
		//서식문자 앞에 음수는 왼쪽 정렬을 기준으로 공백 갯수를 의미한다.
		printf("%s %-4s %-4g %s\n", arr[i].no, arr[i].name, arr[i].score, arr[i].major);
	}

	return 0;
}