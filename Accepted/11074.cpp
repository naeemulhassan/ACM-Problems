#include<stdio.h>

main()
{	
	int s,t,n,i=1,y,x,z,w,h;
	while(scanf("%d %d %d",&s,&t,&n) && n)
	{	
		h = s*n+(n+1)*t;
		printf("Case %d:\n",i++);
		for(z = 0; z < n; z++)
		{
			for(x = 0; x < t; x++)
			{				
				for(y = 0; y < h; y++)printf("*");
				printf("\n");
			}
			for(y = 0; y < s; y++)
			{
				for(w = 0; w < n; w++)
				{
					for(x = 0; x < t; x++)printf("*");
					for(x = 0; x < s; x++)printf(".");
				}
				for(x = 0; x < t; x++)printf("*");
				printf("\n");
			}			
		}
		for(x = 0; x < t; x++)
		{
			for(y = 0; y < h; y++)printf("*");
			printf("\n");
		}
		printf("\n");
	}
}

