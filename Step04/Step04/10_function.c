#include <stdio.h>

//c는 함수 - 오버로딩, 오버라이딩이 되지 않는다.
//void도 보낼 값이 없어도 return 을 쓰면 함수가 종료됨 

//리턴 O, 매개변수 O
int sum(int n1, int n2) {
	return n1 + n2;
}

//리턴 X, 매개변수 O - void 리턴할 값이 없다
void print(int n) {
	printf("결과값 : %d\n", n);
}

//리턴 O, 매개변수 X
int inputNumber() {
	int n;
	scanf("%d", &n);
	return n;
}

//리턴 X, 매개변수 X
void printMessage() {
	printf("숫자 입력 : ");
}

int main(void) {
	printMessage();
	int n1 = inputNumber();
	printMessage();
	int n2 = inputNumber();
	int result = sum(n1, n2);
	printf("%d\n", result);

	//포인터 > 함수 저장 : 리턴타입 void 매개변수 없음 > 함수 저장 가능
	void (*ptr)() = printMessage;
	printf("%p\n",ptr);
	ptr();

	void (*fnc)(int) = print;
	printf("%p\n", fnc);
	fnc(100);

	//오버라이딩, 오버로딩 > 주소값을 기준으로 맵핑한 것
	
	return 0;
}