#include <stdio.h>
#include <iostream>

void  main()
{
	float mysin(float x);
	float mycos(float x);
	float pi = 3.14159;
	float a,x, y1, y2, y_1, y_2;
	scanf("%f%f", &a, &x);
	x = x*pi / 180;
	a = a*pi / 180;
	y1 = sqrt((1-cos(a))/2);
	y2 = 2 * pow(sin(x), 2) + sin(x)*cos(x) - pow(cos(x), 2);
	y_1= sqrt((1 - mycos(a)) / 2);
	y_2= 2 * pow(mysin(x), 2) + mysin(x)*mycos(x) - pow(mycos(x), 2);

	printf("mysin%f\n", sin(x));
	printf("mycos%f\n", mycos(a));
	printf("y1=%f,y2=%f \ny_1=%f,y_2=%f\n", y1, y2, y_1, y_2);
	system("pause");


}

float mysin(float x)
{
	float sum;
	int i;
	sum = x;
	for (i = 2; i <= 11; i++)
	{
		x = x*(-1)*pow(x, 2) / (2 * i - 1) / (2 * i - 2);
		sum = sum + x;
	}
	return(sum);
	
}

float mycos(float x)
{

	float sum,y;
	int i;
	y = 1;
	sum = 1;
	for (i = 1; i <=11; i++)
	{
		y = y*(-1)*pow(x, 2) / (2 * i) / (2 * i - 1);
		sum = sum + y;
	}
	return(sum);
	
}