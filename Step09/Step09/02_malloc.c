#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//���� �Ҵ����� ������ ���� 10�� ������ ������ ���� �Ŀ�
	//���� �Ҵ��� ���� 1���� 10���� ���ڸ� �־ �ʱ�ȭ

	//int* arr = (int*)malloc(sizeof(int) * 10);

	void* ptr = malloc(40);

	int* arr = ptr;

	for (int i = 0; i < 10; i++) 
		arr[i] = i + 1;

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	printf("\n");

	free(arr);

	//calloc -> ����Ÿ�� void, ù��° �μ� - � ¥�� �������, ������ byte ũ��
	arr = (int*)calloc(10, sizeof(int));

	for (int i = 0; i < 10; i++)
		arr[i] = (i + 1)*2;

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	free(arr);

	return 0;
}