
#include <stdio.h>

// 변환 함수
void swap(int **dptr1, int **dptr2)
{
	int *temp = *dptr1;
	*dptr1 = *dptr2;
	*dptr2 = temp;
}

void main()
{
	int num1 = 16;
	int num2 = 18;

	int *ptr1, *ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	printf("*ptr1: %d, *ptr2: %d \n", *ptr1, *ptr2);

	swap(&ptr1, &ptr2);
	printf("*ptr1: %d, *ptr2: %d \n", *ptr1, *ptr2);
}
