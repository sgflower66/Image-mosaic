#include <stdio.h>
#include <iostream>
void main()

{

	long term = 0, sum = 0;

	int a, i, n;

	printf("Input a(1~9),n:");

	scanf("%d,%d", &a, &n);

	for (i = 1; i <= n; i++)

	{

		term = term * 10 + a;
		sum = sum + term;

	}

	printf("sum=%ld\n", sum);
	system("pause");
}