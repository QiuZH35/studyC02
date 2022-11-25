
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>

//求斐波那契数前40位   ，与台阶问题基本相同，两者不同于开始的基数

void main()  //循环
{
	int flag1 = 1;
	int flag2 = 1;  //台阶问题基数从2开始
	int fl = 0;
	//printf("%d\n%d", flag1, flag2);
	//for (int i = 3; i <= 40; i++)//从第四个数开始
	//{
	//	fl = flag1 + flag2;  //第三个数的和
	//	printf("\n%d", fl);
	//	flag1 = flag2;   //轮替
	//	flag2 = fl;
	//}


	//int i = 3;
	//while (i <= 40)
	//{
	//	fl = flag1 + flag2;  //第三个数的和
	//	printf("\n%d", fl);
	//	flag1 = flag2;   //轮替
	//	flag2 = fl;
	//	i++;
	//}


	//int i = 3;
	//do {
	//	fl = flag1 + flag2;  //第三个数的和
	//	printf("\n%d", fl);
	//	flag1 = flag2;   //轮替
	//	flag2 = fl;
	//	i++;
	//} while (i <= 40);


//	int i = 3;
//AAA:
//	if (i <= 40)
//	{
//		fl = flag1 + flag2;  //第三个数的和
//		printf("\n%d", fl);
//		flag1 = flag2;   //轮替
//		flag2 = fl;
//		i++;
//		goto AAA;
//	}

}



int data(int num)
{
	if (num == 1)
	{
		return 1;
	}
	else if (num == 0)
	{
		return 0;
	}
	
	return  data(num - 1) + data(num - 2);
}

void main2()
{
	for (int i = 0; i < 41; i++)
	{
		printf("%d\n", data(i));  //递归实现，缺点速度慢
	}


}