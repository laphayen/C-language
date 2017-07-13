
#include <stdio.h>

// 1 - for ÇÕ°è
int main()
{
	int count = 1;
	int sum = 0;
	int input = 0;

	printf("ÀÔ·Â: ");
	scanf("%d", &input);

	for (count = 1; count <= input; count++)
	{
		sum += count;
	}

	printf("ÇÕ°è: %d \n", sum);
}
