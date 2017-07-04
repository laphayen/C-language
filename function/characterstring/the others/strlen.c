
#include <stdio.h>

// 문자열 함수 헤더 파일 선언
#include <string.h>

void main()
{
	// strlen 문자열의 길이 계산 후 반환
	// NULL 문자를 포함하지 않고 길이반환
	size_t strlen(const char *string); 

	char Array[] = "11618nathan";

	printf("Array의 길이: %i \n", strlen(Array));
}
