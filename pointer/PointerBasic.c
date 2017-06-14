#include <stdio.h>

void main()
{
	int num;
	int * p;
	
	*p = &num;
	
	printf("%d", *p);

	int arr[3] = { 1,2,3 };

	printf("%d\n", *arr);
}
