#include<iostream>

using namespace std;
int board[11][11],tu[11][11]; 
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);
#endif
	int tc,n,i,j,blast;
	char ch,tmp[20];
	cin>>tc;
	while(tc--)
	{
		cin>>n;
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				cin>>ch;
				board[i][j] = ch == '*' ? 1 : 0;
			}				
		}
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				cin>>ch;
				tu[i][j] = ch == 'x' ? 0 : -1;
			}				
		}
		n--;
		blast = 0;
		if(n==0)
		{
			if(board[0][0] == 1 && tu[0][0] == 0)blast = 1;
		}
		if(n>=1)
		{
			if(board[0][0] == 1 && tu[0][0] == 0)blast = 1;
			else if(tu[0][0] == 0)tu[0][0] += board[0][1] + board[1][0] + board[1][1];
			if(board[n][n] == 1 && tu[n][n] == 0)blast = 1;
			else if(tu[n][n] == 0)tu[n][n] += board[n][n-1] + board[n-1][n] + board[n-1][n-1];
			if(board[n][0] == 1 && tu[n][0] == 0)blast = 1;
			else if(tu[n][0] == 0)tu[n][0] += board[n-1][0] + board[n][1] + board[n-1][1];
			if(board[0][n] == 1 && tu[0][n] == 0)blast = 1;
			else if(tu[0][n] == 0)tu[0][n] += board[0][n-1] + board[1][n-1] + board[1][n];
		}
		if(n>=2)
		{
			for(i = 1; i <= n-1; i++)
			{
				if(board[i][0] == 1 && tu[i][0] == 0)blast = 1;
				else if(tu[i][0] == 0)
					tu[i][0] += board[i-1][0]+board[i-1][1]+board[i][1]+board[i+1][1]+board[i+1][0];		
			}
			for(i = 1; i <= n-1; i++)
			{
				if(board[0][i] == 1 && tu[0][i] == 0)blast = 1;
				else if(tu[0][i] == 0)
					tu[0][i] += board[0][i-1]+board[1][i-1]+board[1][i]+board[1][i+1]+board[0][i+1];	
			}			
			for(i = 1; i <= n-1; i++)
			{
				if(board[i][n] == 1 && tu[i][n] == 0)blast = 1;
				else if(tu[i][n] == 0)
					tu[i][n] += board[i-1][n]+board[i-1][n-1]+board[i][n-1]+board[i+1][n-1]+board[i+1][n];
			}			
			for(i = 1; i <= n-1; i++)
			{
				if(board[n][i] == 1 && tu[n][i] == 0)blast = 1;
				else if(tu[n][i] == 0)
					tu[n][i] += board[n][i-1]+board[n-1][i-1]+board[n-1][i]+board[n-1][i+1]+board[n][i+1];	
			}	
			
			for(i = 1; i <= n-1; i++)
			{
				for(j = 1; j <= n-1; j++)
				{
					if(board[i][j] == 1 && tu[i][j] == 0)blast = 1;
					else if(tu[i][j] == 0)
					{
						tu[i][j] += board[i-1][j-1] + board[i-1][j] + board[i-1][j+1] + board[i][j-1] + board[i][j+1] + board[i+1][j-1] + board[i+1][j] + board[i+1][j+1] ;
					}
				}
			}				
		}						
		for(i = 0; i <= n; i++)
		{
			for(j = 0; j <= n; j++)
			{
				if(blast == 1 && board[i][j] == 1)printf("*");
				else if(tu[i][j] != -1)
				{
					printf("%d",tu[i][j]);
				}
				else printf(".");	
				board[i][j] = 0;
				tu[i][j] = -1;
			}				
			printf("\n");
		}
		if(tc)printf("\n");
	}
}

