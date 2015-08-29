#include<iostream>
#include<math.h>
 
using namespace std;

main()
{
	int z,i,m,l,count,x,y;
	y = 0;
	while(scanf("%d %d %d %d",&z,&i,&m,&l))
	{
		if(z == 0 && i == 0 && m== 0 && l == 0)break;
		y++;
		count = 1;
		l = x = (z%m*l%m+i%m)%m;
		do
		{	
			x = (z%m*x%m+i%m)%m;
			if(x == l)break;
			count++;
		}while(1);
		printf("Case %d: %d\n",y,count);
	}
}
