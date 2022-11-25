
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int a[10][10] = {{1,0,2,0,0,2,0,0,0,0},
				 {0,0,2,0,0,2,0,0,0,0},
				 {2,0,2,0,0,2,0,0,0,0},
				 {0,0,2,0,2,0,2,2,2,2},
				 {0,0,0,2,0,2,0,0,0,0}, 
				 {0,0,0,2,0,2,0,2,0,2}, 
				 {0,0,0,0,0,0,0,2,0,0}, 
				 {0,2,0,2,0,2,0,2,2,0}, 
				 {0,0,2,2,2,2,0,2,2,0}, 
				 {0,0,0,2,0,0,2,0,2,0} };

int b[10][10] = {
		{ 1, 0, 2, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 2, 2, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 2, 0, 0, 0, 0, 0 },
		{ 2, 2, 2, 0, 0, 2, 0, 0, 0, 0 },
		{ 0, 0, 2, 0, 0, 2, 2, 0, 2, 2 },
		{ 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 2, 0, 0, 0, 2, 0, 2 },
		{ 0, 0, 0, 0, 2, 0, 0, 2, 0, 0 },
		{ 0, 0, 0, 0, 0, 2, 0, 2, 2, 0 },
		{ 0, 0, 0, 0, 0, 0, 2, 2, 2, 0 }
};



int iplayer = 0;
int jplayer = 0;

void show(int a[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
}


//控制
void run(char ch)
{
	if (iplayer == 9 && jplayer == 9)
	{
		printf("恭喜你小伙子过关了\n");
		return;
	}

	switch (ch)
	{
	case 'w':
		if (iplayer - 1 >= 0 && a[iplayer - 1][jplayer] < 2)
		{
			int temp = a[iplayer - 1][jplayer];
			a[iplayer - 1][jplayer] = a[iplayer][jplayer];
			a[iplayer][jplayer] = temp;
			iplayer -= 1;
		}
		break;
	case 's':
		if (iplayer + 1 <= 9 && a[iplayer + 1][jplayer] < 2)
		{
			int temp = a[iplayer + 1][jplayer];
			a[iplayer + 1][jplayer] = a[iplayer][jplayer];
			a[iplayer][jplayer] = temp;
			iplayer += 1;
		}
		break;
	case 'a':
		if (jplayer - 1 >= 0 && a[iplayer][jplayer - 1] < 2)
		{
			int temp = a[iplayer][jplayer - 1];
			a[iplayer][jplayer - 1] = a[iplayer][jplayer];
			a[iplayer][jplayer] = temp;
			jplayer -= 1;
		}
		break;
	case 'd':
		if (jplayer + 1 <= 9 && a[iplayer][jplayer + 1] < 2)
		{
			int temp = a[iplayer][jplayer + 1];
			a[iplayer][jplayer + 1] = a[iplayer][jplayer];
			a[iplayer][jplayer] = temp;
			jplayer += 1;
		}
		break;
	default :
		break;
	}
	//show(a);
	
}



int flag = 0;
int ci = 0;
int AIout(int a[10][10], int i, int j)
{
	a[i][j] = 3;//走过的路
	
	printf(" \n i=%d , j=%d \n",i,j);
	Sleep(500);
	show(a);
	
	if (i == 9 && j == 9)
	{
		flag = 1;
		printf("恭喜你小伙子过关了\n");
		
	}
	else
	{
		// 右 下 左 上
		if (j + 1 <= 9 && a[i][j + 1] < 2 && flag != 1)
		{
			AIout(a, i, j + 1);
		}
		if (i + 1 <= 9 && a[i + 1][j] < 2 && flag != 1)
		{
			AIout(a, i + 1, j);
		}
		if (j - 1 >= 0 && a[i][j - 1] < 2 && flag != 1)
		{
			AIout(a, i, j - 1);
		}
		if (i - 1>=0 && a[i-1][j] < 2 && flag !=1)
		{
			AIout(a, i - 1, j);
		}
		
		if (flag != 1)
		{
			a[i][j] = 0;
		}
	}
	return flag;
}


/*int  AIout(int a[10][10], int i, int  j)
{

	a[i][j] = 3;//走过的路
	printf("\ni=%d,j=%d\n", i, j);
	show(a);

	Sleep(1000);
	if (i == 9 && j == 9)
	{
		printf("小伙子恭喜走出来了");
		flag = 1;
		//return  flag;
	}
	else
	{
		//右，下，左，上
		if (j + 1 <= 9 && a[i][j + 1] < 2 && flag != 1)
		{

			AIout(a, i, j + 1);
		}
		if (i + 1 <= 9 && a[i + 1][j] < 2 && flag != 1)
		{

			AIout(a, i + 1, j);
		}
		if (j - 1 >= 0 && a[i][j - 1] < 2 && flag != 1)
		{

			AIout(a, i, j - 1);
		}
		if (i - 1 >= 0 && a[i - 1][j] < 2 && flag != 1)
		{

			AIout(a, i - 1, j);
		}
		if (flag != 1)
		{
			a[i][j] = 0;
		}

	}


	return  flag;


}*/


//AI 控制
void AIrun()
{
	while (iplayer != 9 && jplayer != 9)
	{
		//上下左右
		if (iplayer -1 >=0 && a[iplayer-1][jplayer]==3)
		{
			a[iplayer - 1][jplayer] = 0;
			run('w');

		}
		if (iplayer + 1 <= 9 && a[iplayer + 1][jplayer] == 3)
		{
			a[iplayer + 1][jplayer] = 0;
			run('s');

		}
		if (jplayer - 1 >= 0 && a[iplayer][jplayer-1] == 3)
		{
			a[iplayer][jplayer-1] = 0;
			run('a');

		}
		if (jplayer + 1 <= 9 && a[iplayer][jplayer+1] == 3)
		{
			a[iplayer ][jplayer+1] = 0;
			run('d');

		}


	}



 }





void main()
{
	//show(a);

	AIout(a, iplayer, jplayer);
	AIrun();
	
	
	//while (1)
	//{
	//	char ch = getchar();
	//	getchar();//消除回车
	//	run(ch);
	//}






}