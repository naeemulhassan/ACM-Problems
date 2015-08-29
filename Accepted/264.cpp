#include<stdio.h>
#include<math.h>
#include<iostream.h>

void main()
{
	int count  =0;
	double a;
	unsigned long x,n,b;
	while(cin>>n)
	{
		//if(feof(stdin))break;
		a = sqrt(2*n);
		x = floor(a);
		if(a > sqrt(x*(x+1)))x++;
		b = n - (x*(x-1)/2) - 1;
		if(x%2)printf("TERM %u IS %d/%d\n",n,(x-b),(1+b));
		else printf("TERM %u IS %d/%d\n",n,(1+b),(x-b));
	}
}