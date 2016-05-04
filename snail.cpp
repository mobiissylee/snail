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
	int i = 0, j = 0, value = 0, step=1, loop;

	printf("���� �Է� n*n :");
	scanf_s("%d", &num);
	num_n = num;

	for (i = 0; i < num_n; i++)
	{
		for (j = 0; j < num_n; j++)
			arr[i][j] = 0;
	}


	i = -1;  j = 0;
	while (num > 0)
	{
		i = i + step; // i ����
		loop = num;
		for (; loop > 0; loop--) {
			arr[i][j] = value++;
			j += step;
		}
		j--; // j ����
		num--;

		i++;
		loop = num;
		for (; loop > 0; loop--) {
			arr[i][j] = value++;
			i += step;
		}
		step *= -1;
		
		//------------------------------------------------------
		
		i--; // i ����
		j--; 
		loop = num;
		for (; loop > 0; loop--) {
			arr[i][j] = value++;
			j += step;
		}
		j++; // j ����
		num--;

		i--;
		loop = num;
		for (; loop > 0; loop--) {
			arr[i][j] = value++;
			i += step;
		}
		step *= -1;
		j++;
	}
	print_result();
	return 0;
}