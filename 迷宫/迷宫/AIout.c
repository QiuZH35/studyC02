
#include "AI.h"


int AIout(int AIdata[N][N], int i,int j)
{
	AIdata[i][j] = 3; //标识走过的路

	if (i == N - 1 && j == N - 1)
	{
		canout = 1; //设置为一表示可以走出 
		printf("恭喜你走出来了\n");
	}
	else
	{
		//上下左右
		if (i - 1 >= 0 && AIdata[i - 1][j] < 2&& canout != 1)
		{
			AIout(AIdata, i - 1, j);
		}
		if (i + 1 <= 9 && AIdata[i + 1][j] < 2&& canout != 1)
		{
			AIout(AIdata, i + 1, j);
		}
		if (j - 1 >= 0 && AIdata[i ][j-1] < 2&& canout != 1)
		{
			AIout(AIdata, i, j-1);
		}
		if (j + 1 <= 9 && AIdata[i][j+1] < 2&& canout != 1)
		{
			AIout(AIdata, i , j+1);
		}
		if (canout != 1)
		{
			AIdata[i][j] = 0;//走不通就设置为0
		}

	}
	return canout;



}


void AImove()
{
	AIdata[0][0] = 1;

	while (ipos != N - 1 && jpos != N - 1)
	{
		//上下左右
		if (ipos - 1 >= 0 && AIdata[ipos - 1][jpos] == 3)
		{
			AIdata[ipos - 1][jpos] = 0;
			control('w');
		}
		if (ipos + 1 <= 9 && AIdata[ipos + 1][jpos] == 3)
		{
			AIdata[ipos + 1][jpos] = 0;
			control('s');
		}
		if (jpos - 1 >= 0 && AIdata[ipos][jpos - 1] == 3)
		{
			AIdata[ipos][jpos - 1] = 0;
			control('a');
		}
		if (jpos + 1 <= 9 && AIdata[ipos][jpos + 1] == 3)
		{
			AIdata[ipos][jpos + 1] = 0;
			control('d');
		}

	
	}



}