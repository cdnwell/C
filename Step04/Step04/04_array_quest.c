#include <stdio.h>
/*
	������ �迭 ���̰� 10�� �迭�� ���� ��
	�迭�� ������ ���� �Է¹޴� �ݺ����� �ۼ�

	1. �迭�� �Էµ� ���ڵ��� ������ ���
	2. �迭�� �Էµ� ���ڵ� �� ���� ū ���ڸ� ���
	3. �迭�� �Էµ� ���ڵ� �� ���� ���� ���ڸ� ���
*/
int main(void) {

	int arr[10] = { 0 };	//�ʱ�ȭ ���൵ �ǰ� �����൵ �ȴ�.
	int max, min, total = 0;
	const int len = sizeof(arr) / sizeof(int);	//len�� ���ٲٰ� ��

	// �Ʒ� for���� ��� �� �� �ִµ� �׷� ����, ������ �۾��� ��� ó���ϱ�
	for (int i = 0; i < 10; i++) {
		printf("%d ��° ���� �Է� : ", i + 1);
		scanf("%d", &arr[i]);
	}

	//max = arr[0];
	//min = arr[0];
	max = min = arr[0];
	
	for (int i = 0; i < 10; i++) {
		total += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	printf("�� �� : %d\n", total);
	printf("�ּҰ� : %d\n", min);
	printf("�ִ밪 : %d\n", max);

	return 0;
}