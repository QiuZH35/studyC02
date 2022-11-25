#include "define.h"
#include "data.h"
#include "view.h"
#include "AI.h"
#include "control.h"

void main()
{
	//show(Realdata);

	int num = AIout(AIdata, 0, 0);

	if (num == 1)
	{
		printf("可以走出来\n");
		
		show(Realdata);
		AImove();
	}
	else
	{
		printf("不可以走出来\n");
	}


	/*while (1)
	{
		char ch = getchar();
		getchar();
		if (ch == 'a' || ch == 's' || ch == 'w' || ch == 'd')
		{
			control(ch);
		}
		show(Realdata);
	}*/
	

	system("pause");
}

