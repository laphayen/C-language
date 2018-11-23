// Àç±Í ÇÔ¼ö

#include <stdio.h>

void recursivefun(int num)
{
	if (num>10)
	{
		return;
	}
	printf("Àç±Í: %d \n", num);
	recursivefun(num + 1);
}

int main()
{
	recursivefun(1);
	return 0;
}