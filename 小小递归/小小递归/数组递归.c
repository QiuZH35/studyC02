
#include <stdio.h>
#include <stdlib.h>




//�ж�һ�������Ƿ��ǵ���

//a[i]>a[i-1]  && a[i-1]>a[i-2]
int isit(int a[10], int i)
{
	if (i == 1)
	{
		return a;
	}
	else
	{
		return isit(a, i - 1) && a[i - 1] > a[i - 2];  //����һ���߼�������
	}


}


void main2()
{
	int  a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int flag = isit(a, 10);
	if (flag==1)
	{
		printf("����");
	}
	else
	{
		printf("���ǵ���");
	}


	system("pause");
}




void main1()
{
	int  a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int flag = 1;

	for (int i = 0; i < 10; i++)
	{
		if (a [i] < a[i-1]) //�ж�i �� i-1������
		{
			flag = 0;
		}

	}
	if (flag ==1)
	{
		printf("����");
	}
	else
	{
		printf("���ǵ���");
	}





	system("pause");
}