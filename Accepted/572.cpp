#include<iostream>
 
using namespace std;
int r,c;
char oil[111][111];
void flood(int x,int y)
{
	oil[x][y] = '*';
	if(x < r && oil[x+1][y] == '@')flood(x+1,y);
	if(y < c && oil[x][y+1] == '@')flood(x,y+1);
	if(x > 1 && oil[x-1][y] == '@')flood(x-1,y);
	if(y > 1 && oil[x][y-1] == '@')flood(x,y-1);
	if(x > 1 && y > 1 && oil[x-1][y-1] == '@')flood(x-1,y-1);
	if(x > 1 && y < c && oil[x-1][y+1] == '@')flood(x-1,y+1);
	if(x < r && y < c && oil[x+1][y+1] == '@')flood(x+1,y+1);
	if(x < r && y > 1 && oil[x+1][y-1] == '@')flood(x+1,y-1);
}
main()
{
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int count,i,j;
	char tmp[111]; 
	while(cin>>r>>c && r)
	{
		for(i = 1; i <= r; i++)
		{
			cin>>tmp;
			for(j = 1; j <= c; j++)
			{
				oil[i][j] = tmp[j-1];
			}
		}
		count = 0;
		for(i = 1; i <= r; i++)
		{
			for(j = 1; j <= c; j++)
			{
				if(oil[i][j] == '@')
				{
					count++;
					flood(i,j);
				}
			}
		}
		printf("%d\n",count);
	}
}

