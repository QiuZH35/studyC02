
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void openBandizip()
{
	ShellExecuteA(0, "open", "D:\\腾讯管家\\bandzip\\Bandizip.exe", 0, 0, 1);


}
void closeBandizip()
{
	system("taskkill /f /im Bandizip.exe");
}

void movewindows()
{
	HWND win = FindWindowA("BandizipClass", "Bandizip (Standard)");
	if (win == NULL)
	{
		system("echo Bandizip在玩失踪");
	}
	else
	{
		while (1)
		{

		time_t ts;
		srand((unsigned int)time(&ts));//初始化随机数
		int data = rand() % 4;//0 1 2 3
		

		POINT xy;  //鼠标坐标类型变量
		xy.x = 0;
		xy.y = 0;
		GetCursorPos(&xy); //获取鼠标的坐标，并存放在xy中
		switch (data)
		{
		case 1:
			SetWindowPos(win, NULL, xy.x, xy.y, 400, 400, 0);
			break;
		case 2:
			SetWindowPos(win, NULL, xy.x-350, xy.y, 400, 400, 0);
			break;
		case 3:
			SetWindowPos(win, NULL, xy.x, xy.y-350, 400, 400, 0);
			break;
		case 0:
			SetWindowPos(win, NULL, xy.x-350, xy.y-350, 400, 400, 0);
			break;
		default:
			break;
		}
			//Sleep(50);
		}


	}

}


void main()
{
	closeBandizip();
	Sleep(1000);
	//openBandizip();
	//Sleep(1500);
	//movewindows();


	system("pause");
}
