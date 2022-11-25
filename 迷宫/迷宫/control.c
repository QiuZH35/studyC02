
#include "control.h"

void control(char ch)
{

	switch (ch)
	{
	case 'w':
		if (ipos - 1 >= 0)
		{
			int temp = Realdata[ipos - 1][jpos];
			Realdata[ipos - 1][jpos] = Realdata[ipos][jpos];
			Realdata[ipos][jpos] = temp;
			ipos -= 1;
		}
		break;
	case 's':
		if (ipos + 1 <= 9)
		{
			int temp = Realdata[ipos + 1][jpos];
			Realdata[ipos + 1][jpos] = Realdata[ipos][jpos];
			Realdata[ipos][jpos] = temp;
			ipos += 1;
		}
		break;
	case 'a':
		if (jpos - 1 >= 0)
		{
			int temp = Realdata[ipos ][jpos-1];
			Realdata[ipos][jpos-1] = Realdata[ipos][jpos];
			Realdata[ipos][jpos] = temp;
			jpos -= 1;
		}
		break;
	case 'd':
		if (jpos + 1 <= 9)
		{
			int temp = Realdata[ipos ][jpos+1];
			Realdata[ipos][jpos+1] = Realdata[ipos][jpos];
			Realdata[ipos][jpos] = temp;
			jpos += 1;
		}
		break;
	default:
		break;

	}
	show(Realdata);





}
