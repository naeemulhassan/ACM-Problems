#include<stdio.h> 
#include<stdlib.h>
main()
{
	int i,c1,c2,c3,ans;
	while(scanf("%d %d %d %d",&i,&c1,&c2,&c3))
	{
		if(c2 == 0 && c3 == 0)break;
		ans=1080;
		ans += (i-c1)>0 ? 9*(i-c1) : 9*(40+i-c1);
		ans += (c2-c1)>0 ? 9*(c2-c1) : 9*(40+c2-c1);
		ans += (c2-c3)>0 ? 9*(c2-c3) : 9*(40+c2-c3);
		printf("%d\n",ans);
	}
}
