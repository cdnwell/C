#include <stdio.h>

struct Student {
	char no[9];
	char name[11];
	double score;
	char major[21];
};

int main(void) {

	struct Student arr[3] = {
		{"20051234","김철수",2.34,"코딩학과"},
		{"20051571","홍길동",3.4,"컴퓨터공학과"},
		{"20051422","임정수",2.5,"소프트웨어공학과"}
	};

	for (int i = 0; i < sizeof(arr) / sizeof(struct Student); i++) {
		printf("%d번째\n", i + 1);
		printf("%s %-4s %-4g %s\n", arr[i].no, arr[i].name, arr[i].score, arr[i].major);
	}

	return 0;
}