// sizeof() - 자료형의 크기 확인
// 연산자O, 함수X

#include <stdio.h>

void main()
{
	int num = 11618;
	
	char ch[] = "11618nathan";

	printf("%d \n", sizeof(num));

	printf("%d \n", sizeof(ch)/sizeof(char) );

}
