
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>


int zhishu(int num)
{
	if (num <= 0 ||num == 1)
	{
		return 0;
	}
	else  if (num == 2 || num == 3)
	{
		return 1;
	}
	else
	{
		int flag = 1;
		
		for (int i = 2; i < num; i++)
		{
			if (num % 2 == 0)
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
	int i = 0;
	while (i<300) {
		/*int num = 0;
		scanf("%d", &num);*/
		if (zhishu( i ) == 0)
		{
			printf("不是质数\n");
		}
		else
		{
			printf("是质数 %d\n",i);
		}
		i++;
	}


	system("pause");
}