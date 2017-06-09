
#include <stdio.h>

void main()
{
	int num;
	printf("양수 입력: ");

	scanf("%d", &num);

	if (num == 1)
		goto num1;
	else if (num == 2)
		goto num2;
	else
		goto remainder;

num1:
	printf("1 입력 \n");
	goto end;

num2:
	printf("2 입력 \n");
	goto end;

remainder:
	printf("나머지 입력 \n");
	goto end;

end:
	return 0;
}
