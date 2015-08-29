#include<cstdio>

using namespace std;

int arr[3000];
char ans[1001][3000];
main()
{
	int num,x,y,size,tmp;	
	arr[0] = arr[1] = size = 1;	
	ans[0][0] = ans[1][0] =  '1';
	ans[0][1] = ans[1][1] = '\0';
	for(x = 2; x <= 1000; x++)
	{
		for(y = 0; y < size; y++)arr[y] *= x;			
		tmp = size-1;
		for(y = 0; y < tmp; y++)
		{			
			arr[y+1] += arr[y]/10;
			arr[y] %= 10;					
		}
		while(arr[tmp] >= 10)
		{
			arr[size] = arr[tmp]/10;
			arr[tmp] %= 10;
			tmp = size++;		 
		}
		for(y = 0; y < size; y++)
		{
			ans[x][tmp-y] = arr[y]+48;
		}
		ans[x][size] = '\0';
	}
	while(scanf("%d",&num) != EOF)
	{
		printf("%d!\n%s\n",num,ans[num]);				
	}
}
