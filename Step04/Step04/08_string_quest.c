#include <stdio.h>]
/*
	������ �迭 ���̰� 50�� �迭�� ����
	���ڿ��� �Է� ���� ��
	�Է� ���� ���ڿ� ���̸� ���

	�Է� ���� ���ڿ��� ȸ�� ���� üũ
	: ���������� �о �Ųٷ� �о ���� ����
	���� ��������, �ѱ��� �Ұ���
	ex ] ������

	���ڿ��� ȸ���̸� ȸ���Դϴ�.
	ȸ���� �ƴϸ� �Է��� ���ڿ��� ȸ���� �ƴմϴ�. ���
*/
int main(void) {
	char str[50];
	int idx = 0;
	char str2[50];
	int dif = 0;
	int i;

	printf("���ڿ� �Է� : ");
	scanf("%s", str);

	while (str[idx] != 0) idx++;

	printf("���ڿ� ���� : %d\n", idx);


	printf("ȸ�� �Է� : ");
	scanf("%s", str2);

	idx = 0;
	while (str2[idx] != 0) idx++;
	
	for (i = 0; i < idx / 2; i++) {
		if (str[i] != str[idx - 1 - i])
			break;
	}

	printf("idx / 2 : %d\n", idx / 2);

	if (i != idx/2) {
		printf("ȸ���� �ƴմϴ�.");
	}
	else {
		printf("ȸ�� �Դϴ�.");
	}

	return 0;
}