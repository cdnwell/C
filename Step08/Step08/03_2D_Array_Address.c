#include <stdio.h>
//���� ���� -> 2����, n���� �迭


int main(void) {
	int arr[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%p\n", &arr[i][j]);
		}
		printf("----------------\n");
	}

	int* ptr = arr;
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
		printf("%p\n", ptr++);
	}
	
	//�迭 ������ �� ���� �ٸ�

	return 0;
}