#include <stdio.h>
#include <iostream>
#include <conio.h>
#include<string.h>
#include<ctype.h>
void main()

{
	int letter = 0, space = 0, figure = 0, other = 0, i;
	char str[100];
	
	printf("输入字符串\n");
	/*scanf("%s", str);
	printf("%s",str);*///补入'\0'
	gets_s(str);

	for (i = 0; i < 100; i++)
	{
		if (str[i]!= '.')
		{
			if (isupper(str[i]))
			{
				printf("%c", str[i] + 32);
				letter++;

			}
			else if (islower(str[i]))
			{
				printf("%c", str[i] - 32);
				letter++;
			}
			else
			{
				printf("%c", str[i]);
				if (str[i] == 32)//isspace
				{
					space++;
					printf(" ");
				}
				else if (str[i] >= '0'&&str[i] <= '9')
					figure++;
				else
					other++;
			}
			i++;
		}
		else break;
	}
	printf(".");
	other++;
	printf("\n字符%d,\n空格%d,\n数字%d，\n其他字符%d\n",letter,space,figure,other);

	


	system("pause");
}