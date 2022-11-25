
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>



//打印出300以内的所有不能被三整除的数，并相加
void mainfor()
{
	int res = 0;
	for (int i = 1; i <= 300; i++)
	{
		/*if (i % 3 == 0)
		{
			continue;
		}
		else
		{
			res += i;
			printf("%d\n", i);
		}*/
		if (i % 3 != 0)
		{
			res += i;
			printf("%d\n", i);
		}


	}
	printf("%d", res);

	system("pause");
}

void maingoto()
{
	int res = 0;
	int num = 1;
AAA:
	if (num <= 300)
	{
		if (num % 3 != 0)
		{
			res+=num;
			printf("%d\n", num);
		}
		num++;
		goto AAA;
	}
	printf("res=%d", res);

}


int digui(int num)
{
	static int newdata = 0; //静态变量，在函数内延长该变量的生命周期
	if (num <= 300)
	{
		if (num % 3 != 0)
		{
			newdata += num;
			printf("%d\n", num);
			digui(num+=1);
			
		}
		else
		{

			digui(num+=1);
		}
		return newdata;
	}
}
void maindigui()
{
	//static int data = 0;
	//int newnum = 0;
	//scanf("%d", &newnum);
	

	printf("\n%d", digui(0));

	system("pause");
}






//用switch实现成绩评价 ，用scanf输入，60以下不及格， 70一般，80良好，90优秀，100完美
void mainif()
{
	int num = 0;
	scanf("%d", &num);
	if (num == 100)
	{
		printf("完美");
	}
	else if (num >= 90 && num < 100)
	{
		printf("优秀");
	}
	else if (num >= 80 && num < 90)
	{
		printf("良好");
	}
	else if (num >= 70 && num < 80)
	{
		printf("一般");
	}
	else if (num >= 60 && num < 70)
	{
		printf("刚过线，及格");
	}
	else if(num>=0 &&num <60)
	{
		printf("不及格");
	}
	else
	{
		printf("输入错误");
	}


}
void mainswitch()
{
	int num = 0;
	scanf("%d", &num);
	num /= 10;
	switch (num)
	{
	case 10:
		printf("完美");
		break;
	case 9:
		printf("优秀");
		break;
	case 8:
		printf("良好");
		break;
	case 7:
		printf("一般");
		break;
	case 6:
		printf("及格");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("不及格");
		break;
	default:
		printf("您输入错误");
		break;
	}



}





//计算0.99 ，0.98，1.01，1.02的365次方
void main1()
{
	double x1 = 0.98, x2 = 0.99, x3 = 1.01, x4 = 1.02;
	double y1 = 1, y2 = 1, y3 = 1, y4 = 1;
	for (int i = 0; i < 365; i++)
	{
		y1 *= x1;
		y2 *= x2;
		y3 *= x3;
		y4 *= x4;
	}
	printf("0.98^365=%f\n0.99^365=%f\n1.01^365=%f\n1.02^365=%f\n ", y1, y2, y3, y4);

}