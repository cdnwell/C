#include <stdio.h>
//�迭�� ��� ��Ҹ� ����ϴ� �Լ��� �ۼ�
void printArray(int arr[], int len) {
	//c������ �Լ����� ���� ������ ���� �� ����.
	//�Ʒ��� ���� ���̸� �����ϸ� arr�� ������ ������ ��޵Ǿ� 8�� ���� ������
	//�׻� len�� 2�� ���´� (8 / 4 �̹Ƿ�)
	//int len = sizeof(arr) / sizeof(int);
	//printf("%d\n", len);

	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}

int main(void) {
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
	int arr3[10] = { 1,2,3,4 };

	printArray(arr1,sizeof(arr1) /sizeof(int));
	printArray(arr2,sizeof(arr2) /sizeof(int));
	printArray(arr3,sizeof(arr3) /sizeof(int));

	return 0;
}