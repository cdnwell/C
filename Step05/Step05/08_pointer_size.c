#include <stdio.h>
//포인터 크기들을 체크
int main(void) {
	int* iptr;
	float* fptr;
	double* dptr;
	char* str;

	printf("int * size : %d\n", sizeof(iptr));
	printf("float * size : %d\n", sizeof(fptr));
	printf("double * size : %d\n", sizeof(dptr));
	printf("char * size : %d\n", sizeof(str));
	//포인터 > 배열 몇개인지 모름
	return 0;
}