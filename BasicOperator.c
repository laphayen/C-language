
#include <stdio.h>

int main(void)
{
	//   기본 연산자
  	int num1 = 7, num2 = 2;
	// 덧셈
	printf("%d+%d=%d \n", num1, num2, num1 + num2);
	// 뺄셈
	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	// 곱셈
	printf("%d*%d=%d \n", num1, num2, num1 * num2);
	// 나눗셈
	printf("%d/%dÀÇ ¸ò=%d \n", num1, num2, num1 / num2);
	// 나머지
	printf("%d/%dÀÇ ³ª¸ÓÁö =%d \n", num1, num2, num1 % num2);
	return 0;
	
	// 복합 연산자
	int num3 = 3;
	int num4 = 6;
	
	num1 += 3;
	printf("num1: %d \n", num1);
	num2 -= 4;
	printf("num2: %d \n", num2);
	num1 *= 2;
	printf("num1: %d \n", num1);
	num2 /= 3;
	printf("num2: %d \n", num2);
	num1 %= 2;
	printf("num1: %d \n", num1);
	
	// 부호 연산자
 	int num5 = +2;
	int num6 = -3;
	
	num5 = -num5;
	printf("num5: %d \n", num5);
	num6 = -num6;
	printf("num6: %d \n", num6);
	return 0;
}
