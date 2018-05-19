#include <stdio.h>
#include <iostream>

void  main()
{
	void f(char a[20]);
	char a[20];
	printf(" ‰»Î£∫");
	gets_s(a);
	f(a);


	
	system("pause");

}
void f(char a[20])
{
	char b[20];
	int l, i;
	l = strlen(a);
	for (i = 0; i <= l - 1; i++)
	{
		b[i] = a[l - i - 1] - 32;
		printf("%c%c\n", b[i], a[i]);
	}
}

