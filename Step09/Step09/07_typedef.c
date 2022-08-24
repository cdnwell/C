#include <stdio.h>
//typedef : 키워드

//int 포인터를 PINT로 쓰겠다.
typedef int* PINT;
//unsigned int를 UINT로 쓰겠다.
typedef unsigned int UINT;
//unsigned long long을 ULLONG로 쓰겠다.
typedef unsigned long long ULLONG;

struct student {
	char sno[9];
	char name[11];
	double score;
	char major[21];
};

//struct student를 Student로 쓰겠다.
typedef struct student Student;

// #1
//typedef와 구조체(struct) 선언과 같이 쓰는 방법
typedef struct point {
	int x;
	int y;
}Point;


// #2
//point를 지워서 사용도 가능하다.
typedef struct {
	int x;
	int y;
}Point;

int main(void) {
	PINT ptr;
	UINT i;
	ULLONG data;
	//클래스 선언과 비슷해짐 기존의 struct - 보다 더 간단해짐
	Student student;


	return 0;
}