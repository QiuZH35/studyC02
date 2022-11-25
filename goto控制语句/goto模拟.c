
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>


void main22()
{
	//int i = 0;
	//for (;;)
	//{
	//	i++;
	//	if (i % 3 == 0)
	//	{
	//		printf("%d", i);
	//		break; //结束本次循环
	//	}
	//	//printf("%d ", i);
	//}

	int i = 100;
AAA:
	if (i <= 200)
	{
		i++;
		if (i % 3 == 0)
		{
			printf("%d", i);
			goto DDD;
		}
		
		goto AAA;
	}
	
DDD:
	system("pause");

}

void main33()
{
	//
	//for (int i=0;i<1000;i++)
	//{
	//	if (i % 3 != 0) 
	//	{
	//		printf("%d ", i);
	//		continue; //跳出本次循环，开始下一轮循环
	//	}
	//}

	int i = 0;
AAA:
	if (i < 1000)
	{
		if (i%3!= 0)
		{
			
			printf("%d ", i);
			i++;
			goto AAA; //等价于continue
		}
		else
		{  
			
			i++;
		}
		
		goto AAA;
	}

	system("pause");

}