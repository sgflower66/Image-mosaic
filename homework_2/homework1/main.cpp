#include <stdio.h>
#include <iostream>

void  main()
{
	float f, c;
	printf("����:");
	scanf("%f", &f);
//	printf("(�����¶�)\n");
	c = 5.0/9.0*(f-32);
	printf("�����The temprature is %.2f \n", c);
	system("pause");

}
