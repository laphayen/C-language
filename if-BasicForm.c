#include <stdio.h>

void main()
{
	char ch = 'A';
	int num = 11618; 

	// if - else
	// if - 식 
	if (ch == 'A')
		printf("대문자: A \n");
	else
		printf("대문자 A가 아닙니다. \n");


	// if - else if - else
	// if - 식
	if (num == 11618)
		printf("num은 11618입니다. \n");
	// if가 아닐 경우 실행
	else if (num > 11618)
		printf("num은 11618보다 큽니다. \n");
	// if와 else가 아닐 경우 실행
	else
		printf("num은 11618이 아닙니다. \n"); 
}
