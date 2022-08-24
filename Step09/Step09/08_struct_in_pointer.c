#include <stdio.h>

typedef struct point{
	int x;
	int y;
	//Point* next;	
	//Point는 선언할 당시에는 Point라는 구조체 명이 없는 상태

	//LinkedList를 만들 수 있음
	struct point* next;
}Point;



int main(void) {
	Point p1 = { 1,2 };
	Point p2 = { 3,4 };
	Point p3 = { 5,6 };
	p1.next = &p2;
	p2.next = &p3;
	//c언어는 NULL로 처리를 해주어야 함 자바는 안해줘도 자동으로 되는 듯
	p3.next = NULL;

	Point* ptr = &p1;

	while (1) {
		if (ptr == NULL) break;
		printf("%d %d\n", ptr->x, ptr->y);
		ptr = ptr->next;
	}

	return 0;
}