

#include <stdio.h>
#include <stdlib.h>


int get(int i)
{

	if (i == 1 || i == 2)
	{
		return 1;
	}
	else
	{
		return get(i - 1) + get(i - 2);
	}



}




void main1()
{
	printf("µÝ¹é£º%d\n", get(40));

	int a[40];
	a[0] = 1;
	a[1] = 1;
	for (int i = 2; i < 40; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}

	printf("\nÊý×é£º%d",a[39]);
	system("pause");
}

int main()
{
	int num1 = 1,num2=1,sum=0;
	int i = 3;
	while (i <= 40)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;

		i++;
	}
	printf("%d", sum);


	system("pause");

}