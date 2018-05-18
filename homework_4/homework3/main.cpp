#include <stdio.h>
#include <iostream>
#include <string.h>
#include<math.h>
void  main()
{
	char data[32];
	int  i, j=0, k=0,len;
	int t = 0;
	gets_s(data);
	len = strlen(data);
	for (i = len-1; i >=0; i--)
	{
		t+= (data[i]-48)*pow(2,k);
		k++;
	}


	printf("%d\n", t);


	system("pause");

}
