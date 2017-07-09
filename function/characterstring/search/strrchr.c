
#include <stdio.h>

// 문자열 함수 헤더 파일 선언
#include <string.h>

void main()
{
	// strrchr - 뒤에서부터 해당 첫 번째 문자로 이동
	char * strrchr(char * str, int character);

	char original[] = "11618nathan";

	// 주소 위치부터 끝까지 출력
	printf("%s \n", strrchr(original, 'n'));
}
