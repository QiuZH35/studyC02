
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>



//��ӡ��300���ڵ����в��ܱ������������������
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
	static int newdata = 0; //��̬�������ں������ӳ��ñ�������������
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






//��switchʵ�ֳɼ����� ����scanf���룬60���²����� 70һ�㣬80���ã�90���㣬100����
void mainif()
{
	int num = 0;
	scanf("%d", &num);
	if (num == 100)
	{
		printf("����");
	}
	else if (num >= 90 && num < 100)
	{
		printf("����");
	}
	else if (num >= 80 && num < 90)
	{
		printf("����");
	}
	else if (num >= 70 && num < 80)
	{
		printf("һ��");
	}
	else if (num >= 60 && num < 70)
	{
		printf("�չ��ߣ�����");
	}
	else if(num>=0 &&num <60)
	{
		printf("������");
	}
	else
	{
		printf("�������");
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
		printf("����");
		break;
	case 9:
		printf("����");
		break;
	case 8:
		printf("����");
		break;
	case 7:
		printf("һ��");
		break;
	case 6:
		printf("����");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("������");
		break;
	default:
		printf("���������");
		break;
	}



}





//����0.99 ��0.98��1.01��1.02��365�η�
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