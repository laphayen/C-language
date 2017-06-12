
#include <stdio.h>

int main()
{
	// 관계 연산자(<, <=, ==, >, >=, !=)
	int num1 = 16;
	int num2 = 18;
	int result1, result2, result3, result4, result5, result6;

	result1 = (num1 < num2);	// ~보다 작다
	result2 = (num1 <= num2);	// ~보다 작거나 같다
	result3 = (num1 == num2);	// 같다
	result4 = (num1 > num2);	// ~보다 크다
	result5 = (num1 >= num2);	// ~보다 크거나 같다
	result6 = (num1 != num2);	// 같지 않다

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
}
