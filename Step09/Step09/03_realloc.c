#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int* arr = (int*)malloc(sizeof(int) * 10);

	for (int i = 0; i < 10; i++) {
		arr[i] = i + 1;
	}

	printf("%p\n", arr);		//�޸𸮰� �����Ҵ� �� �� �ּҸ� ���

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	printf("\n");

	//�����Ϸ� ������ ���� ���Ҵ��� �� �� ũ�⸦ ���̸� 
	//�޸� �ּҰ� �ȹٲ�⵵ �Ѵ�.

	//���Ҵ�
	//������ �����Ҵ��� �� �ּҶ�, �� ����Ʈ �Ҵ�����
	//arr = (int*)realloc(arr, sizeof(int) * 5);
	arr = (int*)realloc(arr, sizeof(int) * 15);
		
	printf("%p\n", arr);

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}