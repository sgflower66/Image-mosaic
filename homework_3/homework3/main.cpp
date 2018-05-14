#include <stdio.h>
#include <iostream>

void  main()
{
	int a;
	scanf("%d", &a);
	printf("you put : %5d \n", a);
	printf("In normal order£¬the digitals are %d,%d,%d,%d,%d\n", a/10000, (a%10000)/1000, (a % 1000) / 100, (a % 100) / 10,a%10);
	printf("In reverse£¬they are %d,%d,%d,%d,%d\n", a % 10,(a % 100) / 10,  (a % 1000) / 100, (a % 10000) / 1000, a / 10000);
	system("pause");

}

/*
int main(void)
{
	int x;

	printf("Please input a number: ");
	scanf("%d", &x);

	if (x>9999 && x<1000000) {
		do {
			printf("%d", x /10);
			x = x % 10;
		} while (x>0);
	}
	else
		printf("Data error.");

	return 0;
}
*/
