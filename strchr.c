
#include <stdio.h>

// 문자열 함수 헤더 파일 선언
#include <string.h>

void main()
{
	// strchr - 해당 첫 번째 문자로 이동
	char * strchr(char * str, int character);

	char original[] = "11618nathan";

	printf("%s \n", strchr(original, 'n'));
}
