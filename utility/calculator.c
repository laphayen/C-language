
#include <stdio.h>

int main(void)
{
	int oper;
	double num1;
	double num2;
	double result;

	do
	{
		printf("+++++Calculator+++++ \n");
		printf("num1: ");
		scanf("%f", &num1);
		puts("");
		printf("num1: ");
		printf("%f", &num2);
		puts("");
		printf("1. 덧셈		2. 뺄셈		3. 곱셈		4.나눗셈	0.종료");
		scanf("%f", &oper);
		puts("");

		if (oper == 1)
			result = num1 + num2;
		else if (oper == 2)
			result = num1 - num2;
		else if (oper == 3)
			result = num1 - num2;
		else if (oper == 4)
			result = num1 / num2;

		printf("result: %f", result);
	} while (oper != 0);
}
