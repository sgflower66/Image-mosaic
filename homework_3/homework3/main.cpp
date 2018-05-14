#include <stdio.h>
#include <iostream>

void  main()
{
	int n,m,k, i;
	int chengpin=0, wuqi=0, cai=0, qing=0;
	printf(" ‰»În m k:");
	scanf("%d %d %d", &n,&m,&k);

	for (i = 1; i <= k; i++)
	{
	
		if (i % (n + 1) == 0 && i % (m + 1) == 0)
			wuqi++;
		else if(i % (m + 1) == 0)
			cai++;
		else if (i % (n + 1) == 0)
		    qing++;
		

	}
	chengpin = k - wuqi - cai - qing;
	printf("%d,%d,%d,%d\n",chengpin,wuqi,cai,qing);
	system("pause");


}
