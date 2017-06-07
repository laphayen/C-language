
#include <stdio.h>

void main()
{
	int num = 0;
	int dan = 2;
	int num = 0;

	while (num < 10)	// 반복의 조건 - 10회 반복
	{
		printf("while문 반복 %d \n", num);

		// 무한 루프 방지 -> 무한 루프 - Ctrl+C
		num++;
	}


	// 중괄호 생략 가능 - 1줄 실행
	while (num < 10)
		printf("while문 반복 %d \n", num, num++);


	// 무한 루프
	while (1)
	{
		printf("무한 루프 반복 \n");
	}


	// while 중첩 - 전체 출력
	// Ex) multiplicationTable
	while (dan<10)
	{
		num = 1;
		while (num <10)
		{
			printf("%d * %d = %d \n", dan, num, dan*num);
			num++;
		}
		dan++;
	}

	return 0;
}
