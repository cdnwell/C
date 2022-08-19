#include <stdio.h>
void printArray(int* arr,int len) {

	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swap(int* arr1, int* arr2) {
	int temp = *arr1;
	*arr1 = *arr2;
	*arr2 = temp;
}

void bubble(int *arr,int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if(arr[j]>arr[j+1])
				swap(arr + j, arr + j + 1);
		}
		printArray(arr, len);
	}
}

//선택정렬
void select(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = i; j < len; j++) {
			if (arr[i] > arr[j])
				swap(arr + i, arr + j);
		}
		printArray(arr, len);
	}
}

//삽입정렬
void insert(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		for (int j = len - 1; j > 0; j--) {
			if (arr[j] < arr[j - 1])
				swap(arr + j, arr + j - 1);
		}
		printArray(arr, len);
	}
}

int main(void) {
	int arr1[] = { 8,4,6,9,7,1 };
	int len = sizeof(arr1) / sizeof(int);

	bubble(arr1, len);
	
	printf("\n");

	int arr2[] = { 8,4,6,9,7,1 };
	select(arr2, len);

	printf("\n");

	int arr3[] = { 8,4,6,9,7,1 };
	insert(arr3, len);

	return 0;
}