
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
	printf("����+ ��- ��* ��/ ��%% ����һ��ʵ�ֹ���\n:> ");

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
	printf("����+ ��- ��* ��/ ��%% ����һ��ʵ�ֹ���\n:> ");

	char ch = getchar();
	int num1 = 0;
	int num2 = 0;
	int num = 0;
	scanf("%d%d", &num1, &num2);
	getchar();  //������뻺�����Ļس�
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
		printf("�������,����������\n");
		goto AAA;
		break;
	}

	system("pause");

}