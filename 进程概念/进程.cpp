
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <process.h>//进程头文件
#include <time.h>

void run(void* P)   //void*p 无类型指针
{
	MessageBoxA(0, "李彦宏在百度等你", "百度欢迎你",0);

}

void main1()
{
	for (int i = 0; i < 5; i++)
	{
		_beginthread(run, 0, NULL); //调用线程
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
	go(); //递归，实现死循环


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
		sprintf(str, "title 程序启动%d秒", i);
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