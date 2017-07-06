
#include <stdio.h>

// 문자열 함수 헤더 파일 선언
#include <string.h>

void main()
{
	// memmove - 메모리 블록 이동
	// destination에 전달된 값을 반환
	void * memmove(void * destination, const void * source, size_t num);

	char original[20] = "nathan";

	// 복사할 파일보다 배열의 크기 이상 지정 -> 오버플로우 방지
	char copy[20] = "11618";

	// (복사할 위치, 위치, 크기)
	memmove(copy+4, original, 5);

	puts(original);
}
