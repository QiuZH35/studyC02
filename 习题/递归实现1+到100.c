
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int leijia(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else
	{

		return leijia(num-1) + num;
	}


}




void main4()
{
	printf("%d", leijia(100));



}