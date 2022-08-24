#include <stdio.h>

typedef struct student {
	char sno[8];
	char name[11];
	double score;
	char major[21];
}Student;

int main(void) {
	Student arr[3] = {
		{"0123","홍길동",3.4,"코딩학과"},
		{"0143","김영수",4.2,"언어학과"},
		{"0184","임선호",3.7,"수리학과"}
	};

	Student* ptr = arr;

	for (int i = 0; i < sizeof(arr) / sizeof(Student); i++) {
		printf("%s %s %g %s\n", ptr->sno, ptr->name, ptr->score, ptr->major);
		ptr++;
	}

	return 0;
}