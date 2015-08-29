#include<iostream>
 
using namespace std;
char paper[260][260] = {'O'};
char c;
int m,n;
void fill(int x,int y,char cf)
{
	if(x > 1 && paper[y][x-1] == cf)
	{
		paper[y][x-1] = c;
		fill(x-1,y,cf);
	}
	if(x < m && paper[y][x+1] == cf)
	{
		paper[y][x+1] = c;
		fill(x+1,y,cf);
	}
	if(y > 1 && paper[y-1][x] == cf)
	{
		paper[y-1][x] = c;
		fill(x,y-1,cf);
	}
	if(y < n && paper[y+1][x] == cf)
	{
		paper[y+1][x] = c;
		fill(x,y+1,cf);
	}
}
main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);
#endif
	char ch,cf,name[100];
	int i,j,x,y1,y2,y,x1,x2;
	while(scanf("%c",&ch))
	{		
		if(ch == 'X')
		{
			break;
		}
		else if(ch == 'I')
		{
			scanf("%d %d",&m,&n);
			for(i = 1; i <= n; i++)
				for(j = 1; j <= m; j++)
					paper[i][j] = 'O';
					
		}
		else if(ch == 'C')
		{
			for(i = 1; i <= n; i++)
				for(j = 1; j <= m; j++)
					paper[i][j] = 'O';
		}
		else if(ch == 'L')
		{
			//cin>>x>>y>>c;
			scanf("%d %d %c",&x,&y,&c);
			paper[y][x] = c;
		}
		else if(ch == 'V')
		{
			//cin>>x>>y1>>y2>>c;
			scanf("%d %d %d %c",&x,&y1,&y2,&c);
			if(y1<=y2)for(i = y1; i <= y2; i++)paper[i][x] = c;
			else for(i = y2; i <= y1; i++)paper[i][x] = c;
		}
		else if(ch == 'H')
		{
			//cin>>x1>>x2>>y>>c;
			scanf("%d %d %d %c",&x1,&x2,&y,&c);
			if(x1<=x2)for(i = x1; i <= x2; i++)paper[y][i] = c;
			else for(i = x2; i <= x1; i++)paper[y][i] = c;
		}
		else if(ch == 'K')
		{
			//cin>>x1>>y1>>x2>>y2>>c;
			scanf("%d %d %d %d %c",&x1,&y1,&x2,&y2,&c);		
			for(i = x1; i <= x2; i++)
				for(j = y1; j <= y2; j++)
					paper[j][i] = c;
		}
		else if(ch == 'F')
		{
			//cin>>x>>y>>c;
			scanf("%d %d %c",&x,&y,&c);
			cf = paper[y][x];
			paper[y][x] = c;
			if(cf != c)fill(x,y,cf);
		}
		else if(ch == 'S')
		{
			//cin>>name;
			scanf("%s",name);
			cout<<name<<endl;
			for(i = 1; i <= n; i++)
			{
				for(j = 1; j <= m; j++)
				{
					cout<<paper[i][j];
				}
				cout<<endl;
			}			
		}
	}
}
