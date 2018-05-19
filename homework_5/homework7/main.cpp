#include <stdio.h>
#include <iostream>
void main()

{
	int n, y, i, k;
	int f(int x);
		for (i = 0;; i++)
		{
			printf("n=");
			scanf("%d", &n);
			if (n == 0)
				break;
			while (n != 0)
			{
				y = f(n);
				printf("%d ", y);
				n = y;
				
			}
		}

		printf("\n");
	system("pause");
}
int f(int x)
{
	int y;
	if (x % 2 == 0)
		y = x / 2;
	else
		y = x * 3 + 1;
	return(y);
}