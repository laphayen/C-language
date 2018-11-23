// strcmp - 두 문자열 비교

// 기본 입출력 함수 선언
#include <stdio.h>

// 문자열 함수 헤더 파일 선언
#include <string.h>

void main()
{
	// ptr1의 문자를 ptr2의 문자와 비교
	int strcmp(const void * ptr1, const void * ptr2);

	char string1[20] = "";
	char string2[20] = "";

	// 첫 번째 문자열 입력
	printf("첫 번째 문자열 입력: ");
	scanf("%s", string1);

	// 첫 번째 문자열 입력
	printf("두 번째 문자열 입력: ");
	scanf("%s", string2);

	// if문 사용
	if (!strcmp(string1, string2))
	{
		puts("문자열 동일");
	}
	else
	{
		puts("문자열 동일X");
	}
}
