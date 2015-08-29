#include<iostream>

using namespace std;

main()
{
	/*freopen("input","r",stdin);	
	freopen("output","w",stdout);*/
	int W,H,N,x1,y1,x2,y2,i,j,t;
	bool arr[510][510];
	unsigned long int count;
	while(cin>>W>>H>>N)
	{
		count = 0;
		if(W == 0 && H == 0 && N == 0)break;
		for(i = 1; i <= 500; i++)
		{
			for(j = 1; j <= 500; j++)
			{
				if(arr[i][j]==true)arr[i][j] = false;
			}
		}
		while(N--)
		{
			cin>>x1>>y1>>x2>>y2;
			if(x1 > x2)
			{
				t = x1;
				x1 = x2;
				x2 = t;
			}
			if(y1 > y2)
			{
				t = y1;
				y1 = y2;
				y2 = t;
			}
			for(i = x1; i <= x2; i++)
			{
				for(j = y1; j <= y2; j++)
				{
					if(arr[j][i] == false)arr[j][i] = true;
				}
			}
		}
		for(i = 1; i <= W; i++)
		{
			for(j = 1; j <= H; j++)
			{
				if(arr[j][i] == false)count++;
			}
		}
		if(count == 0)cout<<"There is no empty spots.\n";
		else if(count == 1)cout<<"There is one empty spot.\n";
		else cout<<"There are "<<count<<" empty spots.\n";
	}
}
