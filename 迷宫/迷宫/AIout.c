
#include "AI.h"


int AIout(int AIdata[N][N], int i,int j)
{
	AIdata[i][j] = 3; //��ʶ�߹���·

	if (i == N - 1 && j == N - 1)
	{
		canout = 1; //����Ϊһ��ʾ�����߳� 
		printf("��ϲ���߳�����\n");
	}
	else
	{
		//��������
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
			AIdata[i][j] = 0;//�߲�ͨ������Ϊ0
		}

	}
	return canout;



}


void AImove()
{
	AIdata[0][0] = 1;

	while (ipos != N - 1 && jpos != N - 1)
	{
		//��������
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