#include <stdio.h>

void swap(int* n1, int* n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void PrintArray(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//버블정렬
void bubble(int* arr, int len) {
	for (int i = 0; i < len-1 ; i++) {
		printf("%d pass - ", i + 1);
		for (int j = 0; j < len - 1 -i; j++) {
			if(*(arr+j)>*(arr+j+1))
				swap(arr+j,arr+j+1);
		}
		PrintArray(arr, len);
	}

}

//선택정렬
void select(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		printf("%d pass - ", i + 1);
		for (int j = i+1; j < len; j++) {
			if (arr[i] > arr[j])
				swap(&arr[i], &arr[j]);
		}
		PrintArray(arr, len);
	}
}

//삽입정렬
void insert(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		printf("숫자 입력 : ");
		scanf("%d", &arr[i]);
		//데이터를 정렬
		printf("%d pass - ", i + 1);
		for (int j = i; j > 0;j--) {
			if (arr[j] < arr[j - 1])
				swap(&arr[j], &arr[j - 1]);
			else 
				continue;
		}
		PrintArray(arr, i + 1);
	}
}
void PrintArrayQuick(int* arr, int s, int e) {
	while (s <= e) {
		printf("%d ", arr[s++]);
	}
	printf("\n");
}

//퀵 정렬
void quick(int* arr, int left, int right) {
	int pl = left;
	int pr = right;
	int x = arr[(pl + pr) / 2];
	printf("분할 전 : ");
	PrintArrayQuick(arr, left, right);
	do{
		while (arr[pl] < x) pl++;
		while (arr[pr] > x) pr--;

		if (pl <= pr) {
			swap(&arr[pl], &arr[pr]);
			pl++;
			pr--;
		}
	} while (pl <= pr);

	printf("정렬 후 : ");
	PrintArrayQuick(arr, left, right);

	if (left < pr) quick(arr, left, pr);
	if (right > pl) quick(arr, pl, right);

}

int main(void) {
	int arr1[6] = { 8,4,6,9,7,1 };
	bubble(arr1, 6);

	printf("\n");

	int arr2[6] = { 8,4,6,9,7,1 };
	select(arr2, 6);

	printf("\n");

	/*int arr3[6] = { 8,4,6,9,7,1 };
	insert(arr3, 6);

	printf("\n");*/

	int arr4[9] = { 5,8,4,2,6,1,3,9,7 };
	quick(arr4, 0, 8);
	PrintArray(arr4, 9);

	return 0;
}