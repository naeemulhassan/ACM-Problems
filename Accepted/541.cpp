#include<iostream>
 
using namespace std;
 
main()
{
	int n,i,j,mat[100][100],sum,ci,cj,nj,ni;
	while(cin>>n && n)
	{
		for(i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				cin>>mat[i][j];		
		ci = 0;
		cj = 0;
		nj = 0;
		ni = 0;
		for(i = 0; i < n; i++)
		{
			sum = 0;
			for(j = 0; j < n; j++)
			{
				sum = sum + mat[i][j];
			}
			if(sum%2)
			{
				ci++;
				ni = i+1;
			} 
		}
		for(j = 0; j < n; j++)
		{
			sum = 0;
			for(i = 0; i < n; i++)
			{
				sum = sum + mat[i][j];
			}
			if(sum%2)
			{
				cj++;
				nj = j+1;
			}
		}
		if(ci > 1 || cj > 1)cout<<"Corrupt\n";
		else if(ci == 0 && cj == 0)cout<<"OK\n";
		else if(ci == 1 && cj == 1)cout<<"Change bit ("<<ni<<","<<nj<<")\n";
	}
} 
