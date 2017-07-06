
#include <stdio.h>

// 문자열 함수 헤더 파일 선언
#include <string.h>

void main()
{
	// strncat - 일부 문자열 결합
	// source를 destination뒤에 붙임
	char * strncat(char * destination, const char * source, size_t num);

	char original[20] = "11618";
	char copy[20] = "nathan11618";

	puts(strncat(original, copy, 6));
}
