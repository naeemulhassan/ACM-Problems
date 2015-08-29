#include<stdio.h>
#include<math.h>
 
int main()
{
	unsigned long n,p;
	while(scanf("%ul",&n) != EOF)
	{
		p =1;
		do
		{
			p *= 9;
			if(p>=n)
			{
				printf("Stan wins.\n");
				break;
			}
			p *= 2;
			if(p>=n)
			{
				printf("Ollie wins.\n");
				break;	
			}
		}while(1);
	}
}
