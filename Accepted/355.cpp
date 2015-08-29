#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	char num[100],num2[100];
	int bt,bf,a,b,c,l,d;
	unsigned long long int temp;
	while(cin>>bf>>bt>>num)
	{
		l = strlen(num);
		c = 0;
		for(b = 0; b < l; b++)
		{
			if(isdigit(num[b]))d = num[b] - 48;
			else if(isalpha(num[b]))d = num[b] - 'A' + 10;
			if(d >= bf)
			{
				c = 100;
				break;
			}
		}
		if(c == 100)
		{
			printf("%s is an illegal base %d number\n",num,bf);
			continue;
		}
		temp = 0;
		for(b = 0; b < l; b++)
		{
			if(isdigit(num[b]))d = num[b] - 48;
			else if(isalpha(num[b]))d = num[b] - 'A' + 10;
			temp = temp*bf+d;
		}
		b = 0;
		while(temp >= bt)
		{
			a = temp%bt;
			if(a >= 0 && a <= 9)num2[b] = a + 48;
			else if(a >= 10 && a <= 15)num2[b] = 'A'+a-10;
			temp = (unsigned long long int)floor(temp / bt);
			b++;
		}
		if(temp >= 0 && temp <= 9)num2[b] = temp + 48;
		else if(temp >= 10 && temp <= 15)num2[b] = 'A'+temp-10;
		num2[b+1] = '\0';
		reverse(&num2[0],&num2[b+1]);
		printf("%s base %d = %s base %d",num,bf,num2,bt);
		cout<<endl;
	}
}
