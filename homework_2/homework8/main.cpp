#include<stdio.h>  
#include<iostream>
int main()
{
	int b, i, c = 0, a[30];
	scanf("%d", &b);
	while (b != 0)
	{
		i = b % 2;
		a[c] = i;
		c++;
		b = b / 2;
	}
	c--;//因为c代表存入数据的长度而下表范围是0~c-1  
	for (; c >= 0; c--)//倒序输出即为这个数字对应的二进制  
	{
		printf("%d", a[c]);
	}
	printf("\n");
	system("pause");
}