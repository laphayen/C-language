
#include <stdio.h>

void main()
{
	// 2차원 배열 선언
	int Array[2][2] = {{1,6}, {1, 8}};

	// 2차원 배열 출력
	int row;
	int col;
	
	// 행
	for (row = 0; row < 2; row++)
	{
		// 열
		for (col = 0; col < 2; col++)
		{
			printf("Array[%d][%d] = [%d]", row, col, Array[row][col]);
		}
		puts("");
	}
}
