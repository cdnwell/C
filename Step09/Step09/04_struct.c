#include <stdio.h>

struct Point {
	int x;
	int y;
};

struct Wrapper {
	short n;
	char c[3];
	double d;
};



int main(void) {
	// c������ ���� Ÿ���� int, float, char�ۿ� ����. �ٸ� ���� Ÿ�� ����
	// ����ü�� ������ �տ� struct�� ���־�� �Ѵ�.
	struct Point p;
	// . �� -�ȿ� �ִ� �̶�� �ǹ�
	p.x = 10;
	p.y = 20;

	printf("%d %d\n", p.x, p.y);
	printf("Point size : %d\n", sizeof(struct Point));
	printf("%p\n", &p);
	printf("%p %p\n", &p.x, &p.y);

	struct Wrapper w;

	//char���� 4byte�� ��� Ž��, �޸� 3byte ���غ��� Ž���ӵ��� ������ ��
	//struct ����ü Ư¡
	printf("sizeof Wrapper : %d\n", sizeof(struct Wrapper));
	printf("%p %p %p\n", &w.n, &w.c, &w.d);

	//Ư�� ��Ʈ ������ ������

	return 0;
}