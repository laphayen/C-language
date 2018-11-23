
#include <stdio.h>

// 문자열 함수 헤더 파일 선언
#include <string.h>

void main()
{
	// strncpy - 문자열로부터 일부만 복사
	// destination에 전달된 값을 반환
	char * strncpy(char * destination, const char * source, size_t num);

	char original[] = "11618nathan";

	// 복사할 파일보다 배열의 크기 이상 지정 -> 오버플로우 방지
	char copy[20];

	// (복사할 위치, 위치, 크기)
	strncpy(copy, original, 5);

	// NULL 삽입 - 끝 확인
	copy[6] = NULL;

	printf("%s", copy);
	puts("");
}
