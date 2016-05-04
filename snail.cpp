// ConsoleApplication4.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

int arr[100][100];
int num, num_n;

void print_result()
{
	int i, j;

	for (i = 0; i < num_n; i++)
	{
		for (j = 0; j < num_n; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}
	printf("\n\n");
}

int main(void)
{
	int i = 0, j = 0, value = 0, loop, step = 1;

	printf("숫자 입력 n*n :");
	scanf_s("%d", &num);
	num_n = num;

	// Processing
	i = 0;  j = -1;
	while (num > 0)
	{
		//------------------------------------------------------
		// i 고정
		loop = num;
		for (; loop > 0; loop--) {
			j += step;
			arr[i][j] = value++;
		}
		num--;
		//------------------------------------------------------
		// j 고정
		loop = num;
		for (; loop > 0; loop--) {
			i += step;
			arr[i][j] = value++;
		}
		
		step *= -1;
	}
	print_result();
	return 0;
}