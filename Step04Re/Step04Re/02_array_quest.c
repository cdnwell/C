#include <stdio.h>
/*
정수형 배열 길이가 10인 배열을 선언 후
홀수를 입력 받으면 첫번째부터 채우고
짝수를 입력 받으면 마지막 인덱스부터 채운 후에
배열에 내용을 전부다 입력하면
입력받은 내용 전체 출력
입력 순서 : 1 2 3 4 5 6 7 8 9 0

```
index		- 0 1 2 3 4  5 6 7 8 9
입력된 값	- 1 3 5 7 9 10 8 6 4 2

```

*/
int main(void) {
	int arr[10], i = 0, j = 9, count = 0;
	int arr2[10];

	for (i = 0; i < 10; i++) {
		printf("%d번째 배열 : ", i + 1);
		scanf("%d", &arr[i]);
	}

	while (i <= j) {
		if (arr[count] % 2 == 0) {
			arr2[j] = arr[count];
			j--;
		}
		else {
			arr2[i] = arr[count];
			i++;
		}
		count++;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr2[i]);
	}

	return 0;
}