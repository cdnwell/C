#include <stdio.h>
//����ü�� �迭�� ����� �κ�

struct Student {
	char no[9];
	char name[11];
	double score;
	char major[21];
};

int main(void) {
	//scanf(" %s",&array);
	//���� �տ� ���⸦ �ϸ� for���ȿ� scanf�Լ��� ���� ��� ������
	//�����ص� ����Ű ������ �Է��� �ȵǰ� �Ѿ�� ���� ������ �� �ִ�.
	//fflush(stdin); -> ���Ϳ� ���� ���� ���� �����ش�.

	/*struct Student s1;*/

	/*printf("�й� �Է� : ");
	scanf("%s", s1.no);
	printf("�̸� �Է� : ");
	scanf("%s", s1.name);
	printf("���� �Է� : ");
	scanf("%lf", &s1.score);
	printf("�а��� �Է� : ");
	scanf("%s", s1.major);

	printf("\n");

	printf("���\n");
	printf("%s %s %lf %s\n", s1.no, s1.name, s1.score, s1.major);*/

	struct Student arr[3] = {
		{"20051234", "��ö��", 2.45, "�ڵ��а�"},
		{"20051571", "ȫ�浿", 3.4, "��ǻ�Ͱ��а�"},
		{"20051247", "������", 2.7, "����Ʈ������а�"}
	};

	for (int i = 0; i < sizeof(arr) / sizeof(struct Student); i++) {
		printf("%d��°\n", i + 1);
		//���Ĺ��� �տ� ������ ���� ������ �������� ���� ������ �ǹ��Ѵ�.
		printf("%s %-4s %-4g %s\n", arr[i].no, arr[i].name, arr[i].score, arr[i].major);
	}

	return 0;
}