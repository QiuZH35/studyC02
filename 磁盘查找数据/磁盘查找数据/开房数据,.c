#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


char strpath[256] = "D:\\百度网盘\\c语言\\大数据相关数据\\kaifangX.txt";
char savepath[256] = { 0 };

void searchs(char str[50])
{
	sprintf(savepath, "D:\\%s.txt", str);
	FILE * pf;//文件指针
	pf = fopen(strpath, "r");//读取

	FILE* wpf = fopen(savepath,"w");//写入

	if (pf == NULL || wpf==NULL)
	{
		printf("文件打开失败");
	}
	else
	{

		while ( !feof(pf) )
		{
			char readstr[1024] = { 0 };
			fgets(readstr, 1024, pf);//读取一行
			char* p = strstr(readstr, str);
			if (p != NULL)
			{
				puts(readstr); //打印
				fputs(readstr, wpf); //写入
			}


		}
		

	}
	fclose(pf);//关闭文件
	
	fclose(wpf);

}



void main()
{
	
	char str[256];
	scanf("%s", str);
	printf("你要查找的是 %s \n", str);

	time_t start, end;
	time(&start);

	searchs(str);

	time(&end);
	printf("\n花了%f秒  ", difftime(end,start));

	system(savepath);

	system("pause");
}
