#include <stdio.h>
/*

������ �迭 ���̰� 50�� �迭�� ����

���ڿ��� �Է� ���� ��

�Է� ���� ���ڿ� ���̸� ���

�Է� ���� ���ڿ��� ȸ��(palindrome) ���� üũ

���ڿ��� ȸ���̸� 'ȸ�� �Դϴ�.' ���

ȸ���� �ƴϸ� 'ȸ���� �ƴմϴ�.' ���

idx�� ������� �ʰ� �����ͷ� �ذ�

*/
int main(void) {
	char str[50];
	char* ptr;
	ptr = str;
	int end = 0, i;

	printf("ȸ���� �Է����ּ��� : ");
	scanf("%s", str);
	while (*ptr++ != 0) end++;
	ptr = str;
	//�� ����� end�� �迭�� ��������° ���� ����Ų��.(�� ���ڴ� 1byte�� ��� ����)

	for (i = 0; i < end / 2; i++) {
		if (*(ptr + i) != *(ptr + end - 1 - i)) break;
	}

	if (i < end / 2)
		printf("ȸ���� �ƴմϴ�.");
	else
		printf("ȸ���Դϴ�.");

	return 0;
}