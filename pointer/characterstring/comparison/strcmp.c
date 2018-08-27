
#include <stdio.h>

// 문자열 함수 헤더 파일 선언
#include <string.h>

void main()
{
	// strcmp - 두 문자열 비교
	// ptr1의 문자를 ptr2의 문자와 비교
	int strcmp(const void * ptr1, const void * ptr2);

	char original[] = "11618nathan";
	char copy[] = "11618nathan";

	if (!strcmp(original, copy))
	{
		puts("문자열 동일");
	}
	else
	{
		puts("문자열 동일X");
	}
}
