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
	c--;//��Ϊc����������ݵĳ��ȶ��±�Χ��0~c-1  
	for (; c >= 0; c--)//���������Ϊ������ֶ�Ӧ�Ķ�����  
	{
		printf("%d", a[c]);
	}
	printf("\n");
	system("pause");
}