
#include "define.h"



void show(int a[N][N])
{
	printf("\n     ----------------------\n\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	


}