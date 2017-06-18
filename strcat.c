
#include <stdio.h>

// 문자열 함수 헤더 파일 선언
#include <string.h>

void main()
{
	// 문자열 덧붙이기
	char * strcat(char * destination, const char * source);

	char str1[20] = "11618";
	char str2[20] = "nathan";

	printf("str1: %s \n", strcat(str1, str2));
}
