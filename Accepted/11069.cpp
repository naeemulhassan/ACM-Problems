#include<iostream>
 
using namespace std;

main()
{
	int n,i,c[100];
	c[1] = 1;
	c[2] = 2;
	c[3] = 2;
	for(i = 4; i <= 76; i++)c[i] = c[i-2] + c[i-3];
	while(scanf("%d",&n) != EOF)printf("%d\n",c[n]);
}
