
#include <stdio.h>

void run()
{
	// static - 함수 안에서 접근 - 1번 초기화 - 종료까지 메모리 존재
	static int staticNum = 0;
	int num = 0;
	printf("static: %d, local: %d \n", staticNum++, num++);
}


int main()
{
	int i;

	for ( i = 0; i < 3; i++)
	{
		run();
	}
}
