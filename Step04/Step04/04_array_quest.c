#include <stdio.h>
/*
	정수형 배열 길이가 10인 배열을 선언 후
	배열에 내용을 직접 입력받는 반복문을 작성

	1. 배열에 입력된 숫자들의 총합을 출력
	2. 배열에 입력된 숫자들 중 제일 큰 숫자를 출력
	3. 배열에 입력된 숫자들 중 제일 작은 숫자를 출력
*/
int main(void) {

	int arr[10] = { 0 };	//초기화 해줘도 되고 안해줘도 된다.
	int max, min, total = 0;
	const int len = sizeof(arr) / sizeof(int);	//len값 못바꾸게 끔

	// 아래 for문에 모두 쓸 수 있는데 그럼 느림, 동일한 작업은 묶어서 처리하기
	for (int i = 0; i < 10; i++) {
		printf("%d 번째 숫자 입력 : ", i + 1);
		scanf("%d", &arr[i]);
	}

	//max = arr[0];
	//min = arr[0];
	max = min = arr[0];
	
	for (int i = 0; i < 10; i++) {
		total += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	printf("총 합 : %d\n", total);
	printf("최소값 : %d\n", min);
	printf("최대값 : %d\n", max);

	return 0;
}