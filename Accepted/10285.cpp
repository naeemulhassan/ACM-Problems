#include<iostream>
 
using namespace std;
int hill[101][101],N,R,C,i,j,ans;
void snow(int i,int j,int length)
{
	if(length>ans)ans = length;
	if(i > 0 && hill[i][j] > hill[i-1][j])snow(i-1,j,length+1);
	if(j > 0 && hill[i][j] > hill[i][j-1])snow(i,j-1,length+1);
	if(i < R && hill[i][j] > hill[i+1][j])snow(i+1,j,length+1);
	if(j < C && hill[i][j] > hill[i][j+1])snow(i,j+1,length+1);
}

main()
{
	int i,j,tmp;
	char name[100];
	scanf("%d",&N);
	while(N--)
	{
		scanf("%s %d %d",name,&R,&C);
		ans = tmp = 0;
		for(i = 0; i < R; i++)
			for(j = 0; j < C; j++)
				scanf("%d",&hill[i][j]);
		for(i = 0; i < R; i++)
			for(j = 0; j < C; j++)
		{
			snow(i,j,1);
			if(ans > tmp)tmp = ans;
		}
		printf("%s: %d\n",name,tmp);
	}
}
