// ÆÄÀÏ ÀÐ±â

#include <stdio.h>

int main()
{
	int i;
	char tep[30];

	FILE *inp;

	if ((inp = fopen("text.txt", "r")) == NULL)
	{
		printf("false");
	}
	
	while (fgets(tep, 255, inp) != NULL)
	{
		printf("%s", tep);
	}
	fclose(inp);
}
