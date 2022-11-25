
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int isit(int num)   //判断质数
{

	if (num <= 1)
	{
		return 0;
	}
	else if (num == 2)
	{
		return 1;
	}
	else if (num == 3)
	{
		return 1;
	}
	else
	{
		int flag = 1;
		for (int i = 2; i < (int)(sqrt((int)num)) + 1; i++)  
		{
			if (num%i == 0)
			{
				flag = 0;
				break;
			}
		}

		return flag;
	}
}


void main()
{
	printf("%d", isit(16));

	//100到150之间的质数
	/*for (int i = 100; i <= 150; i++)
	{
		if (isit(i))
		{
			printf("\n%d", i);
		}
	}

	system("pause");*/
}




//相邻的偶数拆成连个质数相加
//4=2+2   8=3+5  10=5+5


void main2()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", num);

	for (int i = 2; i < num / 2; i++)
	{
		if (isit(i) && isit(num - i))
		{
			printf("\nnum=%d+%d", i, num - i);
		}
	}

}

//相邻的两个奇数拆解为三个质数相加
//7=2+2+3  9=3+3+3
//戈德巴尔猜想

void main3()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", num);

	for (int i = 2; i < num / 2; i++)
	{
		for (int j = 2; j < num / 2; j++)
		{
			if (isit(i) && isit(j)&&isit(num-i-j))
			{
				printf("\nnum=%d+%d+%d", i, j,num-i-j);
			}
		}
		
	}
}