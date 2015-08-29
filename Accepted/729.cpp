#include<stdio.h>
#include<math.h>
#include<string.h>

main()
{
	int tc,h,i,j,k,l,m,ct,y,n,c;
	char bin[100];
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d %d",&n,&h);		
		k = pow(2,n)-1;		
		for(i = pow(2,h)-1; i <= k; i++)
		{
			j=i^0;
			l=0;
			m=1;
			ct=0;
			while(ct++<n)
			{
				if(j&m)l++;
				m<<=1;
			}
			if(l==h)
			{
				c=n;
				y=i;
				bin[n]='\0';
				while(c-->0)
				{
					bin[c]=y%2+48;
					y /= 2;
				}
				printf("%s\n",bin);
			}
		}
		if(tc)printf("\n");
	}
}
