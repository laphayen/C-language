// 트리플 포인터 -  ***

#include <stdio.h>

int main(void)
{
	int num = 7;
	int *optr = &num;
	int **dptr = &optr;
	int ***tptr = &dptr;

	printf("%d %d %d \n", *optr, **dptr, ***tptr);
	return 0;
}
