#include<iostream>
#include<math.h>

using namespace std;

main()
{
	int num,x,y,z;
	while(scanf("%d",&num) && num)
	{
		if(num < 0)
		{
			printf("%d = -1",num);
			x = abs(num);
			z = sqrt(x);
			if(z%2 == 0)z++;
			if(x%2 == 0)
			{
				while(!(x%2))
				{
					printf(" x 2");
					x /= 2;
				}
			}
			for(y = 3; x > 1 && y <= z; y+=2)
			{
				while(!(x%y))
				{
					printf(" x %d",y);
					x /= y;
				}
			}
			if(x > 1 && y > z)
			{
				printf(" x %d\n",x);
				continue;
			}
			else if(x > 1)
			{
				printf(" x %d",x);
			}
		}
		else
		{
			x = num;
			z = sqrt(x);
			if(z%2 == 0)z++;
			if(x%2 == 0)
			{				
				printf("%d = 2",x);
				x /= 2;
				y = 3;
				while(x%2 == 0)
				{
					printf(" x 2");
					x /= 2;
				}
			}
			else
			{
				for(y = 3; x > 1 && y <= z; y+=2)
				{
					if(x%y == 0)
					{
						printf("%d = %d",x,y);
						x /= y;
						break;
					}
				}
				if(y > z)
				{
					printf("%d = %d\n",x,x);
					continue;
				}
			}			
			for(; x > 1 && y <= z; y+=2)
			{
				while(!(x%y))
				{
					printf(" x %d",y);
					x /= y;
				}
			}
			if(x>1)printf(" x %d",x);
		}
		printf("\n");
	}
}