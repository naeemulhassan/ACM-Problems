#include<iostream.h>
#include<stdio.h>
#include<math.h>

void main()
{
	unsigned long l,u,x,temp,number,temp2;
	int n,div,count,num,max,root;
	cin>>num;
	while(num--)
	{
		cin>>l>>u;
		number = l;
		max = 1;
		if(u-l>1 && u >10)
		{
			for(x = l; x <= u; x++)
			{
				temp = x;
				div = 1;
				root = sqrt(x);
				for(n = 2;n<=root; n++)
				{
					count = 0;
					while(!(temp%n))
					{
						count++;
						temp = temp/n; 
					}
					div = div * (count+1);
				}
				if(max<div)
				{
					max = div;
					number = x;
				}
			}
		}
		else if((u-l)<=1 || u <= 10)
		{
			for(x = l; x <= u; x++)
			{		
				temp = x;
				temp2 = 1;
				div = 1;
				for(n = 2;temp2!=x; n++)
				{
					count = 0;
					while(!(temp%n))
					{
						count++;
						temp = temp/n; 
					}
					temp2 = temp2*pow(n,count);
					div = div * (count+1);
				}
				if(max<div)
				{
					max = div;
					number = x;
				}
			}
		}
		printf("Between %u and %u, %u has a maximum of %d divisors.\n",l,u,number,max);
	}
}