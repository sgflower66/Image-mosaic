#include <stdio.h>
#include <iostream>

void  main()
{
	int n,i,j,k;
	printf(" ‰»Î£∫");
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

