//#pragma once		//중복 include 막는 방법 - 1

#ifndef __TEST_H__		//#ifdef <-- #define으로  __TEST_H__가 선언되어 있는지, 값은 상관 없다.
#define __TEST_H__		//<-- 표준적인 방법, __TEST_H__가 없을 경우 실행하고 바로 #define __TEST_H__를 선언해 두번 중복되어
//코드가 실행되지 않게 한다. 중복 include 막는 방법 - 2

//#ifndef <-- #define으로 __TEST_H__가 선언되지 않은 경우 코드 실행

//#ifndef, ifdef는 프로그램 속도와 상관이 없다. 컴파일 이전에 실행되기 때문이다.
//게임에서 xbox, ps, pc등 나눠서 코딩을 해야 할 경우 사용되기도 한다.

//선행처리자의 주요 역할 : 중복 막기

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