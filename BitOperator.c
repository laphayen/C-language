#include <stdio.h>

void main()
{
	int num1 = 10;	// 00000000 00000000 00000000 00001010
	int num2 = 15;	// 00000000 00000000 00000000 00001111
	int result1, result2, result3, result4, result5, result6;

	// &연산자: AND - 1&1->1
	result1 = num1 & num2; 
	printf("result1: %d \n", result1); 
	
	// |연산자: OR - 1|1, 1|0, 0|1 -> 1
	result2 = num1 | num2;
	printf("result2: %d \n", result2);

	// ^연산자: XOR - 0^1, 1^0 -> 1
	result3 = num1 ^ num2;
	printf("result3: %d \n", result3);

	// ~연산자: NOT
	result4 = ~num1;
	printf("result4: %d \n", result4);

	// <<연산자: 왼쪽 이동
	result5 = num1 << 1;
	printf("result5: %d \n", result5);

	// >>연산자: 오른쪽 이동
	result6 = num2 >> 2;
	printf("result6: %d \n", result6);
}