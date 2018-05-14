
#include <stdio.h>
#include<iostream>
//#include<stdlib.h>
void main()
{
	int fc(int x);
	int a, y;
	scanf("%d", &a);
	y = fc(fc(fc(a)));
	printf("%d\n",y);
	system("pause");
}

int fc(int x)
{
	int z;
	z = 1+1/x;
	return (z);
}

