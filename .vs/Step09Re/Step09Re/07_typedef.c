#include <stdio.h>

typedef int* PINT;
typedef unsigned int UINT;
typedef unsigned long long ULLONG;

struct student {
	char sno[9];
	char name[11];
	double score;
	char major[21];
};

typedef struct student Student;

typedef struct point {
	int x;
	int y;
}Point1;

typedef struct {
	int x;
	int y;
}Point2;

int main(void) {
	PINT ptr;
	UINT i;
	ULLONG data;
	Student student;

}