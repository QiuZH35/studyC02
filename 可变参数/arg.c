
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


int arg_debug(int num, ...)  //...�ɱ����
{
	int res = 0;
	va_list  argp;  //���������ʼ�ĵ�ַ
	va_start(argp, num); //�Ӳ����׵�ַ��ʼ����ȡnum����Ĳ���
	for(int i=0;i<num;i++)
	{
		res+=va_arg(argp, int);//��ȡһ�����ݰ���int���ͽ���

	}
	va_end(argp); //��ȡ����

	return res;

}


void main1()
{
	printf("%d",arg_debug(4, 1, 2, 3, 4)); //�޶�4��������
	printf("\n%d", arg_debug(5, 1, 2, 3, 4, 5)); //�޶�5������



	system("pause");
}


void char_arg(int num, ...)
{
	va_list argp; //�ɱ������ʼ��ַ
	va_start(argp, num); //�ӿɱ�����׵�ַ��ʼ����ȡnum����Ĳ���
	for (int i = 0; i < num; i++)
	{
		//char str[50];
		//sprintf(str, va_arg(argp, char *)); //��ȡһ�����ݣ���char * ����
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