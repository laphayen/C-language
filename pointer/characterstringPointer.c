
#include <stdio.h>

#include <string.h>

int main()
{
	static char * str[] = { "11618", "nathan" };
	char **s, i;
	s = str;
	for ( i = 0; i < 5; i++)
	{
		printf("%p %p %s \n", &*s, *s, *s);
	}
}
