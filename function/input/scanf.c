
#include <stdio.h>

void main()
{
	int num;
	int arr[5];
	int i;

	printf("정수를 입력하세요: ");

	// 변수의 주소 값을 scanf 함수에 전달
	scanf("%d", &num);

	printf("입력한 정수는 %d 입니다. \n", num);

	for (i = 0; i < 5; i++)
	{
		scanf("%d", arr);
	}

	for ( i = 0; i < 5; i++)
	{
		printf("arr[%d] \n", *arr[i]);
	}
}
