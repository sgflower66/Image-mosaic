#include <stdio.h>
#include <iostream>

void  main()
{
	int a, b, c;
	unsigned int d, e;
	char f;
	float g;
	printf("输入:-2,99,2147483647,4294954951,12345,d,53.65 (本次作业要求输入上述的数字运行）\n");
	scanf("%d,%d,%d,%u,%u,%c,%f", &a, &b, &c, &d, &e, &f, &g);
	printf("int：%d,%d,%d,%d,%d,%d,%d\n", (int)a, (int)b, (int)c, (int)d, (int)e, (int)f, (int)g);
	printf("unsigned int：%u,%u,%u,%u,%u,%u,%u\n", (unsigned int)a, (unsigned int)b, (unsigned int)c, d, e, (unsigned int)f, (unsigned int)g);
	printf("long：%d,%d,%ld,%ld,%d,%d,%d\n", (long)a, (long)b, (long)c, (long)d, (long)e, (long)f, (long)g);
	printf("short：%d,%d,%d,%d,%d,%d,%d\n", (short)a, (short)b, (short)c, (short)d, (short)e, (short)f, (short)g);
	printf("unsigned char：%c,%c,%c,%c,%c,%c,%c\n", (char)a, (char)b, (char)c, (char)d, (char)e, (char)f, (char)g);
	printf("float：%f,%f,%f,%f,%f,%f,%f\n", (float)a, (float)b, (float)c, (float)d, (float)e, (float)f, (float)g);
	system("pause");

}
