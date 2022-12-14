#include <stdio.h>
/*
    정수형 배열 길이가 10인 배열을 선언 후
    홀수을 입력 받으면 첫번째부터 채우고
    짝수를 입력 받으면 마지막 인덱스부터 채운 후에
    배열에 내용을 전부다 입력하면
    입력받은 내용 전체 출력
    입력 순서 : 1 2 3 4 5 6 7 8 9 10

    index    - 0 1 2 3 4 5  6 7 8 9
    입력된 값 - 1 3 5 7 9 10 8 6 4 2
*/
int main(void) {
	int arr[10];
    //start, end를 포인터로 변경해서 처리
    int zero = 0, nine = 9;
    int* start = &arr[0];
    int* end = &arr[9];
    int num;

    //int* start = 0, * end = 9;

    //포인터 덧셈 뺄셈, 크다 작다 비교 가능

    while (start <= end) {
        printf("숫자 입력 : ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            *end = num;
            end--;
        }
        else {
            *start = num;
            start++;
        }
    }

    start = &arr[0];
    for (int i = 0; i < 10; i++)
        printf("%d ", *(start+i));

    return 0;
}