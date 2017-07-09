
#include <stdio.h>

// 문자열 함수 헤더 파일 선언
#include <string.h>

void main()
{
	// strchr - 해당 첫 번째 문자로 이동
	char * strchr(char * str, int character);

	char original[] = "11618nathan";

	// 주소 위치부터 끝까지 출력
	printf("%s \n", strchr(original, 'n'));
}
