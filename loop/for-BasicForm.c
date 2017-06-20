
#include <stdio.h>

void main()
{
	// 초기식 - 1번 실행
	int num = 0;
	int sum = 0;
	int i;
	int dan = 0;

	// 반복문 
	for ( num = 0; num < 3; num++)	// 조건식 - 반복 결정, 증감식 - 마지막 연산
	{
		printf("num: %d \n", num);
	}
	puts("");


	// Ex) ~까지 합계
	printf("num까지의 합계 \n");
	printf("num: ");
	scanf("%d", &num);

	// 중괄호 생략 가능 - 1줄 실행
	for (i = 0; i < num+1; i++)
		sum += i;

	printf("%d 까지의 합계: %d", num, sum);

	// for 무한 루프 - 조건식X
	// 무한 루프 - Ctrl + C
	for (; ; )
	{
		printf("무한 루프 반복 \n");
	} 

	// for 중첩
	for ( dan = 2; dan < 10; dan++)
	{
		for ( num = 0; num < 10; num++)
		{
			printf("%d * %d = %d \n", dan, num, dan*num);
		}
	}
	return 0;
}
