#include<stdio.h>
#include<math.h>
unsigned int number[1510];
int current,start;
unsigned int getmin(unsigned int n)
{
	unsigned int min = number[n]*2;;
	if(min <= number[current])min = number[n]*3;
	if(min <= number[current])min = number[n]*5;
	if(min <= number[current])
	{
		number[n] = 0;
		start++;
		return 0;
	}
	return min;
}
void main()
{
	int x = 0;
	unsigned int min,temp = 1;
	number[x] = 1;
	while(current != 1500)
	{
		x = start;
		min = 999999999;
		while(number[x])
		{
			temp = getmin(x);
			if(min>temp && temp)min = getmin(x);
			x++;	
		}
		number[x] = min;
		current++;
	}
	printf("The 1500'th ugly number is %u.\n",number[x-1]);
}