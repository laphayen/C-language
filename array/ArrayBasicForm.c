
#include <stdio.h>

void main()
{
	// 배열의 선언
	// 타입 - 배열이름 - [크기]
	int Array[5];
	int i;

	printf("%d \n", sizeof(Array));
	printf("%d \n", (sizeof(Array) / sizeof(int)));
	
	Array[0] = 1;
	Array[1] = 1;
	Array[2] = 6;
	Array[3] = 1;
	Array[4] = 8;

	// 인덱스는 0부터 시작
	for (i = 1; i <= 5; i++) 
	{
		Array[i - 1] = 10 * i;
	}

	for (i = 1; i <= 5; i++)
	{
		printf("%d \n", Array[i - 1]);
	}
}
