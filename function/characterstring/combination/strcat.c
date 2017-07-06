
#include <stdio.h>

// 문자열 함수 헤더 파일 선언
#include <string.h>

void main()
{
	// strcat - 문자열 결합
	// source를 destination 뒤에 붙임
	char * strcat(char * destination, const char * source);

	char str1[20] = "11618";
	char str2[20] = "nathan";

	puts(strcat(str1, str2));
}
