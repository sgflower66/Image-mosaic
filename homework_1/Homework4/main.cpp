
#include<stdio.h>  
#include<math.h> 
#include <iostream>
int main()
{
	const double pi = acos(-1.0);
	double x = 45, r;
	double s;

	r = x*pi / 180;

	s = 2*sin(r)*sin(r)+1*sin(r)*cos(r)-1*cos(r)*cos(r);
	printf("½Ç¶È½á¹û:%f \n", s);
	system("pause");
	return 0;
}


