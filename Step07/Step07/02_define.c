#include <stdio.h>
//UINT  > unsigned int�� ����
#define UINT unsigned int
#define LL long long
#define PINT int *

int main(void) {
	unsigned int n = 10000;
	int i = 4294967295;	//2^32 2�� 32��
	unsigned int ui = 4294967295U;
	UINT uint = 4294967295U;
	LL l = 4294967295LL;	//long Ÿ���� ���� �� �ڿ� l�� �ٿ� �ִ°� ����. �Ⱥٿ��� ��
	unsigned long long ull = 1844674407370951615ULL;
	//�ڹٿ����� longŸ�� L�ϳ� ����
	PINT ptr = &n;

	printf("%d\n", n);
	printf("%d\n", i);
	printf("%u\n", ui);		//��ȣ�� ���� ���� ��� %u
	printf("%u\n", uint);
	printf("%lld\n", l);
	printf("%llu\n", ull);
	printf("%d\n", *ptr);

	return 0;
}