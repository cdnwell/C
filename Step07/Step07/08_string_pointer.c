#include <stdio.h>

int main(void) {
	char str[] = "Hello World";
	//������ ���� ptr�� Hello World��� ��ü�� �ּҰ��� �����Ѵ�.
	//�׷��� ptr[0] = 'K';�� ���� �ٲٴ� ���� �ȵȴ�.
	//ptr = str;�� �迭�� �޾Ƽ� ptr[0] = 'K';�� �ٲ� ���� �ִ�.
	char* ptr = "Hello World";

	printf("%s\n", str);
	printf("%s\n", ptr);

	str[0] = 'K';
	printf("%s\n", str);

	ptr = str;
	ptr[0] = 'T';
	printf("%s\n", ptr);

	return 0;
}