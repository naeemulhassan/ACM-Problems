#include<stdio.h>
int mat[20][60],v[20][20];
main()
{
	int tc,n,m,i,j,flag,count;
	scanf("%d",&tc);
	start:;
	while(tc--)
	{
		scanf("%d %d",&n,&m);
		for(i = 1; i <= n; i++)
			for(j = 1; j <= m; j++)scanf("%d",&mat[i][j]);
		for(i = 1; i <= n; i++)
			for(j = 1; j <= n; j++)v[i][j] = 0;
		for(j = 1; j <= m; j++)
		{
			flag = 0;
			count = 0;
			for(i = 1; i <= n; i++)
			{
				if(mat[i][j]==1)
				{
					count++;
					if(!flag)
					{
						flag = i;
					}
					else
					{
						if(v[flag][i]==1)
						{
							printf("No\n");
							goto start;
						}
						v[flag][i] = 1;						
						flag = 0;
					}
				}
			}
			if(count != 2)
			{
				printf("No\n");
				goto start;	
			}
		}
		printf("Yes\n");
	}	
}
