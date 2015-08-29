#include<stdio.h>
#include<string.h>
 
main()
{
	char n1[210],n2[210],ans[210],ch;
	int i,l1,l2,max,tc;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%s%c%s%c",n1,&ch,n2,&ch);
		if(strcmp(n1,"0")==0 && strcmp(n2,"0")==0)
		{
			printf("0\n");
			continue;
		}
		l1 = strlen(n1);
		l2 = strlen(n2);
		max = l1 > l2 ? l1 : l2;
		if(l1<max)for(i = l1; i < max; i++)n1[i]='0';
		else for(i = l2; i < max; i++)n2[i]='0';
		ans[0] = '0';
		for(i = 0; i < max; i++)
		{			
			ans[i+1] = (n1[i]+n2[i]+ans[i]-144)/10+'0';
			ans[i]=((n1[i]+n2[i]+ans[i]-144)%10)+'0';
		}
		for(i = 0;i < max; i++)if(ans[i] != '0')break;
		for(i; i < max; i++)putchar(ans[i]);
		if(ans[i]!='0')putchar(ans[i]);
		printf("\n");
	}
}
