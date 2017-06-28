
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
	
	// while 중첩 - 전체 출력
	while (dan<10)
	{
		num = 1;
		while (num <10)
		{
			printf("%d * %d = %d \n", dan, num, dan*num);
			num++;
		}
		dan++;
	}

	// for 중첩 - 전체 출력
	for (dan = 2; dan < 10; dan++)
	{
		for (num = 0; num < 10; num++)
		{
			printf("%d * %d = %d \n", dan, num, dan*num);
		}
	}

}
