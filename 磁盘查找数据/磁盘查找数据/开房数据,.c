#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


char strpath[256] = "D:\\�ٶ�����\\c����\\�������������\\kaifangX.txt";
char savepath[256] = { 0 };

void searchs(char str[50])
{
	sprintf(savepath, "D:\\%s.txt", str);
	FILE * pf;//�ļ�ָ��
	pf = fopen(strpath, "r");//��ȡ

	FILE* wpf = fopen(savepath,"w");//д��

	if (pf == NULL || wpf==NULL)
	{
		printf("�ļ���ʧ��");
	}
	else
	{

		while ( !feof(pf) )
		{
			char readstr[1024] = { 0 };
			fgets(readstr, 1024, pf);//��ȡһ��
			char* p = strstr(readstr, str);
			if (p != NULL)
			{
				puts(readstr); //��ӡ
				fputs(readstr, wpf); //д��
			}


		}
		

	}
	fclose(pf);//�ر��ļ�
	
	fclose(wpf);

}



void main()
{
	
	char str[256];
	scanf("%s", str);
	printf("��Ҫ���ҵ��� %s \n", str);

	time_t start, end;
	time(&start);

	searchs(str);

	time(&end);
	printf("\n����%f��  ", difftime(end,start));

	system(savepath);

	system("pause");
}
