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
	struct Point p;

	p.x = 10;
	p.y = 20;

	printf("%d %d\n", p.x, p.y);
	printf("Point size : %d\n", sizeof(struct Point));
	printf("%p\n", &p);
	printf("%p %p\n", &p.x, &p.y);

	struct Wrapper w;

	printf("sizeof Wrapper : %d\n", sizeof(struct Wrapper));
	printf("%p %p %p\n", &w.n, &w.c, &w.d);
	
	return 0;
}