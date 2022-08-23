#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>

//동적할당 -> malloc
//stdlib.h, malloc.h -> malloc 함수를 쓸 수 있게 해주는 헤더 파일 둘 다 사용가능

int main(void) {
	//void -> 메모리를 저장하는 값이 없음, 값 계산 불가능, 포인터 주소값은 저장가능
	//		단순히, 메모리 주소값만 전달하는 역할 (void * ) = void 포인터
	//size_t -> typedef unsigned long long
	//typedef -> 
	//size_t a;

	void* ptr = malloc(16);		//힙 영역에 16byte 만큼 메모리를 동적 할당
	//16byte의 맨 앞 주소를 ptr에게 줌

	//void *에는 저장 불가능(16byte를 할당했다고 4byte int값을 4개 저장한다는 것은
	//안됨

	int* arr = ptr;		//ptr이 가리키는 주소를 포인터 arr에 넣어주겠다.

	int* arr1 = (int*)malloc(sizeof(int)*4);	//원래 사용하는 방식, malloc의 리턴 값과 대입
	//받는 값이 다르기 때문

	//int* arr2 = new int[4]; -> 자바에서 동적 할당하는 방식 new

	for (int i = 0; i < 4; i++)
		arr[i] = i + 1;

	for (int i = 0; i < 4; i++)
		printf("%d ", arr[i]);

	printf("\n");

	free(arr);		//동적할당한 메모리를 해제
	//malloc으로 만들면 반드시 메모리를 해제하는 것이 필요하다.
	
	//free로 메모리 해제가 되었는지 확인하기 위한 for문
	for (int i = 0; i < 4; i++)
		printf("%d ", arr[i]);

	printf("\n");
	//자바 -> 파이널라이즈, 메모리해제 <- 가비지 콜렉터가 함
	 
	return 0;
}