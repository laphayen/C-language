
#include <stdio.h>

// 헤더 파일 선언
#include <malloc.h>

void main()
{
	// malloc() - 동적 메모리 할당 - 동적으로 메모리를 할당하여 포인터를 변수에 저장
	void * malloc(size_t size);

	int * p;
	x = (int *)malloc(sizeof(int));

	*p = 11618;
	printf("%d \n", p);

	free(p);
}
