
#include <stdio.h>

// 헤더 파일 선언
#include <stdlib.h>

void main()
{
	// free() - 할당 메모리 해제 

	int * p = (int*)malloc(sizeof(int));

	printf("%d \n", *p);
	 
	free(p);
}
