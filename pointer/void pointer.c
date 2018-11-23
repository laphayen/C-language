//void 포인터 - type X, 함수 주소 가능

#include <stdio.h>

void voidpointer(void)
{
	printf("void 포인터");
}

int main(void)
{
	int num = 7;
	void * ptr1;
	void * ptr2;

	ptr1 = &num;
	ptr2 = voidpointer;

	printf("%p \n", ptr1);
	printf("%p \n", ptr2);

}