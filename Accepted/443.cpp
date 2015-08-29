#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int h[100000];
main()
{
	int w,x,y,z,n,t,c=1;
	char *suf;
	for(w = 0; w <= 31; w++)
	{
		for(x = 0; x <= 19; x++)
		{
			for(y = 0; y <= 13; y++)
			{
				for(z = 0; z <= 11; z++)
				{
					t = pow(2,w)*pow(3,x)*pow(5,y)*pow(7,z);	
					if(t>0 && t <2000000001)h[c++] = t;					
				}
			}
		}
	}
	sort(&h[1],&h[c]);
	while(scanf("%d",&n) && n)
	{
		if ((n%100 - n%10) == 10)
			suf = "th";
		else
		switch ( n%10 )
		{
			case 1: suf = "st"; break;
			case 2: suf = "nd"; break;
			case 3: suf = "rd"; break;
			default: suf = "th"; break;
		}
		printf("The %d%s humble number is %d.\n",n,suf,h[n]);
	}
}
