#include <stdio.h>
#include <iostream>

void  main()
{
	int a, b, c;
	unsigned int d, e;
	char f;
	float g;
	printf("输入:-2,99,2147483647,4294954951,12345,d,53.65 (本次作业要求输入上述的数字运行）\n");
	scanf("%d,%d,%d,%u,%u,%c,%f", &a,&b,&c,&d,&e,&f,&g);
	printf("int：%d,%d,%d\n", a, b, c);
	printf("unsigned int：%u,%u\n",  d, e);
	printf("char：%c\n", f);
	printf("float：%f\n",g);
	system("pause");

}
