
#include <stdio.h>

void run()
{
	// static - 선언 범위 안의 함수 사용
	static int staticNum = 0;
	int localNum = 0;
	printf("static: %d, local: %d \n", staticNum++, localNum++);
}


int main()
{
	int i;

	for (i = 0; i < 3; i++)
	{
		run();
	}
}
