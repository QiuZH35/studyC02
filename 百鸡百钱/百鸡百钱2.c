
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>

//100Ԫ ��5Ԫһֻ������3Ԫһֻĸ����һԪ��ֻС��
//100=5*i+3*j+(1/3)*k 


void main()
{
	for (int i = 0; i < 21; i++)//��������
	{
		for (int j = 0; j < 34; j++)//ĸ������
		{

			if ((100 - i - j) == ((100 - 5 * i - 3 * j) * 3) && ((100 - i - j) % 3 == 0))
			{
				printf("%d+%d+%d=100\n",i,j,(100-i-j));


			}


		}



		}




	system("pause");
}