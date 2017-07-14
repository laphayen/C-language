
#include <stdio.h>

// 1 - while 합계
void one()
{
	puts("- 1번 -");
	int count = 1;
	int sum = 0;
	int input = 0;

	printf("입력: ");
	scanf("%d", &input);

	while (count <= input)
	{
		sum += count++;
	}

	printf("합계: %d \n", sum);
} 


// 2 - while * 출력
void two()
{
	puts("- 2번 -");
	int i = 1;
	int j = 0;
	while (i <= 5)
	{
		j = 1;
		while (j <= i)
		{
			printf("*");
			j++;
		}
		i++;
		puts("");
	}

}


void main()
{
	one();
	two();
}
