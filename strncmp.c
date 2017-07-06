
#include <stdio.h>

// 문자열 함수 헤더 파일 선언
#include <string.h>

void main()
{
	// strncmp - 일부 문자열 비교
	// str1의 문자를 str2의 문자와 비교
	int strncmp(const char * str1, const char * str2, size_t num);

	char original[] = "1161803";
	char copy[] = "11618nathan";

	if (!strncmp(original, copy, 5))
	{
		puts("문자열 동일");
	}
	else
	{
		puts("문자열 동일X");
	}
}
