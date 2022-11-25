
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


void main()
{
	int a = 4;
	int b = 5;
	
	swap(a, b);
	cout << a << b << endl;

}