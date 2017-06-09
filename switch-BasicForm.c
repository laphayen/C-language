
#include <stdio.h>

void main()
{
	int num;
	printf("1~3 정수 입력: ");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("1 입력 \n");
		break;
	case 2:
		printf("2 입력 \n");
		break;
	case 3:
		printf("3 입력 \n");
		break;
	default:
		break;
	}
}