
#include <stdio.h>
#include <stdlib.h>




//判断一个数组是否是递增

//a[i]>a[i-1]  && a[i-1]>a[i-2]
int isit(int a[10], int i)
{
	if (i == 1)
	{
		return a;
	}
	else
	{
		return isit(a, i - 1) && a[i - 1] > a[i - 2];  //返回一个逻辑运算结果
	}


}


void main2()
{
	int  a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int flag = isit(a, 10);
	if (flag==1)
	{
		printf("递增");
	}
	else
	{
		printf("不是递增");
	}


	system("pause");
}




void main1()
{
	int  a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int flag = 1;

	for (int i = 0; i < 10; i++)
	{
		if (a [i] < a[i-1]) //判断i 与 i-1的区别
		{
			flag = 0;
		}

	}
	if (flag ==1)
	{
		printf("递增");
	}
	else
	{
		printf("不是递增");
	}





	system("pause");
}