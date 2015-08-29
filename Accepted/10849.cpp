#include<stdio.h>
#include<stdlib.h>

main()
{
	long int tc,x1,y1,x2,y2,n,i,m;
	scanf("%ld",&tc);
	while(tc--)
	{
		scanf("%ld %ld",&n,&m);
		while(n--)
		{
			scanf("%ld %ld %ld %ld",&x1,&y1,&x2,&y2);
			if((x1+y1)%2!=(x2+y2)%2)printf("no move\n");
			else if(!(x1>=1 && y1 >= 1 && x2 >= 1 && y2 >= 1 && x1 <= m && y1 <= m && x2 <= m && y2 <= m))printf("no move\n");
			else if(x1==x2 && y1==y2)printf("0\n");
			else if(abs(x1-x2)==abs(y1-y2))printf("1\n");
			else printf("2\n");
		}
	}
}
