#include <stdio.h>

int main(void) {
	int arr[] = { 3,2,7,4,1,9 };
	int* ptr = arr;

	printf("%d\n", *ptr + 1);	//������ ���� �� + 1, ������ ������ ��ȣ�� �����ϰ� ���� ���� �켱
	printf("%d\n", *(ptr + 1));	//������ �޸� �ּҰ� ���� �� ������ ����
	//�ּҰ��� �Ϲ������� �����ų� ������ �ʴ´�.

	// ++������ *���꺸�� �켱������ ���� *ptr++;�� arr[1]�� ���� ����.
	//*ptr++;
	(*ptr)++;

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
	printf("%p %p\n", &arr[0], ptr);

	return 0;
}