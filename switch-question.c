
#include <stdio.h>

// 1 - È¦Â¦
void one()
{
	int input;

	printf("ÀÔ·Â: ");
	scanf("%d", &input);

	switch (input%2)
	{
	case 0:
		printf("Â¦¼ö \n");
	case 1:
		printf("È¦¼ö \n");
	}
}


void main()
{
	one();
}
