// ConsoleApplication4.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

	printf("���� �Է� n*n :");
	scanf_s("%d", &num);
	num_n = num;

	// Processing
	i = 0;  j = -1;
	while (num > 0)
	{
		//------------------------------------------------------
		// i ����
		loop = num;
		for (; loop > 0; loop--) {
			j += step;
			arr[i][j] = value++;
		}
		num--;
		//------------------------------------------------------
		// j ����
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