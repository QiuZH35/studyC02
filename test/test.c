
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include"Lib.h"  //没有引用头文件，C编译器会在库中查找
//int add(int a, int b);//函数的声明，没有实体，无法链接
//无代码则手动添加静态库。


//纯代码解决方式
//预编译   comment加载模块   lib 文件名
#pragma comment(lib,"Lib.lib")


void main1()
{

	printf("%d", add(2, 1));

}


