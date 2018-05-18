#include <stdio.h>
#include <iostream>
#include<ctype.h>

void  main()
{
	char longest_word(int n, char str[100]);
	char str[100] = { 0 }, a[100] = {0};
	int i;
	gets_s(str);



	for (i = 0;a[i]!=' '; i++)
	{
		a[i] = longest_word(i, str);
	

	}
	puts(a);

	system("pause");

}
char longest_word(int n, char str[100])
{
	char a[100] = {0}, b[100] = { 0 };
	int i, j = 0, k, length_word = 0, m;
	int length;
	length = strlen(str);
	for (i = 0,j=0; i < length;i++,j++)
	{
		a[j] = str[i];
		if (str[i] == ' ');
		{
			break;
		}
	}
	length_word = strlen(a);
	return(b[n]);
}
