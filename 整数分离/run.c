
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>

//1234567    %10     7*10 +6 
//1234567    /10%10   6   76*10+5
//1234567    /10/10%10  5  



void  mainfor()
{
	int num = 0;
	scanf("%d", &num);
	int res = 0;
	for (; num; num /= 10)
	{
		int newres = num % 10;  //存放num每次%10的值
		res = res*10 + newres;  //依次*10在加newres;
	}
	printf("%d", res);

}

void mainwhile()
{
	int num = 0;
	scanf("%d", &num);
	int res = 0;
	while (num)
	{
		int newres = num % 10;
		res = res * 10 + newres;


		num /= 10;
	}
	printf("%d", res);




}

void maindowhile()
{
	int num = 0;
	scanf("%d", &num);
	int res = 0;
	
	if (num != 0)
	{
		do {
			int newres = num % 10;
			res = res * 10 + newres;
			num /= 10;
		} while (num);

	}
	printf("%d", res);


}

void maingoto()
{
	int num = 0;
	scanf("%d", &num);
	int res = 0;
AAA:
	if (num)
	{
		int newres = num % 10;
		res = res * 10 + newres;
		num /= 10;
		goto AAA;
	}


	printf("%d", res);
}


int resv(int num, int newnum) //int newnum 存放中间结果
{
	if (num == 0)
	{
		return newnum;
	}
	else
	{
		//                        获取个位  
		newnum = newnum * 10 + num % 10;
		resv(num /= 10, newnum);
	}
}



void main1() //递归
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", resv(num,0));  


}



//实现拆解整数且每位数相加
//123456  %10  6 
//123456  /10%10 5  6+5

void main3()
{
	int num;
	scanf("%d", &num);
	int res = 0;
	for (; num;num/=10)
	{
		int newres = num % 10;
		res += newres;
	}
	printf("%d", res);



}