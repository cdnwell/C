#include <stdio.h>

typedef struct point {
	int x;
	int y;
	struct point* next;
}Point;

int main(void) {
	Point p1 = { 1,2 };
	Point p2 = { 3,4 };
	Point p3 = { 5,6 };
	p1.next = &p2;
	p2.next = &p3;
	p3.next = NULL;

	Point* ptr = &p1;

	while (1) {
		if (ptr == NULL)break;
		printf("%d %d\n", ptr->x, ptr->y);
		ptr = ptr->next;
	}

	return 0;
}