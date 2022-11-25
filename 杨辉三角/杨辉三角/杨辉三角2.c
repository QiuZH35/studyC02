
#include <stdio.h>
#include <stdlib.h>

void main()
{
#define N 10
	int a[N][N] = { 0 };
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (j == 0 || i == j)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}


		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");

	}
	for (int i = 0; i < N; i++)
	{
		printf("%*d",30-i*2, a[i][0]);
		for (int j = 0; j <= i; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}



}