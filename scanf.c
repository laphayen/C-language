
#include <stdio.h>

void main()
{
	int num;

	printf("정수를 입력하세요: ");

	// 변수의 주소 값을 scanf 함수에 전달
	scanf("%d", &num);

	printf("입력한 정수는 %d 입니다. \n", num);
}