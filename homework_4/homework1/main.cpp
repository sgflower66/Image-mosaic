#include <stdio.h>
#include <iostream>
#include<string.h>

void  main()
{

		int i, k = 0,a;
		char ch;
		char str[20], res[20];
		printf("Input the string:");
		scanf("%s", str);
		getchar();//等待按键，这样连续输入两行
		printf("Input the char:");
		scanf("%c", &ch);
		a=strlen(str);
		for (i = 0; i <= strlen(str)+1; i++)
		{
			if (str[i] != ch)
			{
				res[k] = str[i];
				k++;
			}
		}

		printf("%s", res);







	system("pause");


}
