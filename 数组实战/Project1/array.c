

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
	time_t ts;
	srand((unsigned int)time(&ts));

	int a[20];

	for (int i = 0; i < 20; i++)
	{
		a[i] = rand() % 300;
		printf("\n%d", a[i]);
	}
	int max = a[0];
	for (int i = 0; i < 20; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	printf("\nmax=%d", max);





	system("pause");
}