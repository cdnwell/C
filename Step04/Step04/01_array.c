#include <stdio.h>

int main(void) {
	//�����Ҵ��� �ؾ� �Է��� ������ �迭 ���𰡴�
	//���������� ����θ� ���𰡴�
	int size;
	printf("�迭 ���� �Է� : ");
	scanf("%d", &size);

	//int arr[size];
	int arr[5];

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;

	// c���� length�� ����
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
