
#include <stdio.h>

// 1 - for 합계
int main()
{
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
