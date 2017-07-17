
#include <stdio.h>

int plus(void)
{
	int num = 10;
	num++;
	printf("SimpleFunOne num: %d \n", num);
	return 0;
}

int minus(void)
{
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;
	printf("num1 & num2: %d %d \n", num1, num2);
	return 0;
}

int main(void)
{
	int num = 17;
	plus();
	minus();
	printf("main num: %d \n", num);
	return 0;
}
