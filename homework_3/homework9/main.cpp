#include <stdio.h>
#include <iostream>

void  main()
{
	int n,i,j,k;
	printf("���룺");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (k = 1; k <= n - i; k++)
		{
			printf(" ");
		}

		for (j = 1; j <= i; j++)
		{
			printf("%d", i);
			printf(" ");
		}
		printf("\n");
	}
	
	
	system("pause");

}

