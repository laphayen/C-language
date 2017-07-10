
#include <stdio.h>

// 헤더 파일 선언
#include <stdlib.h>

void main()
{
	// realloc() - 동적 메모리 재할당 - 기존의 할달된 메모리를 변경
	void *realloc(void *memblock, size_t size);

	int * p = (int*)realloc(p, _msize(p) * 2);

	printf("%d byte \n", _msize(p));
	printf("%d \n", *p);

	// 할달 메모리 해제
	free(p);
}
