#include <stdio.h>

struct Student {
	char no[9];
	char name[11];
	double score;
	char major[21];
};

int main(void) {

	struct Student arr[3] = {
		{"20051234","��ö��",2.34,"�ڵ��а�"},
		{"20051571","ȫ�浿",3.4,"��ǻ�Ͱ��а�"},
		{"20051422","������",2.5,"����Ʈ������а�"}
	};

	for (int i = 0; i < sizeof(arr) / sizeof(struct Student); i++) {
		printf("%d��°\n", i + 1);
		printf("%s %-4s %-4g %s\n", arr[i].no, arr[i].name, arr[i].score, arr[i].major);
	}

	return 0;
}