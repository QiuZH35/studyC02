
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void main()
{
	char str[30] = { 0 };
	int i = 0;
	for (;;)
	{
		if (i > 10)
		{
			exit(0);//结束函数
		}
		sprintf(str, "title 程序启动%d秒", i);
		i++;
		system(str);
		printf("%s\n", str);
		Sleep(1000);
	}



	system("pause");
}
