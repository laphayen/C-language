
#include <stdio.h>

int main()
{
	// 대입 연산자, 콤마 연산자
	int num1 = 7, num2 = 2; 
	int num3 = 3;
	int num4 = 6; 
	int num5 = +2;
	int num6 = -3; 
	int num7 = 10;
	int num8 = 12;
	int result0; 
	int num9 = 2;
	int num10 = 3;
	int result1, result2, result3; 
	int num11 = 4;
	int num12 = 5;
	int result4, result5, result6;

	// 부호 연산자
	num5 = -num5;
	printf("+ num5: %d \n", num5);
	num6 = -num6;
	printf("- num6: %d \n", num6); 

	// 증가, 감소 연산자
	printf("num7: %d \n", num7);
	printf("num7++: %d \n", num7++);
	printf("++num7: %d \n", ++num7);

	printf("num8: %d \n", num8);
	printf("++num8: %d \n", ++num8);
	printf("num8++: %d \n", num8++);

	printf("result0: %d \n", (num7--) + 2);

	// 관계 연산자(<, >, ==, !=, <=, >=)
	result1 = (num9 == num10);
	result2 = (num9 <= num10);
	result3 = (num9 >= num10);

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);

	// 논리 연산자(&&, ||, !)
	// 논리곱
	result4 = (num11 == 4 && num12 == 5);
	// 논리합
	result5 = (num11 < 5 || num12 > 5);
	// 논리부정
	result6 = (!num11);

	printf("result4: %d \n", result4);
	printf("result5: %d \n", result5);
	printf("result6: %d \n", result6);
	
	return 0;
}
