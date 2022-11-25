
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>

//100元 ，5元一只公鸡，3元一只母鸡，一元三只小鸡
//100=5*i+3*j+(1/3)*k 


void main()
{
	for (int i = 0; i < 21; i++)//公鸡总数
	{
		for (int j = 0; j < 34; j++)//母鸡总数
		{

			if ((100 - i - j) == ((100 - 5 * i - 3 * j) * 3) && ((100 - i - j) % 3 == 0))
			{
				printf("%d+%d+%d=100\n",i,j,(100-i-j));


			}


		}



		}




	system("pause");
}