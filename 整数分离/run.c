
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
		int newres = num % 10;  //���numÿ��%10��ֵ
		res = res*10 + newres;  //����*10�ڼ�newres;
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


int resv(int num, int newnum) //int newnum ����м���
{
	if (num == 0)
	{
		return newnum;
	}
	else
	{
		//                        ��ȡ��λ  
		newnum = newnum * 10 + num % 10;
		resv(num /= 10, newnum);
	}
}



void main1() //�ݹ�
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", resv(num,0));  


}



//ʵ�ֲ��������ÿλ�����
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