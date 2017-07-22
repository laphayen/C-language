
#include <stdio.h>

// 1 - 홀짝
void one()
{
	int input;

	printf("입력: ");
	scanf("%d", &input);

	switch (input%2)
	{
	case 0:
		printf("짝수 \n");
	case 1:
		printf("홀수 \n");
	}
}


void main()
{
	one();
}
