#include <stdio.h>
//�ڹٿ����� ���ڿ��� char�� �迭�� �����Ѵ�.
int main(void) {

	//�ѱ� = 2byte
	char str1[] = "Hello World";
	char str2[] = "�ȳ��ϼ���";

	//���Ĺ��� %s > ���ڿ� ���
	//�� ���ڸ� ���� �� ���� ���
	//�� ���ڸ� ����� 0��(null�� ���) ���� �� ���� ��� �д´�.
	printf("str1 : %s\n",str1);
	printf("str2 : %s\n",str2);

	//10������ ��Ÿ�� : ���������� ��
	printf("str1 : %d\n", str1);
	printf("str2 : %d\n", str2);

	//16������ ��Ÿ�� : �������� ��
	printf("str1 : %X\n", str1);
	printf("str2 : %X\n", str2);

	//���� ��Ȯ
	printf("str1 : %p\n", str1);
	printf("str2 : %p\n", str2);

	printf("str1 : %d\n", sizeof(str1));
	printf("str2 : %d\n", sizeof(str2));

	printf("str1 : %d %c\n", str1[11], str1[11]);
	printf("str2 : %d %c\n", str2[10], str2[10]);

	return 0;
}