
#include <stdio.h>

#include <stdlib.h>

#include <time.h>

void main()
{
	int lottery[6];
	 
	int x, y;

	for ( x = 0; x < 6; x++)
	{
		rand() % 45 + 1;
	}

	for ( y = 0; y < 6; y++)
	{
		printf("%d ", lottery[y]);
	}
	puts("");
}