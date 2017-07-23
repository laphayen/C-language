
#include <stdio.h>

void main()
{
	int num = 11618;
	int *ptr = &num;
	int **dptr = &ptr;

	printf("%9p %9p \n", ptr, *dptr);
	printf("%9p %9p \n", num, **dptr);
}