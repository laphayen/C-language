
#include <stdio.h>

void main()
{
	int i = 11618;
	int j = 777;

	// 포인터 변수 선언
	int * pointer;

	// 포인터 지정
	pointer = &i;
	printf("i의 주소: %p \n", &i);
	printf("pointer: &p \n", pointer);
	printf("pointer의 값: %d \n", *pointer);

	// 포인터 지정
	pointer = &j;
	printf("j의 주소: %p \n", &j);
	printf("pointer: &p \n", pointer);
	printf("pointer의 값: %d \n", *pointer);
}
