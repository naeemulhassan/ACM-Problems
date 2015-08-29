#include<iostream>
 
using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int s,n,l,i,j,k,m;
	char num[20],d[30][200];
	while(scanf("%d %s",&s,num))
	{
		if(s == 0 && strcmp(num,"0") == 0)break;
		l = strlen(num);	
		m = 1;
		n = 1;
		for(i = 0; i < l ; i++)
		{
			if(num[i] == '0')
			{
				d[m][n] =  ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n] = '|';
				d[k][n] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n] = '|';
				d[2*s+3][n] =  ' ';
				for(j = n+1; j < n+1+s; j++)d[m][j] = '-';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+1; k < s+1+m; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[k][j] = ' ';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+2+s; k < 2*s+3; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[2*s+3][j] = '-';
				d[m][s+n+1]= ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n+s+1] = '|';
				d[k][j] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n+s+1] = '|';
				d[2*s+3][s+n+1]= ' ';
				if(i != l-1)
				{
					for(k=m; k <= 2*s+3; k++)d[k][n+s+2] =  ' ';
					n = n+s+3;
				}
				else n = n+s+2;		
			}
			else if(num[i] == '1')
			{
				d[m][n] =  ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n] = ' ';
				d[k][n] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n] = ' ';
				d[2*s+3][n] =  ' ';
				for(j = n+1; j < n+1+s; j++)d[m][j] = ' ';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+1; k < s+1+m; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[k][j] = ' ';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+2+s; k < 2*s+3; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[2*s+3][j] = ' ';
				d[m][s+n+1]= ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n+s+1] = '|';
				d[k][j] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n+s+1] = '|';
				d[2*s+3][s+n+1]= ' ';
				if(i != l-1)
				{
					for(k=m; k <= 2*s+3; k++)d[k][n+s+2] =  ' ';
					n = n+s+3;
				}
				else n = n+s+2;		
			}
			else if(num[i] == '2')
			{
				d[m][n] =  ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n] = ' ';
				d[k][n] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n] = '|';
				d[2*s+3][n] =  ' ';
				for(j = n+1; j < n+1+s; j++)d[m][j] = '-';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+1; k < s+1+m; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[k][j] = '-';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+2+s; k < 2*s+3; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[2*s+3][j] = '-';
				d[m][s+n+1]= ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n+s+1] = '|';
				d[k][j] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n+s+1] = ' ';
				d[2*s+3][s+n+1]= ' ';
				if(i != l-1)
				{
					for(k=m; k <= 2*s+3; k++)d[k][n+s+2] =  ' ';
					n = n+s+3;
				}
				else n = n+s+2;		
			}
			else if(num[i] == '3')
			{
				d[m][n] =  ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n] = ' ';
				d[k][n] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n] = ' ';
				d[2*s+3][n] =  ' ';
				for(j = n+1; j < n+1+s; j++)d[m][j] = '-';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+1; k < s+1+m; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[k][j] = '-';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+2+s; k < 2*s+3; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[2*s+3][j] = '-';
				d[m][s+n+1]= ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n+s+1] = '|';
				d[k][j] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n+s+1] = '|';
				d[2*s+3][s+n+1]= ' ';
				if(i != l-1)
				{
					for(k=m; k <= 2*s+3; k++)d[k][n+s+2] =  ' ';
					n = n+s+3;
				}
				else n = n+s+2;		
			}
			else if(num[i] == '4')
			{
				d[m][n] =  ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n] = '|';
				d[k][n] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n] = ' ';
				d[2*s+3][n] =  ' ';
				for(j = n+1; j < n+1+s; j++)d[m][j] = ' ';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+1; k < s+1+m; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[k][j] = '-';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+2+s; k < 2*s+3; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[2*s+3][j] = ' ';
				d[m][s+n+1]= ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n+s+1] = '|';
				d[k][j] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n+s+1] = '|';
				d[2*s+3][s+n+1]= ' ';
				if(i != l-1)
				{
					for(k=m; k <= 2*s+3; k++)d[k][n+s+2] =  ' ';
					n = n+s+3;
				}
				else n = n+s+2;		
			}
			else if(num[i] == '5')
			{
				d[m][n] =  ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n] = '|';
				d[k][n] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n] = ' ';
				d[2*s+3][n] =  ' ';
				for(j = n+1; j < n+1+s; j++)d[m][j] = '-';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+1; k < s+1+m; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[k][j] = '-';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+2+s; k < 2*s+3; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[2*s+3][j] = '-';
				d[m][s+n+1]= ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n+s+1] = ' ';
				d[k][j] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n+s+1] = '|';
				d[2*s+3][s+n+1]= ' ';
				if(i != l-1)
				{
					for(k=m; k <= 2*s+3; k++)d[k][n+s+2] =  ' ';
					n = n+s+3;
				}
				else n = n+s+2;		
			}
			else if(num[i] == '6')
			{
				d[m][n] =  ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n] = '|';
				d[k][n] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n] = '|';
				d[2*s+3][n] =  ' ';
				for(j = n+1; j < n+1+s; j++)d[m][j] = '-';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+1; k < s+1+m; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[k][j] = '-';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+2+s; k < 2*s+3; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[2*s+3][j] = '-';
				d[m][s+n+1]= ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n+s+1] = ' ';
				d[k][j] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n+s+1] = '|';
				d[2*s+3][s+n+1]= ' ';
				if(i != l-1)
				{
					for(k=m; k <= 2*s+3; k++)d[k][n+s+2] =  ' ';
					n = n+s+3;
				}
				else n = n+s+2;		
			}
			else if(num[i] == '7')
			{
				d[m][n] =  ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n] = ' ';
				d[k][n] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n] = ' ';
				d[2*s+3][n] =  ' ';
				for(j = n+1; j < n+1+s; j++)d[m][j] = '-';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+1; k < s+1+m; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[k][j] = ' ';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+2+s; k < 2*s+3; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[2*s+3][j] = ' ';
				d[m][s+n+1]= ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n+s+1] = '|';
				d[k][j] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n+s+1] = '|';
				d[2*s+3][s+n+1]= ' ';
				if(i != l-1)
				{
					for(k=m; k <= 2*s+3; k++)d[k][n+s+2] =  ' ';
					n = n+s+3;
				}
				else n = n+s+2;		
			}
			else if(num[i] == '8')
			{
				d[m][n] =  ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n] = '|';
				d[k][n] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n] = '|';
				d[2*s+3][n] =  ' ';
				for(j = n+1; j < n+1+s; j++)d[m][j] = '-';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+1; k < s+1+m; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[k][j] = '-';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+2+s; k < 2*s+3; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[2*s+3][j] = '-';
				d[m][s+n+1]= ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n+s+1] = '|';
				d[k][j] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n+s+1] = '|';
				d[2*s+3][s+n+1]= ' ';
				if(i != l-1)
				{
					for(k=m; k <= 2*s+3; k++)d[k][n+s+2] =  ' ';
					n = n+s+3;
				}
				else n = n+s+2;		
			}
			else if(num[i] == '9')
			{
				d[m][n] =  ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n] = '|';
				d[k][n] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n] = ' ';
				d[2*s+3][n] =  ' ';
				for(j = n+1; j < n+1+s; j++)d[m][j] = '-';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+1; k < s+1+m; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[k][j] = '-';
				for(j = n+1; j < n+1+s; j++)
					for(k = m+2+s; k < 2*s+3; k++)d[k][j]= ' ';
				for(j = n+1; j < n+1+s; j++)d[2*s+3][j] = '-';
				d[m][s+n+1]= ' ';
				for(k = m+1; k < s+m+1 ; k++)d[k][n+s+1] = '|';
				d[k][j] =  ' ';
				for(k = k+1; k < 2*s+3 ; k++)d[k][n+s+1] = '|';
				d[2*s+3][s+n+1]= ' ';
				if(i != l-1)
				{
					for(k=m; k <= 2*s+3; k++)d[k][n+s+2] =  ' ';
					n = n+s+3;
				}
				else n = n+s+2;		
			}
		}
		for(k = 1; k <= 2*s+3; k++)
		{
			for(j = 1; j < n; j++)
			{
				printf("%c",d[k][j]);
			}
			printf("\n");
		}
		printf("\n");				
	}
}
