#include<iostream>

using namespace std;

int arr[5];
char letter[5] = {'i','v','x','l','c'};
int val[] = {100,90,50,40,10,9,5,4,1};

void roman(int num)
{
	int point;
	if(num == 0)return;
	else if(num == 100)
	{
		arr[4] = arr[4] + 1;
		point = 100;
	}
	else if(num >= 90)
	{
		arr[2] = arr[2] + 1;
		arr[4] = arr[4] + 1;
		point = 90;
	}
	else if(num >= 50)
	{
		arr[3] = arr[3] + 1;
		point = 50;
	}
	else if(num >= 40)
	{
		arr[2] = arr[2] + 1;
		arr[3] = arr[3] + 1;
		point = 40;
	}
	else if(num >= 10)
	{
		arr[2] = arr[2] + 1;
		point = 10;
	}
	else if(num >= 9)
	{
		arr[0] = arr[0] + 1;
		arr[2] = arr[2] + 1;
		point = 9;
	}
	else if(num >=5)
	{
		arr[1] = arr[1] + 1;
		point = 5;
	}
	else if(num >= 4)
	{
		arr[0] = arr[0] + 1;
		arr[1] = arr[1] + 1;
		point = 4;
	}
	else if(num >= 1)
	{
		arr[0] = arr[0] + 1;
		point = 1;
	}
	roman(num-point);
}

main()
{
	int n,x;
	cin>>n;
	while(n)
	{
		for(x = 1; x <= n; x++)roman(x);
		cout<<n<<":";
		for(x = 0; x < 4; x++)
		{
			cout<<" "<<arr[x]<<" "<<letter[x]<<",";
		}
		cout<<" "<<arr[4]<<" "<<letter[4]<<endl;
		for(x = 0; x < 5; x++)arr[x] = 0;
		cin>>n;
	}
	
}
