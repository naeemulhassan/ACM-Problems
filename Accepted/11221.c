#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

char str[90010];
char mat[1100][1100];

int main()
{
	int T,count,l,i,j,k,flag,x;
	char ch;
	scanf("%d\n",&T);
	count = 1;
	while(T--)
	{
		x = 0;
		do
		{
			if(isalpha(ch = getchar()))str[x++] = ch;
		}while(ch != '\n' && ch != EOF);
		str[x] = '\0';
		for(i = 1; x >= i*i; i++)if(x == i*i)break;
		if(x = i*i)
		{
			x = i;
			for(i = 0,k = 0; i < x; i++)
			{
				for(j = 0; j < x; j++)
				{
					mat[i][j] = str[k++];
				}
			}
			
			flag = 0;
			for(i = x-1,k = 0; i >= 0; i--)
			{
				for(j = x-1; j >= 0; j--)
				{
					if(mat[i][j] != str[k++])
					{
						flag = 1;
						break;
					}
				}
				if(flag)break;
			}
			if(flag)
			{
				printf("Case #%d:\nNo magic :(\n",count);
				count++;
				continue;
				
			}
			for(i = x-1,k = 0; i >= 0; i--)
			{
				for(j = x-1; j >= 0; j--)
				{
					if(mat[j][i] != str[k++])
					{
						flag = 1;
						break;
					}
				}
				if(flag)break;
			}
			if(flag)
			{
				printf("Case #%d:\nNo magic :(\n",count);
				count++;
				continue;
				
			}
			for(i = 0,k = 0; i < x; i++)
			{
				for(j = 0; j < x; j++)
				{
					if(mat[j][i] != str[k++])
					{
						flag = 1;
						break;
					}
				}
				if(flag)break;
			}
			if(flag)
			{
				printf("Case #%d:\nNo magic :(\n",count);
				count++;
				continue;
				
			}
			if(!flag)printf("Case #%d:\n%d\n",count,x);
		}
		else
		{
			printf("Case #%d:\nNo magic :(\n",count);
		}
		count++;
	}
	return 0;
}
