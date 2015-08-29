#include<iostream>
 
using namespace std;
int x,y,tmp;
void extended_gcd(int a,int b)
{	
	if(!(a%b))
	{
		x = 0;
		y = 1;
		return;
	}
	else
	{
		extended_gcd(b,a%b);
		tmp = y;
		y = x - y*(a/b);
		x = tmp;
		
	}
}
main()
{
	int a,b,g,i,j,k;
	while(scanf("%d %d",&a,&b) != EOF)
	{
		extended_gcd(a,b);
		printf("%d %d %d\n",x,y,x*a+y*b);
	}
}
