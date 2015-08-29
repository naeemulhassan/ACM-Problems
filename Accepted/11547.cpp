#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int tc,n;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d",&n);
		printf("%d\n",abs(((315*n+36962)%100)/10));
	}
} 
