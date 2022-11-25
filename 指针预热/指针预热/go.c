
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main1()
{
	int num = 10;

	int* p = &num; //获取num的地址，对他进行操作
	printf("num=%p,*p=%p", &num, p);

	*p = 20;


	system("pause");
}


void show()
{
	MessageBoxA(0,"欢迎回家","你好",1);

}
void go()
{
	system("notepad");
}

void main()
{
	void (*ps)()=show; //函数指针
	ps();
	printf("%p", ps);


	ps = go;
	ps();

	system("pause");
}