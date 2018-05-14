
#include<stdio.h>  
#include<math.h> 
#include <iostream>
	int main()
	{
		const double pi = acos(-1.0);
		double x =60,r;
		double s;
		r = x*pi / 180;
		s = pow((1-cos(r))/2,0.5);
		printf("½Ç¶È½á¹û:%f \n", s);
		system("pause");
		return 0;
	}

	
