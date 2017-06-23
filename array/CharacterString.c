
#include <stdio.h>

void main()
{
	// char배열을 이용해 문자열 입력
	int i;
	char name[32];

	printf("이  름: ");
	
	// 배열 &필요X
	scanf("%s", name);	

	// null문자 삽입(\0) - 특수문자(escape sequence) 자동 삽입
	printf("이  름: %s \n", name);

	char name[32] = "11618nathan";

	// 배열 크기
	printf("배열의 크기: \d", sizeof(name));

}
