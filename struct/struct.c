
#include <stdio.h>

// 구조체 - 1개 이상 변수를 묶어 새로운 자료형을 정의
struct val
{
	int x;
	int y;
};

void main()
{
	int plus;

	struct val x1, y1;

	printf("input: ");
	scanf("%d %d", &x1.x, &y1.y);

	plus = x1.x + y1.y;

	printf("%d \n", plus);
}
