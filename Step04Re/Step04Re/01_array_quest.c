#include <stdio.h>
/*
������ �迭 ���̰� 10�� �迭�� ���� ��
�迭�� ������ ���� �Է¹޴� �ݺ����� �ۼ�

```
1. �迭�� �Էµ� ���ڵ��� ������ ���
2. �迭�� �Էµ� ���ڵ� �� ���� ū ���ڸ� ���
3. �迭�� �Էµ� ���ڵ� �� ���� ���� ���ڸ� ���

```

*/
int main() {
	int arr[10], total = 0, max, min;
	for (int i = 0; i < 10; i++) {
		printf("%d ��° �迭 �� : ",i+1);
		scanf("%d", &arr[i]);
		total += arr[i];
	}
	max = min = arr[0];

	for (int i = 0; i < 10; i++) {
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	printf("�� �� : %d\n", total);
	printf("�ּҰ� : %d\n", min);
	printf("�ִ밪 : %d\n", max);
}