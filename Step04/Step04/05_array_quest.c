#include <stdio.h>
/*
	������ �迭 ���̰� 10�� �迭�� ���� ��
	Ȧ���� �Է� ������ ù��°���� ä���
	¦���� �Է� ������ ������ �ε������� ä�� �Ŀ�
	�迭�� ������ ���δ� �Է��ϸ�
	�Է¹��� ���� ��ü ���
	�Է� ���� : 1 2 3 4 5 6 7 8 9 0

	index		- 0 1 2 3 4  5 6 7 8 9
	�Էµ� ��	- 1 3 5 7 9 10 8 6 4 2
*/
int main(void) {
	int arr[10];
	int start = 0, end = 9, num;

	while (start <= end) {
		pritnf("���� �Է� : ");
		scanf("%d", &num);

		if (num % 2 == 0) {
			arr[end] = num;
			end--;
		}
		else {
			arr[start] = num;
			start++;
		}
	}

	//start = 0���� �����ؼ� end ���� ��µ� ����
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}