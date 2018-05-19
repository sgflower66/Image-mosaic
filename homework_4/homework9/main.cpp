#include <stdio.h>
#include <iostream>
#include <conio.h>
#include<string.h>
#include<ctype.h>
void main()

{
	char a[50], b[50];
	int c[50], d[50], e[51], m, n, i, j, k = 0, f, max;
	printf("输入两行数：\n");
	gets_s(a);
	gets_s(b);
	m = strlen(a);
	n = strlen(b);
	for (i = 0, j = m - 1; j >= 0; i++, j--)
		c[i] = a[j] - '0';
	for (i = 0, j = n - 1; j >= 0; i++, j--)
		d[i] = b[j] - '0';
	if (n >= m)
		for (i = m; i < n; i++)
			c[i] = 0;
	else
		for (i = n; i < m; i++)
			d[i] = 0;
	if (m >= n)
		max = m;
	else
		max = n;
	for (i = 0; i < max; i++)
		e[i] = c[i] + d[i];
	e[max] = 0;
	for(i=0;i<=max-1;i++)
		if (e[i] > 9)
		{
			e[i] = e[i] - 10;
			e[i + 1]++;
		}
	for (i = 0; i < max / 2; i++)
	{
		f = e[i];
		e[i] = e[max - i];
		e[max - i] = f;
	}
	for (i = 0; i < max + 1; i++)
		if (0 != e[0] || 0 != i)
			printf("%d", e[i]);
	printf("\n");

	


	system("pause");
}