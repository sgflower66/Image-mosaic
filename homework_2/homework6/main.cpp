#define bj 1000//����DEFINE Ӧ�ô�д
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
	printf("һ�δ�5���ڱ�Ϣ��Ϊ%lf\n�ȴ����꣬�ٴ�3�걾Ϣ��Ϊ%lf\n�ȴ�3�꣬�ٴ�2�걾Ϣ��Ϊ%lf\n��5��1���ڱ�Ϣ��Ϊ%lf\n�������ϢΪ%lf\n", p1, p2, p3, p4, p5);
	system("pause");
}