
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
	//		break; //��������ѭ��
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
	//		continue; //��������ѭ������ʼ��һ��ѭ��
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
			goto AAA; //�ȼ���continue
		}
		else
		{  
			
			i++;
		}
		
		goto AAA;
	}

	system("pause");

}