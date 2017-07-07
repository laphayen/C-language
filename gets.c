
// 헤더 파일 선언
#include <stdio.h>

void main()
{
	// gets - 문자열 입력 함수
	// 함수 원형
	char * gets(char * str);

	char string[100];

	gets(string);

	puts(string);
}