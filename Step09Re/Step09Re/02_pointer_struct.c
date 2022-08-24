#include <stdio.h>

typedef struct student {
	char sno[8];
	char name[11];
	double score;
	char major[21];
}Student;

int main(void) {
	Student arr[3] = {
		{"0123","ȫ�浿",3.4,"�ڵ��а�"},
		{"0143","�迵��",4.2,"����а�"},
		{"0184","�Ӽ�ȣ",3.7,"�����а�"}
	};

	Student* ptr = arr;

	for (int i = 0; i < sizeof(arr) / sizeof(Student); i++) {
		printf("%s %s %g %s\n", ptr->sno, ptr->name, ptr->score, ptr->major);
		ptr++;
	}

	return 0;
}