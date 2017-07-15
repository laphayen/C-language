
#include <stdio.h>

// 1 - 대문자 전환
void one()
{
	char input;
	
	printf("input: ");
	scanf("%c", &input);

	if (input >= 'a' && input <= 'z')
		input -= 32;

	printf("%c \n", input);
}


void main()
{
	one();
}