#include<iostream>
#include<cctype>
 
using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	char s1[1010],s2[1010],ch;
	char w1[1010][30],w2[1010][30];
	int m,n,d,x,y,i,j,k,l,count = 0;
	int c[1010][1010];
	while(gets(s1))
	{
		gets(s2);
		k = strlen(s1);
		l = strlen(s2);
		if(k == 0 || l == 0)
		{
			printf("%2d. Blank!\n",++count);
			continue;
		}
		s1[k] = '.';
		s2[l] = '.';
		k++;
		l++;
		s1[k] = s2[l] = '\0';
		m = 0;
		i = 0;
		j = 0;
		d = 0;
		for(x = 0; x < k; x++)
		{
			ch = s1[x];
			if(isalnum(ch))
			{
				w1[j][i++] = ch;
				d = 1;
			}
			else if(d==1)
			{
				w1[j++][i] = '\0';
				i = 0;
				d = 0;
			}
		}
		m = j;
		i = 0;
		j = 0;
		n = 0;
		d = 0;
		for(x = 0; x < l; x++)
		{
			ch = s2[x];
			if(isalnum(ch))
			{
				w2[j][i++] = ch;	
				d = 1;
			}
			else if(d == 1)
			{
				w2[j++][i] = '\0';
				i = 0;
				d = 0;
			}
		}
		n = j;		
		for(i = 0; i <= m; i++)c[i][0] = 0;
		for(j = 0; j <= n; j++)c[0][j] = 0;
		for(i = 1; i <= m; i++)
		{
			for(j = 1; j <= n; j++)
			{
				if(strcmp(w1[i-1],w2[j-1]) == 0)c[i][j] = c[i-1][j-1]+1;
				else if(c[i-1][j] >= c[i][j-1])c[i][j] = c[i-1][j];
				else c[i][j] = c[i][j-1];
			}
		}
		printf("%2d. Length of longest match: %d\n",++count,c[m][n]);
	}
}
