#include <stdio.h>
/*
������ �迭 ���̰� 10�� �迭�� ���� ��
Ȧ���� �Է� ������ ù��°���� ä���
¦���� �Է� ������ ������ �ε������� ä�� �Ŀ�
�迭�� ������ ���δ� �Է��ϸ�
�Է¹��� ���� ��ü ���
�Է� ���� : 1 2 3 4 5 6 7 8 9 0

```
index		- 0 1 2 3 4  5 6 7 8 9
�Էµ� ��	- 1 3 5 7 9 10 8 6 4 2

```

*/
int main(void) {
	int arr[10], i = 0, j = 9, count = 0;
	int arr2[10];

	for (i = 0; i < 10; i++) {
		printf("%d��° �迭 : ", i + 1);
		scanf("%d", &arr[i]);
	}

	while (i <= j) {
		if (arr[count] % 2 == 0) {
			arr2[j] = arr[count];
			j--;
		}
		else {
			arr2[i] = arr[count];
			i++;
		}
		count++;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr2[i]);
	}

	return 0;
}