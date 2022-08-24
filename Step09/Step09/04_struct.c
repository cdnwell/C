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
	// c에서는 변수 타입은 int, float, char밖에 없다. 다른 변수 타입 없음
	// 구조체는 쓰려면 앞에 struct를 써주어야 한다.
	struct Point p;
	// . 은 -안에 있는 이라는 의미
	p.x = 10;
	p.y = 20;

	printf("%d %d\n", p.x, p.y);
	printf("Point size : %d\n", sizeof(struct Point));
	printf("%p\n", &p);
	printf("%p %p\n", &p.x, &p.y);

	struct Wrapper w;

	//char형은 4byte를 잡고 탐색, 메모리 3byte 손해보고 탐색속도를 빠르게 함
	//struct 구조체 특징
	printf("sizeof Wrapper : %d\n", sizeof(struct Wrapper));
	printf("%p %p %p\n", &w.n, &w.c, &w.d);

	//특정 비트 단위로 맞춰줌

	return 0;
}