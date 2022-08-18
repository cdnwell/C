#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char str1[] = "Made In Korea";
	char str2[20];
	
	//문자열 복사
	strcpy(str2, str1);
	printf("%s\n", str2);

	for (int i = 0; i < 20; i++) {
		printf("%d ", str2[i]);
	}
	printf("\n");

	char str3[] = "Made In Korea";
	char str4[] = "aasdfqwrzxvcasdfr";

	//문자열 부분 복사 - 부분 복사는 마지막 문자 널문자 처리 X
	strncpy(str4+3, str3+6, 4);	//원하는 지점에 원하는 부분만 복사가능하다. 주소값에 정수(몇번째)를 더해줌
	printf("%s\n", str4);

	char str5[] = "Made In Korea";
	strncpy(str5 + 8, "U S A",5);
	puts(str5);		//문자열 출력하고 자동으로 줄바꿈 해주는 함수

	//문자열 길이
	int len = strlen(str5);
	printf("str5 문자열 길이 : %d\n", len);

	//문자열 붙이기
	char http[] = "http://";
	char www[] = "www.";
	char site[] = "naver.";
	char domain[] = "com";
	char url[100];

	//중간에 n이 들어가면 반드시 마지막에 널문자 처리를 해줘야 한다. 부분처리는
	//항상 널문자가 안들어감(n이 들어가면)

	strcpy(url, http);
	//널문자를 찾아 널문자 위치에 붙이고 마지막에 널문자를 붙인다.
	strcat(url, www);
	strcat(url, site);
	strcat(url, domain);

	puts(url);

	//문자열 비교 strcmp --> 문자열이 같으면 0, 다르면 -1, 1이 리턴
	char str6[] = "Hello";

	printf("%d\n", strcmp(str6, "Hello"));
	printf("%d\n", strcmp(str6, "Jello"));
	printf("%d\n", strcmp(str6, "Aello"));

	//문자 검색
	char str7[] = "asdfwqervxzfxcv";
	char* p = str7;
		p = strchr(p, 'f');
		printf("문자 찾기 : %p %c\n", p, *p);
	
	/*while (1) {
		p = strchr(p, 'f');
		if (p == NULL) break;
		printf("%p %c\n", p, *p);
		p++;
	}*/

	//문자열 검색 - 검색한 문자열이 없으면 NULL을 리턴한다.
	//C언어 때 부터 NULL이 참조형에서 빈값이라는 걸로 씀
	p = strstr(str7,"qessar");
	printf("%p\n", p);

	//문자열 잘라내기
	//첫번째 공백을 찾고 첫번째 문자열 위치 리턴
	//두번째 공백을 찾고 두번째 문자열 위치 리턴
	char str8[] = "I got a Boy";
	char* ptr2;
	ptr2 = strtok(str8, " ");

	puts(ptr2);
	/*while (ptr2 != NULL) {
		puts(ptr2);
		ptr2 = strtok(NULL, " ");
	}*/

	for (int i = 0; i < sizeof(str8); i++) {
		putchar(str8[i]);
	}

	printf("\n");

	//문자열을 정수로 변환
	printf("%d\n", atoi("1234")*2);
	//문자열을 실수로 변환
	printf("%lf\n", atof("3.1415F"));

	char* putNum;

	printf("받아온 문자열 : ");
	scanf("%d", &putNum);

	printf("숫자로 변환한 값 : %d\n", parseInt(putNum));

	return 0;
}

int parseInt(char* n) {
	//받아온 문자열을 숫자로 변환
	int len = strlen(n);
	int result = 0 , size = 1;
	
	for (int i = len - 1; i >= 0; i--, size *= 10) {
		result += (n[i] - 48) * size;
	}

	return result;
}