#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

bool set[740];
main()
{
	int tc,n,i,l,m,t,j,k;
	char num[20];
	scanf("%d",&tc);
	for(j=1;j<=tc;j++)
	{
		scanf("%d",&n);
	        for(i=0;i<=740;i++)set[i]=0;
		t=n;
		k=0;
		while(1)
		{
			sprintf(num,"%d",t);
			l=strlen(num);
			t=0;
			for(i=0;i<l;i++)t+=(num[i]-48)*(num[i]-48);
			if(t==1)
			{
				printf("Case #%d: %d is a Happy number.\n",j,n);
				break;
			}
			else if(set[t]==1)
			{
				printf("Case #%d: %d is an Unhappy number.\n",j,n);
				break;
			}			
			set[t]=1;
		}	
	}
}

