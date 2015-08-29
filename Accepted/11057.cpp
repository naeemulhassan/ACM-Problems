#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
 
using namespace std;

vector<long> list;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif	
	long n,tmp,sum,x,first,last,mid,target;
	while(cin>>n)
	{		
		while(n--)
		{
			scanf("%ld",&tmp);
			list.push_back(tmp);				
		}
		scanf("%ld",&sum);
		sort(list.begin(),list.end());
		tmp = list.size();
		x = sum;
		for(n = 0; n <= tmp; n++)
		{
			first = n+1;
			last = list.size()-1;			
			target = sum-list[n];
			while(first<=last) //while we haven’t reached the end of
			{
				mid = (first+last)/2; //rule out half of the data by spliting the array
				if(list[mid]==target) //if we have found the target
				{
					if((target-list[n])<=x)x = target-list[n];
					break;
				}
				else if(list[mid]>target)
					last = mid-1; //the desired value is in the lower part of the array
				else
					first = mid+1;//the desired value is in the upper part of the array
			}				
		}

		//printf("Peter should buy books whose prices are %ld and %ld.\n\n",(sum-x)/2,(sum+x)/2);
		cout<<"Peter should buy books whose prices are "<<(sum-x)/2<<" and "<<(sum+x)/2<<".\n\n";
		list.clear();
	}
	
}
