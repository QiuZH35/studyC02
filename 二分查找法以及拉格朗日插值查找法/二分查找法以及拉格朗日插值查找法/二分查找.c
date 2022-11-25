#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1024

void search(int a[N], int num)
{
	int tou = 0;
	int wei = a[N-1];
	int zhong;

	int flag = 0;//假设没有找到
	int ci = 0;
	if(num<=a[N-1])
	
	while(tou <= wei)
	{
		
		//zhong = (tou + wei) / 2;//二分查找
		//zhong = tou + (wei - tou) / 2; //两者等价。
		//zhong=tou+0.5*wei-0.5*tou;


		//拉格朗日插值法
		zhong = tou + (wei - tou) * 1.0 * (num - a[tou]) / (a[wei] - a[tou]);
		//计算num所在的比例


		printf("\n寻找次数%d ,tou%d ,wei%d ,zhong%d ", ++ci, a[tou],a[wei], a[zhong]);
		if (num == a[zhong])
		{
			flag = 1;
			printf("\n找到，a[%d]==%d", a[zhong], num);
			break;
		}
		else if (num > a[zhong])
		{
			tou = zhong + 1;
		}
		else if(num<a[zhong])
		{
			wei = zhong - 1;
		}





	}

	if (flag==0)
	{
		printf("\n没找到");
	}


}


void main()
{
	//srand((unsigned int)time(NULL));
	int a[N];
	for (int i = 0; i < N; i++)
	{
		a[i] = i;
		printf(" %d ", a[i]);
	}

	int num;
	scanf("%d", &num);

	search(a,num);


	system("pause");
}




//冒泡排序
void main12()
{

	srand((unsigned int)time(NULL));//时间种子
	
	int n;
	scanf("%d", &n);
	int a[1000]={0}; //定义数组并初始化
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 1000 + 1;//一千以内的随机数
		printf("%d ", a[i]);
	}

	for (int i = 0; i < n - 1; i++) //冒泡排序
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}

	}
	printf("\n排序后\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}


	system("pause");

}



//哈希算法
void main3()
{
	srand((unsigned int)time(NULL));
	int a[1000] = { 0 };
	int n;
	int k;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		k = rand() % 1000 + 1;
		printf("%d ", k);
		a[k]++;
	}
	printf("\n");
	for (int i = 0; i < 1001; i++)  
	{
		if (a[i] > 0)  //根据 i 的大小排序输出 
		{
			printf("%d ", i);
		}
	}




}