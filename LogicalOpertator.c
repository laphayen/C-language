
#include <stdio.h>

int main()
{
	int num1 = 11618;
	int num2 = 1;
	int result1, result2, result3;

	// 논리 연산자(&&, ||, !)
	// 논리곱
	result1 = (num1 == 11618 && num2 == 11);
	// 논리합
	result2 = (num1 < 11618 || num2 > 1);
	// 논리부정
	result3 = (!num1);

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);

	return 0;
}