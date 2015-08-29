#include<iostream>
#include<cstring> 

using namespace std;
char s1[110][35],s2[110][35],ch;
int p = 0;
int m,n,k,l;
int c[110][110];
int b[110][110];
void printlcs(int i,int j)
{
	if(i == 0 || j == 0)return;
	if(b[i][j] == 0)
	{
		printlcs(i-1,j-1);
		strcpy(s2[l],s1[i-1]);
		l++;
	}
	else if(b[i][j] == 1)printlcs(i-1,j);
	else printlcs(i,j-1);
}
main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	
	int i,j;
	m = n = i = j = k = l = 0;
	while((ch=getchar()) != EOF)
	{
		if(ch == '#')
		{
			getchar();
			if(p == 0)
			{
				p = 1;
				m = j;
				i = 0;
				j = 0;
				l = 0;
			}
			else if(p == 1)
			{
				p = 0;
				n = j;
				i = 0;
				j = 0;			
				for(i = 0; i <= m ; i++)c[i][0] = 0;
				for(j = 0; j <= n ; j++)c[0][j] = 0;
				for(i = 1; i <= m; i++)
				{
					for(j = 1; j <= n; j++)
					{					
						if(strcmp(s1[i-1],s2[j-1]) == 0)
						{
							c[i][j] = c[i-1][j-1]+1;
							b[i][j] = 0;
						}
						else if(c[i-1][j] >= c[i][j-1])
						{
							c[i][j] = c[i-1][j];
							b[i][j] = 1;
						}
						else
						{
							c[i][j] = c[i][j-1];
							b[i][j] = 2;
						}
					}
				}
				l = 0;				
				printlcs(m,n);
				for(i = 0; i < l-1; i++)printf("%s ",s2[i]);
				printf("%s\n",s2[i]);			
				i = j = 0;
				m = n = 0;
				l = 0;			
			}			
		}
		else if((ch == ' ' || ch == '\n') && l == 1)
		{
			if(p == 0)
			{
				s1[j][i] = '\0';
				i = 0;
				j++;
			}
			else
			{
				s2[j][i] = '\0';
				i = 0;
				j++;
			}
			l = 0;
		}
		else if(ch <= 'z' && ch >= 'a')
		{
			if(p == 0)
			{
				s1[j][i] = ch;
				i++;
			}
			else
			{
				s2[j][i] = ch;
				i++;
			}
			l = 1;
		}
	}
}
