#include<iostream.h>
#include<math.h>

char fd[102][102];
int n,m;

int check(int x,int y)
{
	int count = 0;
	if(fd[x-1][y-1] == '*')count++;
	if(fd[x-1][y] == '*')count++;
	if(fd[x-1][y+1] == '*')count++;
	if(fd[x][y-1] == '*')count++;
	if(fd[x][y+1] == '*')count++;
	if(fd[x+1][y-1] == '*')count++;
	if(fd[x+1][y] == '*')count++;
	if(fd[x+1][y+1] == '*')count++;
	return count + 48;
}

void main()
{
	int x,y,nc = 0;
	char rs[110][110];
	while(cin>>n>>m)
	{
		if(n == 0 && m == 0)break;
		for(x = 1; x <= 101; x++)for(y = 1; y <= 101; y++)fd[x][y] = '\0';
		nc++;
		for(x = 1; x <= n; x++)for(y = 1; y <= m; y++)cin>>fd[x][y];
		
		for(x = 1; x <= n; x++)
		{
			for(y = 1; y <= m; y++)
			{
				
				if(fd[x][y] != '*')rs[x][y] = check(x,y);
				else rs[x][y] = '*';
			}
		}
		if(nc != 1)cout<<"\nField #"<<nc<<":"<<endl;
		else cout<<"Field #"<<nc<<":"<<endl;
		for(x = 1; x <= n; x++)
		{
			for(y = 1; y <= m; y++)
			{
				cout<<rs[x][y];
			}
			cout<<endl;
		}
	}
}