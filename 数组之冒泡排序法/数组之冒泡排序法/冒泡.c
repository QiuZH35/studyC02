#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main1()
{
	srand((unsigned int)time(NULL)); //ʱ�����ӣ���ȡ�����

	int a[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		a[i]=rand() % 100;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n������\n\n");
	for (int i = 0; i < 10 - 1; i++)
	{
		if (a[i] > a[i + 1]) //�Ա���ֵ��С
		{
			int temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;//ÿ�ζԱȽ�����������һ��������һ������������
		}
		for (int i = 0; i < 10; i++)
		{
			printf("%d  ", a[i]);
		}
		printf("\n");
	}





	system("pause");
}



void main()
{
	srand((unsigned int)time(NULL));

#define N 10
	int a[N] = { 0 };
	for (int i = 0; i < N ; i++)
	{
		a[i] = rand() % 30;

	}
	for (int i = 0; i < N; i++)
	{
		printf(" %d  ", a[i]);
	}
	printf("\n\n��������\n\n");

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++) //ÿ�ζ���һ�����������ף�����ÿ���������ΪN-i��
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j+ 1];
				a[j+ 1] = temp;
			}

		}
		for (int i = 0; i < N; i++)
		{
			printf(" %d  ", a[i]);
		}
		printf("\n");
	}

	//printf("\n\n");
	//for (int i = 0; i < N - 1; i++)
	//{
	//	for (int j = 0; j < N - 1 - i; j++) //ÿ�ζ���һ�����������ף�����ÿ���������ΪN-i��
	//	{
	//		if (a[j] < a[j + 1])
	//		{
	//			int temp = a[j];
	//			a[j] = a[j + 1];
	//			a[j + 1] = temp;
	//		}

	//	}
	//	for (int i = 0; i < N; i++)
	//	{
	//		printf(" %d  ", a[i]);
	//	}
	//	printf("\n");
	//}


	for (int i = 0; i < N; i++)
			{
				printf(" %d  ", a[i]);
			}
			printf("\n");
	system("pause");
}


//ѡ������
void main23()
{
	srand((unsigned int)time(NULL));

#define N 10
	int a[N] = { 0 };
	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % 30;

	}
	for (int i = 0; i < N; i++)
	{
		printf(" %d  ", a[i]);
	}
	printf("\n\n��������\n\n");

	int kmax = a[0];
	for (int i = 0; i < N - 1; i++)
	{
		
		if (a[i] > kmax)
		{
			kmax = i;  //ȷ����������±�
		}
		/*for (int i = 0; i < N; i++)
		{
			printf("%d  ", a[i]);
		}*/
	}
	printf(" %d ", a[kmax]);

	system("pause");
}

void main44()
{
	srand((unsigned int)time(NULL));

#define N 10
	int a[N] = { 0 };
	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % 30;

	}
	for (int i = 0; i < N; i++)
	{
		printf(" %d  ", a[i]);
	}
	printf("\n\n��������\n\n");

	int kmax = a[0];
	
	for (int i = 0; i < N - 1; i++)
	{
		kmax = i;
		for (int j = 1+i; j < N; j++)
		{
			if (a[j] > a[kmax])
			{
				kmax = j;
			}
		}
	
		if (kmax != i)
		{
			int temp = a[kmax];
			a[kmax] = a[i];
			a[i] = temp;
		}
		{
			for (int i = 0; i < N; i++)
			{
				printf(" %d  ", a[i]);
			}

			printf("\n");
		}
	

	}
	//printf(" %d ", a[kmax]);


	system("pause");
}