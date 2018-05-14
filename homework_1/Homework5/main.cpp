
#include<stdio.h>  
#include<math.h> 
#include<stdio.h>
#include<iostream>
void main()
{
	int a, b, c, d, max, min;
	printf("请输入四个数:如1 2 3 4\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	max = (a>b) ? a : b;
	max = (max>c) ? max : c;
	max = (max>d) ? max : d;
	printf("max is %d\n", max);
	min = (a<b) ? a : b;
	min = (min<c) ? min : c;
	min = (min<d) ? min : d;
	printf("min is %d\n", min);
	system("pause");
}


