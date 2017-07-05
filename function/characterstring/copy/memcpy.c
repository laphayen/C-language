
#include <stdio.h>

// 문자열 함수 헤더 파일 선언
#include <string.h>

void main()
{
	// memcpy - 메모리 블록 복사
	// destination에 전달된 값을 반환
	void * memcpy(void * destination, const void * source, size_t num);

	char original[] = "11618nathan";

	// 복사할 파일보다 배열의 크기 이상 지정 -> 오버플로우 방지
	char copy[20];

	// (복사할 위치, 위치);
	memcpy(copy, original, strlen(original) + 1);

	puts(copy);
}
