
#include <stdio.h>

// 문자열 함수 헤더 파일 선언
#include <string.h>

void main()
{
	// strcpy - 문자열 복사 함수
	// destination에 전달된 값을 반환
	char * strcpy(char * destination, const char * source);

	char original[] = "11618nathan";

	// 복사할 파일보다 배열의 크기 이상 지정 -> 오버플로우 방지
	char copy[20];

	// (복사할 위치, 위치);
	strcpy(copy, original);

	printf("%s \n", copy);
}
