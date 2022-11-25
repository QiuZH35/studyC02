
#include <stdio.h>
#include <stdlib.h>

//1 + ....+100


//a[100]=a[99+1]
//a[99]=a[98+1]
int add(int num)
{
	if (num == 1)
	{
		return 1;
	}
	else
	{

		return add(num - 1) + num;
	}


}


// 5050 -100 -....-1
//sub(100)=5050
//sub(99)=4950

//sub(1)=5050 - 100;
//sub(2)=5050 -199;

int sub(int num)
{
	if (num == 0) // 5050 -100-199...
	{
		return 5050;
	}
	else
	{
		return sub(num - 1) - num;

	}

}
int newsub(int num, int i)
{
	if (i == 0)
	{
		return num;
	}
	else
	{
		return newsub(num -= i, i - 1);
	}

}

//1*2..*N
double mul( double n )
{
	if (n == 0.0)
	{
		return 0.0;
	}
	else if (n == 1.0)
	{
		return n;
	}
	else
	{


		return mul(n - 1.0)* n;
	}

}

void main()
{
	printf("%lf", mul(4));

	/*int res = 0;
	for (int i = 1; i <= 100; i++)
	{

		res += i;

	}
	printf("%d", res);*/




}