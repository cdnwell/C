#include <stdio.h>

struct Student {
	char sno[9];
	char name[11];
	double score;
	char major[21];
};

int main(void) {

	struct Student arr[3] = {
		{"20051234", "김철수", 2.45, "코딩학과"},
		{"20051571", "홍길동", 3.4, "컴퓨터공학과"},
		{"20051247", "임정수", 2.7, "소프트웨어공학과"}
	};

	struct Student* ptr = arr;

	for (int i = 0; i < 3; i++) {
		printf("%s %s %g %s\n", (*ptr).sno, (*ptr).name, (*ptr).score, (*ptr).major);
		ptr++;
	}

	ptr = arr;

	for (int i = 0; i < 3; i++) {
		printf("%s %s %g %s\n", ptr->sno, ptr->name, ptr->score, ptr->major);
		ptr++;
	}

	return 0;

}