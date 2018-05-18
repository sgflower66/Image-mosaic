#define bj 1000//所有DEFINE 应该大写
#include "stdio.h"
#include "math.h"
#include <iostream>
void main()
{
	double n = 5, b = 3, a = 2, c = 0.035, d = 0.044, e = 0.05, f = 0.055, p1, p2, p3, p4, p5;
	p1 = bj + bj*n*f;
	p2 = bj + bj*a*d + bj*b*e + bj*a*d*b*e;
	p3 = bj + bj*b*e + bj*a*b + bj*b*e*a*d;
	p4 = bj*pow(1 + c, n);
	p5 = bj*pow(1 + 0.005 / 4, 4 * n);
	printf("一次存5年期本息和为%lf\n先存两年，再存3年本息和为%lf\n先存3年，再存2年本息和为%lf\n存5次1年期本息和为%lf\n存活期利息为%lf\n", p1, p2, p3, p4, p5);
	system("pause");
}