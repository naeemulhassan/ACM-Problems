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
	unsigned int i,num,half;
	prime[2] = 1;
	prime[3] = 1;
	for(i = 5; i < 1000000; i++)if(is_prime(i))prime[i] = 1;
	while(scanf("%u",&num) && num)
	{
		half = num/2 + 2;
		for(i = 2; i < half; i++)
		{
			if(prime[i] && prime[num-i])
			{
				printf("%u:\n%u+%u\n",num,i,num-i);
				break;
			}
		}
		if(i == half)printf("%u:\nNO WAY!\n",num);
	}
}

