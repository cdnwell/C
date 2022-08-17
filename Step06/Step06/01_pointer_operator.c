#include <stdio.h>

int main(void) {
	int arr[] = { 3,2,7,4,1,9 };
	int* ptr = arr;

	printf("%d\n", *ptr + 1);	//포인터 적용 후 + 1, 포인터 연산은 괄호를 제외하고 거의 제일 우선
	printf("%d\n", *(ptr + 1));	//포인터 메모리 주소값 증가 후 포인터 적용
	//주소값은 일반적으로 나누거나 곱하지 않는다.

	// ++연산은 *연산보다 우선순위가 높아 *ptr++;는 arr[1]의 값과 같다.
	//*ptr++;
	(*ptr)++;

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
	printf("%p %p\n", &arr[0], ptr);

	return 0;
}