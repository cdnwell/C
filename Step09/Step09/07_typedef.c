#include <stdio.h>
//typedef : Ű����

//int �����͸� PINT�� ���ڴ�.
typedef int* PINT;
//unsigned int�� UINT�� ���ڴ�.
typedef unsigned int UINT;
//unsigned long long�� ULLONG�� ���ڴ�.
typedef unsigned long long ULLONG;

struct student {
	char sno[9];
	char name[11];
	double score;
	char major[21];
};

//struct student�� Student�� ���ڴ�.
typedef struct student Student;

// #1
//typedef�� ����ü(struct) ����� ���� ���� ���
typedef struct point {
	int x;
	int y;
}Point;


// #2
//point�� ������ ��뵵 �����ϴ�.
typedef struct {
	int x;
	int y;
}Point;

int main(void) {
	PINT ptr;
	UINT i;
	ULLONG data;
	//Ŭ���� ����� ������� ������ struct - ���� �� ��������
	Student student;


	return 0;
}