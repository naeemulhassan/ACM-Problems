#include<stdio.h>
 
int b[120][120],count;
void fill(int i,int j,int c)
{
	count++;
	b[i][j]=-2;
	if(b[i-1][j]==c)fill(i-1,j,c);
	if(b[i][j-1]==c)fill(i,j-1,c);
	if(b[i][j+1]==c)fill(i,j+1,c);
	if(b[i+1][j]==c)fill(i+1,j,c);
}
main()
{
	int i,j,k,l,m,n;
	char ch1,ch2;
	while(scanf("%d",&n) && n)
	{
		for(i = 1; i <= n; i ++)
			for(j = 1; j <= n; j++)b[i][j]=n;
		for(i = 0; i <= n+1; i++)
		{
			b[i][0] = -1;
			b[0][i] = -1;
			b[i][n+1] = -1;
			b[n+1][i] = -1;
		}
		for(m = 1; m < n; m++)
		{
			while(scanf("%d%c%d%c",&i,&ch1,&j,&ch2))
			{
				b[i][j]=m;
				if(ch2=='\n')break;
			}
		}
		for(i = 1; i <= n; i++)
		{
			for(j = 1; j <= n; j++)
			{
				count=0;
				if(b[i][j]!=-2)
				{
					fill(i,j,b[i][j]);
					if(count!=n)goto wrong;		
				}
			}
		}
		printf("good\n");
		continue;
		wrong:;
		printf("wrong\n");
	}
}
