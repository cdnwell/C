#include <stdio.h>
/*
* 문자형 배열 길이가 50인 배열을 선언
* 문자열을 입력 받은 후
* 입력 받은 문자열 길이를 출력
*
* 입력 받은 문자열이 회문(palindrome) 인지 체크
* 문자열이 회문이면 '회문 입니다.' 출력
* 회문이 아니만 '회문이 아닙니다.' 출력
* 
* idx를 사용하지 않고 포인터로 해결
* 
*/
int main(void) {
    char str[50];
    char* s, * e;
    s = e = str;

    printf("문자열 입력 : ");
    scanf("%s", str);

    while (*e != 0) e++;
    e--;    //마지막 글자 위치로 이동

    printf("문자열 길이 : %d\n", e - s + 1);

    while (s <= e) {
        if (*s != *e)
            break;
        s++;
        e--;
    }

    if (s > e)
        printf("입력하신 문자는 회문입니다.");
    else
        printf("입력하신 문자는 회문이 아닙니다.");
    
    return 0;
}