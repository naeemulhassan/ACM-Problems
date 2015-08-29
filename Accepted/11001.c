#include<stdio.h>
 
int main()
{
	int n,vt,v0;
	while(scanf("%d %d",&vt,&v0) && vt)
	{
		n = vt/v0/2;
		if((vt*n-v0*n*n)==(vt*(n+1)-v0*(n+1)*(n+1)))printf("0\n");
		else printf("%d\n",n);
	}
	return 0;
}
