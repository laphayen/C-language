
#include <stdio.h>

void main()
{
	int num = 0;
	int sum = 0;

	do
	{
		printf("ÀÔ·Â: ");
		scanf("%d", &num);
		sum += num;
	} while (num != 0);
	printf("ÇÕ°è: %d \n", sum); 
}
