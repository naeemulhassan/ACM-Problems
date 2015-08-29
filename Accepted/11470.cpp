#include<iostream>
#include<cmath>
 
using namespace std;

int grid[9][9];
int sum[5];

main()
{
	int n,i,x,y,s,k,cas = 0,a;
	while(cin>>n && n)
	{
	for(i=0;i<n;i++)
		for(k=0;k<n;k++)
			cin>>grid[i][k];
		cas++;
		
		a = 0;
		s = n-1;
		k = (n-1)/2;
		while(a<=k)
		{
			for(x = a,y = a;y<=s;y++)
				sum[a] = sum[a] + grid[x][y] + grid[s][y];
			for(y = a,x = a+1;x<s;x++)
				sum[a] = sum[a] + grid[x][y] + grid[x][s];
			a++;
			s--;
		}
		cout<<"Case "<<cas<<":";
		k = 0;
		sum[a-1] = sum[a-1]/2;
		while(k<a)
		{
			cout<<" "<<sum[k];
			sum[k] = 0;
			k++;
		}
		cout<<endl;			
	}
}
