#include <stdio.h>

int main(void) {
	char str[20];
	int i;

	//������ ������ �� �ڵ����� �� ���� �ι��ڸ� ����
	//���� ���Ŀ� �� �Էµ��� ����, �ٸ� �Լ��� ����� ��
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	
	for (i = 0; i < 20; i++) {
		printf("%c %d\n", str[i], str[i]);
	}

	return 0;
}