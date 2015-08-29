#include<iostream>
#include<algorithm>
 
using namespace std;

main()
{
	char ch;
	long int arr[100009],tmp[100009];
	long int x,y,num;
	while(scanf("%d%c",&arr[0],&ch))
	{
		if(ch == '\n')
		{
			if(arr[0] == 0)break;
			printf("Message hacked by the Martians!!!\n");	
		}
		else
		{
			num = 1;	
			while(scanf("%d%c",&arr[num++],&ch) && ch != '\n');		
			for (x = 0; x < num; x++) tmp[x] = -1;
			for(x = 0,y = 0; x < num && arr[x] < num; x++)
			{			
				if(tmp[arr[x]] != arr[x])
				{
					tmp[arr[x]] = arr[x];
					arr[x] = -1;
					y++;
				}			
			}
			if(x < num)
			{						
				printf("Message hacked by the Martians!!!\n");			
				continue;
			}
			sort(&arr[0],&arr[num]);
			for(x = 0; x < num; x++)
			{
				if(tmp[x] != x)tmp[x] = arr[y++];
			}
			printf("%ld",tmp[0]);	
			for(x = 1; x < num; x++)printf(" %ld",tmp[x]);		
			printf("\n");
		}				
	}
}
