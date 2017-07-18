
#include <stdio.h>

// 1 - µî¼ö
void one()
{
	int i;
	int j;
	int rank;

	int student[5] = { 11,16, 18, 92, 72 };

	for (i = 0; i < 5; i++)
	{
		rank = 0;
		for (j = 0; j < 10; j++)
		{
			if (student[i] <= student[j])
			{
				rank++;
			}
		}
		printf("%d: %d \n", student[i], rank);
	}
}


void main()
{
	one();
}
