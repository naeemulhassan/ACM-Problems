#include<iostream>
#include<math.h>
 
using namespace std;
int c[210];

main()
{
	int i,j,k,l;
	double r;
	for(i = 0; i <= 200; i++)c[i] = i*i*i;
	for(i = 6; i <= 200; i++)
	{		
		for(j = 2; j < i; j++)
		{
			for(k = j; k < i; k++)
			{
				for(l = k; l < i; l++)
				{
					if(c[i] == c[j]+c[k]+c[l])printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,l);
				}
			}
		}
	}
}
