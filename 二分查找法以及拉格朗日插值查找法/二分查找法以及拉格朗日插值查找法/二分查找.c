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

	int flag = 0;//����û���ҵ�
	int ci = 0;
	if(num<=a[N-1])
	
	while(tou <= wei)
	{
		
		//zhong = (tou + wei) / 2;//���ֲ���
		//zhong = tou + (wei - tou) / 2; //���ߵȼۡ�
		//zhong=tou+0.5*wei-0.5*tou;


		//�������ղ�ֵ��
		zhong = tou + (wei - tou) * 1.0 * (num - a[tou]) / (a[wei] - a[tou]);
		//����num���ڵı���


		printf("\nѰ�Ҵ���%d ,tou%d ,wei%d ,zhong%d ", ++ci, a[tou],a[wei], a[zhong]);
		if (num == a[zhong])
		{
			flag = 1;
			printf("\n�ҵ���a[%d]==%d", a[zhong], num);
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
		printf("\nû�ҵ�");
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




//ð������
void main12()
{

	srand((unsigned int)time(NULL));//ʱ������
	
	int n;
	scanf("%d", &n);
	int a[1000]={0}; //�������鲢��ʼ��
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 1000 + 1;//һǧ���ڵ������
		printf("%d ", a[i]);
	}

	for (int i = 0; i < n - 1; i++) //ð������
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
	printf("\n�����\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}


	system("pause");

}



//��ϣ�㷨
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
		if (a[i] > 0)  //���� i �Ĵ�С������� 
		{
			printf("%d ", i);
		}
	}




}