#include<iostream>
#include<algorithm>
using namespace std;
int cm[65001] = {0};
main()
{	
	cm[561] = 1;
	cm[1105] = 1;
	cm[1729] = 1;
	cm[2465] = 1;
	cm[2821] = 1;
	cm[6601] = 1;
	cm[8911] = 1;
	cm[10585] = 1;
	cm[15841] = 1;
	cm[29341] = 1;
	cm[41041] = 1;
	cm[46657] = 1;
	cm[52633] = 1;
	cm[62745] = 1;
	cm[63973] = 1;	
	int n;
	while(scanf("%d",&n) && n)
	{
		if(cm[n])printf("The number %d is a Carmichael number.\n",n);
		else printf("%d is normal.\n",n);
	}
}
