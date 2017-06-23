
#include <stdio.h>

void main()
{
	int num = 11618;

	// int형 포인터 변수
	int * pointer;

	pointer = &num;

	printf("pointer: %d \n", *pointer);

	// 포인터 연산
	(*pointer) -= 11618;

	printf("pointer: %d \n", *pointer);
}
