
#include <stdio.h>

void main()
{
	int sum = 0;
	int num = 0;
	
	// 먼저 
	do
	{
		printf("숫자 입력(0 - 종료): ");
		scanf("%d", &num);
		sum += num;
	} while (num != 0);

	// 출력
	printf("합계: %d \n", sum);
	
	return 0;
}
