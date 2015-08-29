#include<iostream.h>
#include<math.h>
#include<stdio.h>

void main()
{
	int n,c,arr[169],root,count,x,y;
	while(cin>>n>>c)
	{
		count = 0;
		for(x = 1; x <= n; x++)
		{
			root = sqrt(x);
			while(root)
			{
				if(!(x%root--))break;
			}
			if(root==0)
			{
				arr[count] = x;
				count++;
			}
		}
		printf("%d %d:",n,c);
		if(count%2 && count<((2*c)-1))for(y = 0;y < count;y++)printf(" %d",arr[y]);
		else if(!(count%2) && count<(2*c))for(y = 0;y < count;y++)printf(" %d",arr[y]);
		else if(count%2)
		{
			x = (count - ((2*c) - 1)) / 2;
			root = ((2*c) - 2) + x;
			for(y = x;y <= root;y++)printf(" %d",arr[y]);
		}
		else
		{
			x = (count - (2*c)) / 2;
			root = ((2*c) - 1) + x;
			for(y = x;y <= root;y++)printf(" %d",arr[y]);
		}
		printf("\n\n");
	}
}