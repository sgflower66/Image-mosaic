#include <stdio.h>
#include <iostream>
#define cost 3500
void  main()
{
	int n, i, j, sum = 0;
	int a[10][10];
	printf("ÇëÊäÈënµÄÖµ");
	scanf("%d",&n);
	printf("¾ØÕó\n");
	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; j <= n - 1; j++)
		{
			scanf("%d", &a[i][j]);
			if (i + j != n - 1 && i != n - 1 && j != n - 1)
				sum += a[i][j];

		}

	}
	printf("sum=%d\n",sum);
	system("pause");


}
