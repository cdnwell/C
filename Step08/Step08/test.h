//#pragma once		//�ߺ� include ���� ��� - 1

#ifndef __TEST_H__		//#ifdef <-- #define����  __TEST_H__�� ����Ǿ� �ִ���, ���� ��� ����.
#define __TEST_H__		//<-- ǥ������ ���, __TEST_H__�� ���� ��� �����ϰ� �ٷ� #define __TEST_H__�� ������ �ι� �ߺ��Ǿ�
//�ڵ尡 ������� �ʰ� �Ѵ�. �ߺ� include ���� ��� - 2

//#ifndef <-- #define���� __TEST_H__�� ������� ���� ��� �ڵ� ����

//#ifndef, ifdef�� ���α׷� �ӵ��� ����� ����. ������ ������ ����Ǳ� �����̴�.
//���ӿ��� xbox, ps, pc�� ������ �ڵ��� �ؾ� �� ��� ���Ǳ⵵ �Ѵ�.

//����ó������ �ֿ� ���� : �ߺ� ����

#include <stdio.h>
int sum(int a, int b) {
	return a + b;
 }
void max(int a, int b) {
	if (a > b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
}
#endif