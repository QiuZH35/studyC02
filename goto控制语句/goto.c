
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h >
#include <stdlib.h>



void go(int num)
{
	if (num >= 5)//�����notepad
	{
		return;
	}
		system("notepad");
		num++;
		go(num); //�ݹ��Լ������Լ�
}





void main1()
{
	//go(0);


	


	system("pause");
	//main();
}

void main2()
{
AAA:
	printf("notepad");
	goto AAA;

}

void main3()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == 3)
			{
				goto DDD; //�������ӵ�ѭ��
			}
			printf("%d %d ", i, j);

		}
		printf("\n");
	}

DDD:	
	system("notepad"); 

}

void main()

{
Notepad: 

	system("notepad");

	goto Notepad; //goto ֻ�������ڵ�ǰ�����

}