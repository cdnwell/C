#include <stdio.h>

int main(void) {
	//������ �迭
	int arr1[5];
	//�Ǽ��� �迭
	double arr2[6];
	//������ �迭
	char str[10];

	//sizeof > ��ȣ�ȿ� ����ִ� ���� �� ����Ʈ���� �˷���
	//���⼱ �迭�� �� ����Ʈ����
	printf("%d %d %d\n", sizeof(arr1), sizeof(arr2), sizeof(str));
	//�迭�� ���� ���ϴ� ���� sizeof(�迭)/sizeof(�迭��_�ڷ���)
	printf("%d %d %d\n", sizeof(arr1)/sizeof(int), sizeof(arr2)/sizeof(double), sizeof(str)/sizeof(char));

	return 0;
}