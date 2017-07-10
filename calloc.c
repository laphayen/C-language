
#include <stdio.h>

// 헤더 파일 선언
#include <stdlib.h>

void main()
{
	// calloc() - 동적 메모리 할당 - 동적으로 메모리를 0으로 할당하여 포인터를 변수에 저장
	void * calloc(size_t size);

	int * p = (int*)calloc(sizeof(int)); 

	printf("%d byte \n", _msize(p));

	printf("%d \n", *p);

	// 할달 메모리 해제
	free(p);
}
