#include <stdio.h>
#include <iostream>
int monthday[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

void  main()
{
	void time(int a, int b, int c, int d[3]);
	int i, year, month, day, d[3];

		printf("input:");
		scanf("%d,%d,%d",&year,&month,&day);
		time(year,month,day,d);
		printf("Ìì%d,ÖÜ%d,ÐÇÆÚ%d\n",d[0],d[1],d[2]);
	

	system("pause");


}
void time(int a, int b, int c, int d[3])
{
	int date = 0, week, week1 = 0, week2 = 0, weekday = 0;
	int i, year, totalday1 = 0, totalday2 = 0;
	//which day?
	if (b == 1)
		date = c;
	else if (b >= 2)
	{
		for (i = 0; i <= b - 2; i++)
			date += monthday[i];
			date = date + c;

	}
	if ((b > 2) && ((a % 4 == 0) && (a % 100!= 0) || (a % 400 == 0)))
		date++;
	for (year = 1; year < a; year++)
	{
		totalday1 = totalday1 + 365;
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
			totalday1++;
	}
	week1 = totalday1 / 7;
	//from 1.1 to today,total days?
	totalday2 = totalday1 + date;
	week2= totalday2 / 7;
	//which week?which xing qi?
	week = date / 7;
	if (week == 0)
		week++;
	else if (week != 0 && (totalday1 % 7 != 0 && date % 7 != 0) || date % 7 != 0)
		week++;
	if (totalday2 % 7 == 0)
		weekday = 7;
	else if (totalday2 % 7 != 0)
		weekday = totalday2 % 7;
	d[0] = date;
	d[1] = week;
	d[2] = weekday;

}
