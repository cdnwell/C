#include <stdio.h>

//c�� �Լ� - �����ε�, �������̵��� ���� �ʴ´�.
//void�� ���� ���� ��� return �� ���� �Լ��� ����� 

//���� O, �Ű����� O
int sum(int n1, int n2) {
	return n1 + n2;
}

//���� X, �Ű����� O - void ������ ���� ����
void print(int n) {
	printf("����� : %d\n", n);
}

//���� O, �Ű����� X
int inputNumber() {
	int n;
	scanf("%d", &n);
	return n;
}

//���� X, �Ű����� X
void printMessage() {
	printf("���� �Է� : ");
}

int main(void) {
	printMessage();
	int n1 = inputNumber();
	printMessage();
	int n2 = inputNumber();
	int result = sum(n1, n2);
	printf("%d\n", result);

	//������ > �Լ� ���� : ����Ÿ�� void �Ű����� ���� > �Լ� ���� ����
	void (*ptr)() = printMessage;
	printf("%p\n",ptr);
	ptr();

	void (*fnc)(int) = print;
	printf("%p\n", fnc);
	fnc(100);

	//�������̵�, �����ε� > �ּҰ��� �������� ������ ��
	
	return 0;
}