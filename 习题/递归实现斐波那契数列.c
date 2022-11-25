
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>


int digui(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else if (num == 1)
	{
		return 1;
	}
	else
	{
		
		return digui(num - 1) + digui(num - 2);

	}



}





void main333()
{

	for (int i = 0; i <= 40; i++)
	{
		//printf("%d\n", digui(i));
		printf("%d\n", xunhuan(i));
	}
	

	system("pause");




}




int xunhuan(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else if (num == 1)
	{
		return 1;
	}
	else
	{
		int num1 = 1;
		int num2 = 1;
		int res=0 ;
		for (int i = 3; i <= num; i++)
		{
			res = num1 + num2;
			num1 = num2;
			num2 = res; //ÂÖÌæ 
		}
		return res;

	}


}