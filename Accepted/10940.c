#include<stdio.h>

int main()
{
	int num,N;
	while(scanf("%d",&num) && num)
	{
		N = (num<<1) -1;
		while(N > num)N = (N-num)<<1;
		printf("%d\n",N);
	}
}
