
#include <stdio.h>

int main(void)
{
	int dan = 0;
	int num = 1;
	printf("¸î ´Ü? \n");
	scanf("%d", &dan);

	while (num < 10)
	{
		printf("%d * %d = %d \n", dan, num, dan*num);
		num++;
	}
	return 0;
}