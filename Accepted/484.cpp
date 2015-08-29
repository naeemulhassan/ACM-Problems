#include<iostream>

using namespace std;

long int arr[100000][2];

main()
{
	/*freopen("input","r",stdin);
	freopen("output","w",stdout);*/
	long int val,count = 0,x;
	while(cin>>val)
	{
		for(x = 0; x < count; x++)
		{
			if(arr[x][0] == val)
			{
				arr[x][1]++;
				break;
			}
		}
		if(x == count)
		{
			arr[x][0] = val;
			arr[x][1]++;
			count++;	
		}
	}
	for(x = 0; x < count; x++)
	{
		if(arr[x][1])cout<<arr[x][0]<<" "<<arr[x][1]<<endl;
	}
}
