
#include <stdio.h>

// 문자 함수 헤더 파일 선언
#include <ctype.h>

void main()
{
	char input;

	printf("대문자 입력: ");
	scanf("%c", &input);

	// tolower - 소문자로 변경
	printf("%c \n", tolower(input));
}
