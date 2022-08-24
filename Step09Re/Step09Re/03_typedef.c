#include <stdio.h>

typedef int* PINT;
typedef unsigned int UINT;

typedef struct point {
	int x;
	int y;
	struct point* next;
}Point;

int main(void) {
	Point p1;
	Point p2;

	p1.x = 10;
	p1.y = 20;

	p2.x = 100;
	p2.y = 200;

	p1.next = &p2;
	p2.next = NULL;

	Point* ptr = &p1;

	for (int i = 0; i < 2; i++) {
		printf("%d %d\n", ptr->x, ptr->y);
		ptr = ptr->next;
	}

	

	return 0;
}