#include <stdio.h>
#include <iostream>
#define cost 3500
void  main()
{
	int repeat, i;
	float salary, tax, amount, p1=0.03, p2=0.1, p3=0.2, p4=0.25, p5=0.3,p6=0.35,p7=0.45;
	printf(" ‰»Îrepeat(0<repeat<10):");
	scanf("%d", &repeat);

	for (i = 1; i <= repeat; i++)
	{
		printf(" ‰»Îsalary:");
		scanf("%f", &salary);
		amount=salary - cost;
		if (amount <= 1500)
			tax = amount*p1;
		else if (amount <= 4500)
			tax = 1500*p1+(amount-1500)*p2;
		else if (amount <= 9000)
			tax = 1500 * p1 + 3000*p2+(amount - 4500)*p3;
		else if (amount <= 35000)
			tax = 1500 * p1 + 3000 * p2 + 4500*p3+(amount-9000)*p4;
		else if (amount <= 55000)
			tax = 1500 * p1 + 3000 * p2 + 4500 * p3 + 26000*p4+(amount-35000)*p5;
		else if (amount <= 8000)
			tax = 1500 * p1 + 3000 * p2 + 4500 * p3 + 26000 * p4 + 20000 *p5+(amount-55000)*p6;
		else 
			tax = 1500 * p1 + 3000 * p2 + 4500 * p3 + 26000 * p4 + 20000 * p5 + 25000*p6+(amount-80000)*p7;
		
			printf("tax: %.2f\n",tax);


	}

	system("pause");


}
