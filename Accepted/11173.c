#include<stdio.h>
 
main()
{
	unsigned long int k,tc,n;
	scanf("%u",&tc);
	while(tc)
	{
		scanf("%u %u",&n,&k);
		printf("%u\n",k ^ (k >> 1));
		tc--;
	}
}
