#include <stdio.h>
#include "test.h"
#include "test.h"
//" " (큰 따옴표)는 우리가 만든걸 써야 할 때 쓴다.
//별도 폴더 만들었을 때에는 상대경로 쓰기
//변수를 넣을 수 있지만 똑같은 이름 쓰면 안됨
//< > (꺽쇠)는 이미 있는걸  써야 할 때 쓴다.
// # <- 선행 처리자 , #pragma once -> 한번만 실행된다.

//#pragma once는 초창기 gcc에서 적용되지 않아서 잘 안쓰는게 좋은 듯
//대신에 다른 방법 추천

int main(void) {

	printf("%d\n", sum(10, 20));
	max(20, 30);

	return 0;
}