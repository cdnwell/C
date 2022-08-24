#include <stdio.h>

//������(enum)
// ����� �̸� ������ ���� ����
// ���ÿ� �������� ������ ����� ������ �Ҷ� ���
// ���ڿ�, ���ڿ� ���� �� �ȵ� ������ �����ϴ�.

enum {
	A, B, C = 100, D, E, F
};

enum command {
	CREATE,		//���� 0�� ����, �ʱ�ȭ�� ������ �ʱ�ȭ ������ 1�� �Ҵ�
	READ,		//���� 1�� ����
	UPDATE,		//���� 2�� ����
	DELETE		//���� 3�� ����
};

int main(void) {
	printf("%d\n", A);
	printf("%d\n", B);
	printf("%d\n", C);
	printf("%d\n", D);
	printf("%d\n", E);
	printf("%d\n", F);

	//����ü�� �����ϴ� ����� ����.
	//����ü�� ���������� typedef ����� �����ϰ� �����ϴ�.
	enum command c;

	c = CREATE;
	printf("%d\n", c);
	c = UPDATE;
	printf("%d\n", c);
	
	//�ڹٿ��� �������� ������ ���� ����� �ٸ���.

	return 0;
}