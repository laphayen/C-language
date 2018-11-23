// 매크로 # 연산자로 string 치환

#include <stdio.h>
#define CONTACTS(A, B) #A "의 번호는 " #B

int main(void)
{
	printf("%s \n", CONTACTS(홍길동, 111-1111-1111));
	printf("%s \n", CONTACTS(홍길동, 222-2222-2222));
}