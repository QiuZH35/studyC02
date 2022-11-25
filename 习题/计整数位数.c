
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>


int jishu(int num)
{
	
	if (num == 0)
	{
		return 0;
	}
	else
	{
		static int wei = 0;
	/*	for (; num; num /= 10)
		{
			wei++;
		}*/
		/*while (num)
		{
			wei++;
			num /= 10;

		}*/
		/*do {
			wei++;
			num /= 10;
		} while (num);
        */

	/*AAA:
		if (num)
		{
			wei++;
			num /= 10;
			goto AAA;
		}*/

		if (num)
		{
			wei++;
			jishu(num /= 10);
		}

		return wei;
	}

}




void main1()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", jishu(num));

	system("pause");
}