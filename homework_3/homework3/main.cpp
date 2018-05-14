#include <stdio.h>
#include <iostream>

void  main()
{
	int n,m,k, i;
	float a, b, c, area, perimeter, s;
	printf("输入n m k:");
	scanf("%d %d %d", &n,&m,&k);

	for (i = 1; i <= repeat; i++)
	{
		printf("输入三角形三条边a b c:");
		scanf("%f %f %f", &a, &b, &c);
		if (a + b > c&&a + c > b&& c + b > a)
		{
			s = (a + b + c) / 2;
			area = sqrt(s*(s - a)*(s - b)*(s - c));
			perimeter = a + b + c;
			printf(" area is %.2f ,perimeter is %.2f,\n", area, perimeter);
		}

		else
			printf("These sides do not correspond to a valid triangle\n");


	}

	system("pause");


}
