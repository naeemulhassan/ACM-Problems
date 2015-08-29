#include<iostream>
#include<string.h>
#include<cctype>
 
using namespace std;

main()
{
	/*freopen("input","r",stdin);	
	freopen("output","w",stdout);*/
	int Case,r,c,sr,sc,d,x,y;
	char maze[70][70],ch,dir[4] = {'N','E','S','W'};
	scanf("%d",&Case);
	while(Case--)
	{
		scanf("%d %d\n",&r,&c);
		d = 0;
		x = 1;
		y = 1;
		while(x<=r)
		{
			ch = getchar();
			if(ch == '\n')
			{
				x++;
				y = 1;
			}
			else
			{
				maze[x][y++] = ch;
			}
		}
		cin>>sr>>sc;
		while((ch = getchar()) != 'Q')
		{
			if(isspace(ch) || ch == '\n')continue;
			else if(ch == 'F')
			{
				if(d == 0 && maze[sr-1][sc] == ' ')sr--;
				else if(d == 1 && maze[sr][sc+1] == ' ')sc++;
				else if(d == 2 && maze[sr+1][sc] == ' ')sr++;
				else if(d == 3 && maze[sr][sc-1] == ' ')sc--;
			}
			else if(ch == 'R')d = (d + 1)%4;
			else if(ch == 'L')d = (d + 3)%4;
		}
		cout<<sr<<" "<<sc<<" "<<dir[d]<<endl;
		if(Case != 0)cout<<endl;
	}
}
