#include <stdio.h>
#include <iostream>

void  main()
{
	int time1, time2, hours, mins,t1,t2,t3,t4;
	printf("ÊäÈë:");
	scanf("%d %d", &time1,&time2);
	t1 = time1 / 100;
	t2 = time1 % 100;
	t3 = time2 / 100;
	t4 = time2 % 100;
	hours= t3-1-t1+ (t4 + 60 - t2) / 60;
	mins = (t4+60-t2)%60;
	printf("Êä³ö£ºThe train journey time is %d hrs %d mins. \n", hours,mins);
	system("pause");

}
