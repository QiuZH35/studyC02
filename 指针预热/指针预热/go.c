
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main1()
{
	int num = 10;

	int* p = &num; //��ȡnum�ĵ�ַ���������в���
	printf("num=%p,*p=%p", &num, p);

	*p = 20;


	system("pause");
}


void show()
{
	MessageBoxA(0,"��ӭ�ؼ�","���",1);

}
void go()
{
	system("notepad");
}

void main()
{
	void (*ps)()=show; //����ָ��
	ps();
	printf("%p", ps);


	ps = go;
	ps();

	system("pause");
}