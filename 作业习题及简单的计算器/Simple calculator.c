
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
	return a + b;
}
int  jian(int a, int b)
{
	return a - b;
}
int cheng(int a, int b)
{
	return a * b;
}
int chu(int a, int b)
{
	return a / b;
}
int mo(int a, int b)
{
	return a % b;
}

void mainifelse()
{
	printf("_______________________________________\n");
	printf("输入+ 、- 、* 、/ 、%% 任意一个实现功能\n:> ");

	char ch = getchar();
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1,&num2);
	
	if (ch == '+')
	{
		printf("%d+%d=%d",num1,num2,sum(num1, num2));
	}
	if (ch == '-')
	{
		printf("%d-%d=%d", num1, num2, jian(num1, num2));
	}
	if (ch == '*')
	{
		printf("%d*%d=%d", num1, num2, cheng(num1, num2));
	}
	
	if (ch == '/')
	{
		printf("%d/%d=%d", num1, num2, chu(num1, num2));
	}
	if (ch == '%')
	{
		printf("%d%%%d=%d", num1, num2, mo(num1, num2));
	}
	
	system("pause");
}



void main()
{
AAA:
	
	printf("_______________________________________\n");
	printf("输入+ 、- 、* 、/ 、%% 任意一个实现功能\n:> ");

	char ch = getchar();
	int num1 = 0;
	int num2 = 0;
	int num = 0;
	scanf("%d%d", &num1, &num2);
	getchar();  //清除输入缓冲区的回车
	switch (ch)
	{
	case '+':
		printf("%d+%d=%d", num1, num2, sum(num1, num2));
		break;
	case '-':
		printf("%d-%d=%d", num1, num2, jian(num1, num2));
		break;
	case '*':
		printf("%d*%d=%d", num1, num2, cheng(num1, num2));
		break;
	case '/':
		printf("%d/%d=%d", num1, num2, chu(num1, num2));
		break;
	case '%':
		printf("%d%%%d=%d", num1, num2, mo(num1, num2));
		break;
	default :
		printf("输入错误,请重新输入\n");
		goto AAA;
		break;
	}

	system("pause");

}