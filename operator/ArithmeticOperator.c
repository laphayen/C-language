/**/
#include <stdio.h>

int main()
{
	// 산술 연산자

	int num1 = 16;
	int num2 = 18;

	// 단항 연산자	
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
	printf("%d / %d = %d \n", num1, num2, num1 / num2);
	printf("%d % %d = %d \n", num1, num2, num1 % num2);

	// 복합 연산자
	num1 += 3;
	printf("num1 += 2 = &d \n", num1);
	num2 -= 4;
	printf("num2 -= 4 = &d \n", num2);
	num1 *= 2;
	printf("num1 *= 2 = &d \n", num1);
	num2 /= 3;
	printf("num2 /= 3 = &d \n", num2);
	num1 %= 2;
	printf("num1 %= 2 = &d \n", num1);
}
