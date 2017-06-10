
#include <stdio.h>

int main()
{
	int num = 1;
	printf("start! \n");

	while (num < 101)
	{
		if(num % 2 == 0)
		{
			continue;
		}
		printf("%d \n", num);
		num++;
	}
	printf("end! \n");

	return 0;
}
