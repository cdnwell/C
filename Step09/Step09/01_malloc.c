#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>

//�����Ҵ� -> malloc
//stdlib.h, malloc.h -> malloc �Լ��� �� �� �ְ� ���ִ� ��� ���� �� �� ��밡��

int main(void) {
	//void -> �޸𸮸� �����ϴ� ���� ����, �� ��� �Ұ���, ������ �ּҰ��� ���尡��
	//		�ܼ���, �޸� �ּҰ��� �����ϴ� ���� (void * ) = void ������
	//size_t -> typedef unsigned long long
	//typedef -> 
	//size_t a;

	void* ptr = malloc(16);		//�� ������ 16byte ��ŭ �޸𸮸� ���� �Ҵ�
	//16byte�� �� �� �ּҸ� ptr���� ��

	//void *���� ���� �Ұ���(16byte�� �Ҵ��ߴٰ� 4byte int���� 4�� �����Ѵٴ� ����
	//�ȵ�

	int* arr = ptr;		//ptr�� ����Ű�� �ּҸ� ������ arr�� �־��ְڴ�.

	int* arr1 = (int*)malloc(sizeof(int)*4);	//���� ����ϴ� ���, malloc�� ���� ���� ����
	//�޴� ���� �ٸ��� ����

	//int* arr2 = new int[4]; -> �ڹٿ��� ���� �Ҵ��ϴ� ��� new

	for (int i = 0; i < 4; i++)
		arr[i] = i + 1;

	for (int i = 0; i < 4; i++)
		printf("%d ", arr[i]);

	printf("\n");

	free(arr);		//�����Ҵ��� �޸𸮸� ����
	//malloc���� ����� �ݵ�� �޸𸮸� �����ϴ� ���� �ʿ��ϴ�.
	
	//free�� �޸� ������ �Ǿ����� Ȯ���ϱ� ���� for��
	for (int i = 0; i < 4; i++)
		printf("%d ", arr[i]);

	printf("\n");
	//�ڹ� -> ���̳ζ�����, �޸����� <- ������ �ݷ��Ͱ� ��
	 
	return 0;
}