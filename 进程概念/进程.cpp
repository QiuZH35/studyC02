
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <process.h>//����ͷ�ļ�
#include <time.h>

void run(void* P)   //void*p ������ָ��
{
	MessageBoxA(0, "������ڰٶȵ���", "�ٶȻ�ӭ��",0);

}

void main1()
{
	for (int i = 0; i < 5; i++)
	{
		_beginthread(run, 0, NULL); //�����߳�
	}
	system("pause");
}



void go()
{
	int num1 = rand() % 16;
	int num2 = rand() % 16;
	char str[20];
	sprintf(str, "color %x%x", num1, num2);
	system(str);
	Sleep(1000);
	go(); //�ݹ飬ʵ����ѭ��


}
void colorall(void *p)
{
	char str[20];
	char name[20];
	
	
	time_t ts;
	srand  ((unsigned int)time(&ts));
	go();
}

void thread(void * p)
{
	char str[20];

	char name[20];
	
	int i = 0;
	while (1)
	{
		sprintf(str, "title ��������%d��", i);
		system(str);
		i++;
		Sleep(1000);
	}
		

}

void main()
{

	_beginthread(thread,0,NULL);
	_beginthread(colorall, 1, NULL);
	//thread();
	system("pause");
}