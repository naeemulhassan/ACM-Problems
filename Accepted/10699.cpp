#include<iostream>
#include<math.h>

using namespace std;
bool is_prime(unsigned int i)
{	
	unsigned int root = (unsigned int)sqrt(i)+1,j;
	for(j = 2; j <= root; j++)if(!(i%j))return false;
	return true;
}
unsigned int prime[1000000];
main()
{
	unsigned int i,num,factor;
	prime[2] = 1;
	prime[3] = 1;
	for(i = 5; i < 1000000; i++)if(is_prime(i))prime[i] = 1;
	while(scanf("%u",&num) && num)
	{
		printf("%u : ",num);
		factor = 0;
		for(i = 2; i <= num; i++)
		{
			if(prime[i] && (num%i) == 0)
			{
				factor++;
				num /= i;	
			}
		}
		printf("%u\n",factor);
	}
}

