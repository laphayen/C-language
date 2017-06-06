
#include <stdio.h>

int main(void)
{
	int num = 0;

	while (num < 10)	// 반복의 조건 - 10회 반복
	{
		printf("while문 반복 %d \n", num);

		// 무한 루프 방지 -> 무한 루프 - Ctrl+C
		num++;
	}

	/*
	// 중괄호 생략 가능 - 1줄 실행
	while (num < 10)
		printf("while문 반복 %d \n", num, num++);
	*/

	return 0;
}
