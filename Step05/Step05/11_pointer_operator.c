#include <stdio.h>

int main(void) {
	//int* p1 = 10;
	//double* p2 = 10;
	
	//10����, �޸𸮰� ���� ������ 16������ �ִ� ���� �Ϲ����̴�.
	//���� ������ ��������(�޸� ������) �̹� ������� �޸� ����
	//�ٲٸ� ������ �����. ���α׷� ����
	int* p1 = 0xA;	
	double* p2 = 0xA;

	printf("p1 : %p\tp2 : %p\n", p1,p2);
	printf("p1 : %p\tp2 : %p\n", p1+1,p2+1);
	printf("p1 : %p\tp2 : %p\n", p1+2,p2+2);


	return 0;
}