#include<stdio.h>
#include<math.h>
 
main()
{
	int tc,s,e,ans;
	double d;
	char str[1000];
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d %d",&s,&e);
		if(e-s==0)
		{
			printf("0\n");
			continue;
		}
		d = sqrt(e-s);
		ans = floor(d);
		if(d-ans>=0.5)ans = ans*2+1;
		else if(d==ans)ans = ans*2-1;
		else ans *=2;
		printf("%d\n",ans);
	}
}
