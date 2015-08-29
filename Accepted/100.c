#include<stdio.h>
unsigned long calculate(unsigned long x)
{
	unsigned long n = 0;
	while(1)
	{
		n++;
		if(x == 1)return n;
		else if(x%2)x = 3*x+1;
		else x = x/2;
	}
}
void main()
{
	unsigned long x,y,temp,count,ox,oy;
	do
	{
		scanf("%U %U",&ox,&oy);
		if(feof(stdin))break;
		count = 0;
		x = ox;
		y = oy;
		if(x>y)
		{
			temp = x;
			x = y;
			y = temp;
		}
		for(;x<=y;x++)
		{
			temp = calculate(x);
			if(count < temp)count = temp;
		}
		printf("%u %u %u\n",ox,oy,count);
	}while(!feof(stdin));
}
