
#include <stdio.h>

void main()
{
	// char배열을 이용해 문자열 입력
	int i;
	char name[32];

	printf("이  름: ");
	
	// 배열 & 필요 없음
	scanf("%s", name);	

	printf("이  름: %s \n", name);
}
