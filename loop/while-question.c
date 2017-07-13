
#include <stdio.h>

// 1 - while 합계
int main()
{
	int count = 1;
	int sum = 0;
	int input = 0;

	printf("입력: ");
	scanf("%d", &input);

	while (count<=input)
	{
		sum += count++;
	}

	printf("합계: %d \n", sum);
}
