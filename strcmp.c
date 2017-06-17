
#include <stdio.h>

// 문자열 함수 헤더 파일 선언
#include <string.h>

void main()
{
	// 두 문자열 동일 확인 함수
	// str1의 처음 num개의 문자를 str2의 처음 num개의 문자와 비교
	int strcmp(const char *s1, const char *s2);

	char Array[] = "11618nathan";
	char copy[] = "11618nathan";

	if (!strcmp(Array, copy))
	{
		printf("문자열 동일 \n");
	}
	else
	{
		printf("문자열 동일X \n");
	}
}
