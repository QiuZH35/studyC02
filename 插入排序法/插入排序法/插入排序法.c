#include <stdio.h>
#include <stdlib.h>



void main1()
{
	int a[10]={ 1, 2, 3, 4, 6, 7, 8, 9, 10, 5 };

	int temp = a[9];

	int j = 9;
	while (j > 0 && a[j - 1] > temp)
	{
		a[j] = a[j - 1]; //往后移动
		j--;
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	a[j] = temp;

	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}

	system("pause");



}

void main2()
{
	int a[10] = { 1,2,4,6,7,5,9,8,10,3 };


	for (int i = 1; i < 10; i++) //只需要移动9位
	{
		int temp = a[i];
		int j = i;
		for (; j > 0 && a[j - 1] > temp; j--)
		{
			a[j] = a[j - 1];
		}
		a[j] = temp;
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}


	system("pause");
}




void main()
{
	int a[10] = { 1,2,4,6,7,5,9,8,10,3 };

	printf("\n");

	digui(a);


	for (int i = 0; i < 10; i++)
	{
		int temp = a[i];
		int j = i;
		/*for (; j > 0 && a[j - 1] > temp; j--)
		{
			a[j ] = a[j - 1];
		}*/

	AAA:
		if (j > 0 && a[j - 1] > temp)
		{
			a[j] = a[j - 1];
			j--;
			goto AAA;
		}

		a[j] = temp;



	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	



	system("pause");
}