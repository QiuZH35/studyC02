
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>


int bin(int num)
{
	if (num == 0)
	{
		return;
	}
	else
	{

		bin(num / 2);
		
		printf("%d",num%2);
	}

}

// 10 %  2      0
// 5  %  2      1
// 2  %  2      0
// 1  %  2		1

void main11()
{
	bin(15);




	system("pause");
}