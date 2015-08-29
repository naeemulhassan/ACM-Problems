#include<iostream.h>
#include<stdio.h>
 
using namespace std;

main()
{
	int n,c,sum;
	float avg;
	int arr[1000],x;
	
	cin>>c;
	while(c--)
	{
		cin>>n;
		sum = 0;
		for(x = 0; x < n; x++)
		{
			cin>>arr[x];
			sum = sum + arr[x];
		}
		avg = sum / n;
		sum = 0;
		for(x = 0; x < n; x++)
		{
			if(arr[x] > avg)sum++;
		}
		avg = (sum * 100 ) / float(n);
		printf("%.3f\%\n",avg);
	}
	return 0;
}
