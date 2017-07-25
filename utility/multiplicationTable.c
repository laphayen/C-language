
#include <stdio.h>

void main(void)
{
	int dan = 0;
	int num = 1;

	printf("몇 단? \n");

	// 단 입력
	scanf("%d", &dan);

	// while - 1부터 9까지 곱
	while (num < 10)
	{
		printf("%d * %d = %d \n", dan, num, dan*num);
		num++;
	}
}
