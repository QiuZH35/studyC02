
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>


void leftdown()
{
	printf(" -------------------------------------------------------------------------------\n");
	for (int i = 1; i < 10; i++)
	{
		printf("|");
		for (int j = 1; j < 10; j++)
		{
			if (i >= j)
			{
				printf("%d*%d=%2d ", i, j, i*j);
			}
			else
			{
				printf("%7s", "");
			}printf("|");
		}
		printf("\n");
	}
	printf(" -------------------------------------------------------------------------------\n");
}
void rightup()
{
	printf(" -------------------------------------------------------------------------------\n");
	for (int i = 1; i < 10; i++)
	{
		printf("|");
		for (int j = 1; j < 10; j++)
		{
			if (i <= j)
			{
				printf("%d*%d=%2d ", i, j, i*j);
			}
			else
			{
				printf("%7s", "");
			}printf("|");
		}
		printf("\n");
	}
	printf(" -------------------------------------------------------------------------------\n");
}

void rightdown()
{
	printf(" -------------------------------------------------------------------------------\n");
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("|");
			if (i >=10-j)
			{
				printf("%d*%d=%2d ", i, j, i*j);
			}
			else
			{
				printf("%7s", "");
			}
			printf("|");
		}
		printf("\n");
	}
	printf(" -------------------------------------------------------------------------------\n");

}

void leftup()
{
	printf(" -------------------------------------------------------------------------------\n");
	for (int i = 1; i < 10; i++)
	{
		
		for (int j = 1; j < 10; j++)
		{
			printf("|");
			if (i <=10-j )
			{
				printf("%d*%d=%2d ", i, j, i*j);
		
			}
			else
			{
				printf("%7s", "");
			}
			printf("|");
		}
		printf("\n");
	}
	printf(" -------------------------------------------------------------------------------\n");
}

void all()
{
	for (int i = 1; i < 10; i++)
	{
		printf(" |");
		for (int j = 1; j < 10; j++)
		{
			printf("%d*%d=%2d ", i, j, i*j);

		}
		printf("\n");
	}
}

void _99()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}
}
void main()
{
	//leftdown();
	//rightup();
	//rightdown();
	//leftup();
	//all();
	_99();



	system("pause");
}




