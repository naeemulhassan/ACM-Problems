#include<iostream>
 
using namespace std;

main()
{
	int cof[9],x,flag = 0,pflag = 0;
	char ans[1000];
	while(cin>>cof[8]>>cof[7]>>cof[6]>>cof[5]>>cof[4]>>cof[3]>>cof[2]>>cof[1]>>cof[0])
	{
		flag = 0;
		pflag = 0;
		for(x = 8; x >=0; x--)
		{
			if(cof[x])
			{
				if(cof[x] < 0)
				{
					cof[x] = cof[x]*-1;
					if(flag || pflag)cout<<" - ";
					else cout<<"-";
					if(!flag)
					{
						if(cof[x] != 1)cout<<cof[x];
						else if(cof[x] == 1 && x == 0)cout<<cof[x];		
						if(x == 1)cout<<"x";
						else if(x != 0)cout<<"x^"<<x;
						flag = 1;
					}
					else
					{
						if(cof[x] != 1)cout<<cof[x];
						else if(cof[x] == 1 && x == 0)cout<<cof[x];
						if(x == 1 )cout<<"x";
						else if(x != 0)cout<<"x^"<<x;
					}
				}
				else
				{
					if(flag || pflag)
					{
						cout<<" + ";
						if(cof[x] != 1)cout<<cof[x];
						else if(cof[x] == 1 && x == 0)cout<<cof[x];
						if(x == 1)cout<<"x";
						else if(x != 0)cout<<"x^"<<x;	
					}
					else
					{
						pflag = 1;
						flag = 1;
						if(cof[x] != 1)cout<<cof[x];
						else if(cof[x] == 1 && x == 0)cout<<cof[x];
						if(x == 1)cout<<"x";
						else if(x != 0)cout<<"x^"<<x;
					}								
				}				
			}
		}
		if(flag == 0 && pflag == 0)cout<<"0";
		cout<<endl;
	}
}
