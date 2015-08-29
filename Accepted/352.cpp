#include<stdio.h>
char f[30][30];
int count;
void fill(int i,int j)
{
	if(f[i][j] != '0')
	{
		if(f[i][j]=='1')count++;
		if(f[i-1][j-1]=='1')
		{
			f[i-1][j-1]='2';
			fill(i-1,j-1);
		}
		if(f[i-1][j]=='1')
		{
			f[i-1][j]='2';
			fill(i-1,j);
		}
		if(f[i-1][j+1]=='1')
		{
			f[i-1][j+1]='2';
			fill(i-1,j+1);
		}
		if(f[i][j-1]=='1')
		{
			f[i][j-1]='2';
			fill(i,j-1);
		}
		if(f[i][j+1]=='1')
		{
			f[i][j+1]='2';
			fill(i,j+1);
		}
		if(f[i+1][j-1]=='1')
		{
			f[i+1][j-1]='2';
			fill(i+1,j-1);
		}
		if(f[i+1][j]=='1')
		{
			f[i+1][j]='2';
			fill(i+1,j);
		}
		if(f[i+1][j+1]=='1')
		{
			f[i+1][j+1]='2';
			fill(i+1,j+1);
		}	
	}
}
main()
{
	int i,j,d,tc=1,m,n;
	while(scanf("%d",&d) != EOF)
	{
		getchar();
		count = 0;
		for(i = 1; i <= d; i++)
		{
			for(j = 1; j <= d; j++)f[i][j]=getchar();
			getchar();
		}
		for(i = 0; i <= d+1; i++)
		{
			f[i][0] = '0';
			f[0][i] = '0';
			f[i][d+1] = '0';
			f[d+1][i] = '0';
		}
		for(i = 1; i <= d; i++)
		{
			for(j = 1; j <= d; j++)
			{
				fill(i,j);
			}
		}
		printf("Image number %d contains %d war eagles.\n",tc++,count);
	}
}
