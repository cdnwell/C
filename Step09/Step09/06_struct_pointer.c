#include <stdio.h>

struct Student {
	char sno[9];
	char name[11];
	double score;
	char major[21];
};

int main(void) {

	struct Student arr[3] = {
		{"20051234", "��ö��", 2.45, "�ڵ��а�"},
		{"20051571", "ȫ�浿", 3.4, "��ǻ�Ͱ��а�"},
		{"20051247", "������", 2.7, "����Ʈ������а�"}
	};

	struct Student* ptr = arr;
	//1��° ���� ���
	for (int i = 0; i < 3; i++) {
		printf("%s %s %g %s\n", (*ptr).sno, (*ptr).name, (*ptr).score, (*ptr).major);
		ptr++;
	}

	ptr = arr;
	for (int i = 0; i < 3; i++) {
		printf("%s %s %g %s\n", ptr->sno, ptr->name, ptr->score, ptr->major);
		ptr++;
	}

	//����ü -> �Ѱ��� �����͸� ��� ǥ���ϴ� �뵵, Ŭ�����ʹ� ���� �ٸ� ��

	return 0;
}