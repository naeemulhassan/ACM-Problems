#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string.h>

void main()
{
	char n1[256],n2[256],mn1,mn2;
	int l1,l2,x,b1,b2,y,z,found;
	unsigned long val[37],n1v,n2v;
	while(cin>>n1>>n2)
	{
		mn1 = mn2 = 0;
		l1 = strlen(n1) - 1;
		l2 = strlen(n2) - 1;
		found = 0;
		
		for(x = l1; x >= 0; x--)
		{
			if(n1[x] > mn1)mn1 = n1[x];
		}
		
		for(x = l2; x >= 0; x--)
		{
			if(n2[x] > mn2)mn2 = n2[x];
		}
		
		if(mn1 <= '9') b1 = mn1 - 47;
		else b1 = mn1 -54;

		if(mn2 <= '9') b2 = mn2 - 47;
		else b2 = mn2 -54;
		
		
		if(b1 == 1 && b2 == 1)
		{
			cout<<n1<<" (base "<<"2"<<") = "<<n2<<" (base "<<"2"<<")"<<endl;
			found = 1;
			continue;
		}

		for(x = b1; x <= 36; x++ )
		{
			for(y = l1,n1v = 0; y >= 0; y--)
			{
				if(n1[y] >= 'A')n1v = n1v + (n1[y] - 55)*pow(x,l1 - y);
				else n1v = n1v + (n1[y] - 48)*pow(x,l1 - y);
			}
			val[x] = n1v;
		}

		for(x = b2; x <= 36; x++ )
		{
			for(y = l2,n2v = 0; y >= 0; y--)
			{
				if(n2[y] >= 'A')n2v = n2v + (n2[y] - 55)*pow(x,l2 - y);
				else n2v = n2v + (n2[y] - 48)*pow(x,l2 - y);
			}
			
			for(z = b1; z <= 36; z++)
			{
				if(val[z] == n2v)
				{
					cout<<n1<<" (base "<<z<<") = "<<n2<<" (base "<<x<<")"<<endl;
					found = 1;
					break;
				}
			}
			if(found)break;
		}
		if(!found)cout<<n1<<" is not equal to "<<n2<<" in any base 2..36"<<endl;
	}
}