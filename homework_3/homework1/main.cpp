#include <stdio.h>
#include <iostream>

void  main()
{
	float f, c;
	printf("输入:");
	scanf("%f", &f);
//	printf("(华氏温度)\n");
	c = 5.0/9.0*(f-32);
	printf("输出：The temprature is %.2f \n", c);
	system("pause");

}
