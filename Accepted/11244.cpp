#include<iostream>

using namespace std;

char sky[102][102];

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	int r,c,count,x,y;
	cin>>r>>c;
	while(r != 0)
	{
		for(x = 0; x <= r+1; x++)
			for(y = 0; y <= c+1; y++)
				sky[x][y] = '.';
		for(x = 1; x <= r; x++)
		{
			for(y = 1; y <= c; y++)
			{
				cin>>sky[x][y];
			}
		}
		count = 0;
		for(x = 1; x <= r; x++)
		{
			for(y = 1; y <= c; y++)
			{
				if(sky[x][y] == '*')
				{
					if(sky[x-1][y-1] == '.' && sky[x-1][y] == '.' && sky[x-1][y+1] == '.' && sky[x][y-1] == '.' && sky[x][y+1] == '.' && sky[x+1][y-1] == '.' && sky[x+1][y] == '.' && sky[x+1][y+1] == '.' )count++;
				}
			}
		}
		cout<<count<<endl;
		cin>>r>>c;
	}
}
