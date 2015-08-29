#include<stdio.h>
#include<stdlib.h> 
main()
{
	long long int num[100],opi,ni,expi,i,j,k,l,sn[100],sop[100];
	long long int max,min;
	char exp[4],ch;
	int tc;
	scanf("%d\n",&tc);
	while(tc--)
	{
		ni = 0;
		expi = 0;
		while((ch = getchar()) != '\n')
		{
			if(ch == '+' || ch == '*')
			{
				num[ni++] = atoi(exp);
				num[ni++] = ch;
				expi = 0;
				exp[0]= exp[1] = exp[2] = '\0';
			}
			else
			{
				exp[expi++] = ch;
			}
		}
		num[ni++] = atoi(exp);
		expi = 0;
		exp[0]= exp[1] = exp[2] = '\0';
		max = 1;
		min = 0;
		for(i = 0,j = 0,k = 0; i < ni; i++)
		{
			if(num[i]==42 || num[i]==43)
			{
				sop[j++] = num[i];
			}
			else
			{
				if(sop[j-1]==43)
				{
					j--;
					sn[k-1] = sn[k-1]+num[i];
				}
				else sn[k++] = num[i];
			}
		}
		for(i = 0; i < k; i++)max*=sn[i];
		for(i = 0,j = 0,k = 0; i < ni; i++)
		{
			if(num[i]==42 || num[i]==43)
			{
				sop[j++] = num[i];
			}
			else
			{
				if(sop[j-1]==42)
				{
					j--;
					sn[k-1] = sn[k-1]*num[i];
				}
				else sn[k++] = num[i];
			}
		}
		for(i = 0; i < k; i++)min+=sn[i];
		printf("The maximum and minimum are %lld and %lld.\n",max,min);
	}
}
