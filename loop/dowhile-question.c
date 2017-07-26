
#include <stdio.h>

// 1 - 0입력 종료
int one()
{
	int num = 0;
	int sum = 0;

	do
	{
		printf("입력: ");
		scanf("%d", &num);
		sum += num;
	} while (num != 0);
	printf("합계: %d \n", sum);

	return 0;
}


void main()
{
	one();
}
