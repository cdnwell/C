#include <stdio.h>
/*
	���� �ΰ��� �Է� ���� ��
	�� ������ ���� ����� ������ ����� �����Բ� ���
	��)
	5 7 �Է� ---> 2
	7 5 �Է� ---> 2
*/
int main(void) {
	
	int n1, n2;
	printf("���� �� ���� �Է��� �ּ��� : ");
	scanf("%d %d", &n1, &n2);

	//1
	if (n1 > n2)
		printf("%d\n", n1 - n2);
	else
		printf("%d\n", n2 - n1);

	//2
	//�����Ϸ��� ������Ʈ �ż� int�� ��𿡳� �ᵵ ��������
	int result = n1 - n2;
	if (result < 0)
		result = -result;
	printf("%d\n", result);

	//3
	result = n1 > n2 ? n1 - n2 : n2 < n1;
	printf("%d\n", result);

	return 0;
}