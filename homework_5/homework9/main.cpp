#include <stdio.h>
#include <iostream>

void  main()
{
	int jm(int);
	int a;
	printf(" ‰»Î£∫");
	scanf("%d", &a);
	printf("In normal order£¨the digitals are %d%d%d%d\n", jm((a % 100) / 10), jm(a % 10), jm(a / 1000), jm((a % 1000) / 100));
	system("pause");

}

int jm(int x)
{
	int y;
	y = (x + 9) % 10;
	return y;
}