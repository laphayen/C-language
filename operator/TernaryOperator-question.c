
#include <stdio.h>

// 1 - 절대값
void one()
{
	int input = 0;

	printf("입력: ");
	scanf("%d", &input);

	input = input < 0 ? -input : input;

	printf("%d \n", input);
}


// 2 - 대문자 변환
void two()
{
	char chr;

	printf("입력: ");
	scanf("%c", &chr);

	chr = (chr >= 'a' && chr <= 'z') ? chr - 32 : chr;

	printf("%c \n", chr);
}


void main()
{
	one();
	two();
}
