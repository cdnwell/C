#include <stdio.h>
/*
	2���� �迭 2�� 4�� ¥�� �迭�� �ʱ�ȭ

	1 2 3 4
	5 6 7 8

	2���� �迭 4�� 2�� ¥�� ���� �Ŀ�
	���� �����ؼ� �ʱ�ȭ�� �迭�� 4�� 2 �� �迭�� 
	������ �Ŀ� �迭 ��ü ������ ���

	1 5
	2 6
	3 7
	4 8
*/
int main(void) {
	int arr1[2][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};

	int arr2[4][2];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			arr2[i][j] = arr1[j][i];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}

	return 0;
}