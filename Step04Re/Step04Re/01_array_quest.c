#include <stdio.h>
/*
정수형 배열 길이가 10인 배열을 선언 후
배열에 내용을 직접 입력받는 반복문을 작성

```
1. 배열에 입력된 숫자들의 총합을 출력
2. 배열에 입력된 숫자들 중 제일 큰 숫자를 출력
3. 배열에 입력된 숫자들 중 제일 작은 숫자를 출력

```

*/
int main() {
	int arr[10], total = 0, max, min;
	for (int i = 0; i < 10; i++) {
		printf("%d 번째 배열 값 : ",i+1);
		scanf("%d", &arr[i]);
		total += arr[i];
	}
	max = min = arr[0];

	for (int i = 0; i < 10; i++) {
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	printf("총 합 : %d\n", total);
	printf("최소값 : %d\n", min);
	printf("최대값 : %d\n", max);
}