
#include <stdio.h>

void main()
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
}
