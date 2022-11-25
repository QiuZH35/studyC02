
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

//学习别人优秀的代码，然后改写。，比如人家用while，我们用dowhile



//计算整数的个数

void mainwhile()
{
	int num = 0;
	scanf("%d", &num);

	int wei = 0;
	while (num)
	{
		wei++;
		num /= 10;

	}
	printf("%d", wei);

	system("pause");
}


void mainfor()
{
	int num = 0;
	scanf("%d", &num);
	int wei=0;
	for (; num; num /= 10)
	{
		wei++;
	}
	printf("%d", wei);

	system("pause");
}


void maindowhile()
{
	int num = 0;
	scanf("%d", &num);
	int wei = 0;

	if (num == 0)
	{
		;
	}
	else
	{
		do {
			wei++;
			num /= 10;
		} while (num);

	}
	printf("%d", wei);

}



void maingoto()
{
	int num = 0;
	scanf("%d", &num);
	int wei = 0;

AAA:
	if (num)
	{
		wei++;
		num /= 10;
		goto AAA;
	}
	printf("%d", wei);

	system("pause");
}


int digui(int num)
{
	if (num == 0)
	{
		return num;
	}
	else
	{
		return digui(num /= 10) + 1;
	}

}


void maindigui()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", digui(num));

	system("pause");

}