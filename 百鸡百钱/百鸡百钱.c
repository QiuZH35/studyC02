
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>


//100Ԫ ��5Ԫһֻ������3Ԫһֻĸ����1Ԫ��ֻС�� 0.3333
//100=5*i+3*j+(1/3*k)
//100=i-j-k    k=100-i-j     k= (100-5*i-3*j)*3


void main1()
{
	for (int i = 0; i < 21; i++)//�������п���
	{
		for (int j = 0; j < 34; j++)
		{
			if (((100 - i - j)==((100 - 5 * i - 3 * j) * 3)) && ((100 - i - j)%3==0))
			{
				printf("\n%d+%d+%d=100", i, j, (100 - i - j));
			}

		}
	}
	system("pause");

}