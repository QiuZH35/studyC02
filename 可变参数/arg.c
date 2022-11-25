
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


int arg_debug(int num, ...)  //...可变参数
{
	int res = 0;
	va_list  argp;  //储存参数开始的地址
	va_start(argp, num); //从参数首地址开始，读取num后面的参数
	for(int i=0;i<num;i++)
	{
		res+=va_arg(argp, int);//读取一个数据按照int类型解析

	}
	va_end(argp); //读取结束

	return res;

}


void main1()
{
	printf("%d",arg_debug(4, 1, 2, 3, 4)); //限定4个参数。
	printf("\n%d", arg_debug(5, 1, 2, 3, 4, 5)); //限定5个参数



	system("pause");
}


void char_arg(int num, ...)
{
	va_list argp; //可变参数开始地址
	va_start(argp, num); //从可变参数首地址开始，读取num后面的参数
	for (int i = 0; i < num; i++)
	{
		//char str[50];
		//sprintf(str, va_arg(argp, char *)); //读取一个数据，以char * 解析
		//printf("\n%s", str);
		system(va_arg(argp, char *));
	}
	va_end(argp);
}




void main2()
{
	char_arg(5, "notepad", "calc", "mspaint","tasklist","ipconfig");

	system("pause");
}



void  int_arg(int num, ...)
{
	
	va_list argp;
	va_start(argp, num);
	int argvalue = num;
	do {
		printf("%d\n", argvalue);
		argvalue=va_arg(argp, int);
		

	} while (argvalue != 0);
	va_end(argp);

}



void main()
{
	int_arg(1, 2, 3, 4, 5, 6, 0);


	system("pause");
}