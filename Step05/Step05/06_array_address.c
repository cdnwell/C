#include <stdio.h>

int main(void) {
	/*
		������ �迭 ���̰� 5�� �迭�� ������ ��
		�迭�� ��� ����� �ּҰ��� ���
	*/
	int arr[5];
	for (int i = 0; i < 5; i++) {
		printf("%d�� ° : %p\n", i, &arr[i]);
		//�޸� �ּҴ� �� �� ���ڸ��� ���� �ȴ�.
	}

	/*
		double�� �迭 ���̰� 5�� �迭�� ������ ��
		�迭�� ��� ����� �ּҰ��� ���
	*/
	printf("-----------\n");
	double arr2[5];
	for (int i = 0; i < 5; i++) {
		printf("%d�� ° : %p\n", i, &arr2[i]);
	}

	return 0;
}