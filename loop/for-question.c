
#include <stdio.h>

// 1 - for 합계 
void one()
{
	puts("- 1번 -");
	int count = 1;
	int sum = 0;
	int input = 0;

	printf("입력: ");
	scanf("%d", &input);

	for (count = 1; count <= input; count++)
	{
		sum += count;
	}

	printf("합계: %d \n", sum);
}


// 2 - for * 출력
void two()
{
	puts("- 2번 -");
	int i, j;
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		puts("");
	}
}


void main()
{
	one();
	two();
}
