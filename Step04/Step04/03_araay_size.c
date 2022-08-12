#include <stdio.h>

int main(void) {
	//정수형 배열
	int arr1[5];
	//실수형 배열
	double arr2[6];
	//문자형 배열
	char str[10];

	//sizeof > 괄호안에 들어있는 것이 몇 바이트인지 알려줌
	//여기선 배열이 몇 바이트인지
	printf("%d %d %d\n", sizeof(arr1), sizeof(arr2), sizeof(str));
	//배열의 길이 구하는 공식 sizeof(배열)/sizeof(배열의_자료형)
	printf("%d %d %d\n", sizeof(arr1)/sizeof(int), sizeof(arr2)/sizeof(double), sizeof(str)/sizeof(char));

	return 0;
}