
#include <stdio.h>

void main()
{
	int sum = 0;
	int num = 0;

	do
	{
		printf("숫자 입력(0 - 종료): ");
		scanf("%d", &num);
		sum += num;
	} while (num != 0);

	return 0;
}
