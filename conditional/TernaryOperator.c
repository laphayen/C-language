
#include <stdio.h>

void main()
{
	// ? :
	// 삼항연산자(Ternary operator) - 피연산자의 수: 3
	// 절대값 반환
	int input;
	int abs;

	printf("정수 입력: ");
	scanf("%d", &input);

	abs = input > 0 ? input : input*(-1);
	printf("절대값: %d \n", abs);

}