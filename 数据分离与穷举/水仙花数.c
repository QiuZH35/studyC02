
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>





//求一千以内的水仙花数
void main()
{

	/*for (int i = 0; i < 1000; i++)
	{
		int a = i / 100;
		int b = i / 10 % 10;
		int c = i % 10;
	
		if (i == ((a*a*a) + (b*b*b) + (c*c*c)) && i>=100)
		{
		
			printf("\n%d+%d+%d=%d", a, b, c, i);
		}

	}*/
	

	//int i = 0;
	//while (i <= 999)
	//{
	//	int a = i / 100;
	//	int b = i / 10 % 10;
	//	int c = i % 10;

	//	if (i == ((a*a*a) + (b*b*b) + (c*c*c)) && i >= 100)
	//	{

	//		printf("\n%d+%d+%d=%d", a, b, c, i);
	//	}
	//	i++;
	//}


	//int i = 0;
	//do {
	//	int a = i / 100;
	//	int b = i / 10 % 10;
	//	int c = i % 10;

	//	if (i == ((a*a*a) + (b*b*b) + (c*c*c)) && i >= 100)
	//	{

	//		printf("\n%d+%d+%d=%d", a, b, c, i);
	//	}
	//	i++;

	//} while (i <= 999);


//	int i = 0;  //循环初始值
//AAA:
//	if (i <= 999) //循环判定条件
//	{
//		int a = i / 100;
//		int b = i / 10 % 10;
//		int c = i % 10;
//
//		if (i == ((a*a*a) + (b*b*b) + (c*c*c)) && i >= 100)
//		{
//
//			printf("\n%d+%d+%d=%d", a, b, c, i);
//		}
//		i++;   //循环变量区间自增
//		goto AAA;
//	}


	system("pause");
}