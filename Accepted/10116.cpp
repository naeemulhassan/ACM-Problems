#include<iostream>
 
using namespace std;

main()
{
	char robot[12][12],tmp[20];
	int pos[12][12];
	int r,c,e,x,y,z;
	while(scanf("%d %d %d",&r,&c,&e) && r)
	{
		for(x = 1; x <= r; x++)
		{
			scanf("%s",tmp);
			for(y = 1; y <= c; y++)robot[x][y] = tmp[y-1];
			
		}
		x = 1;
		y = e;
		e = 1;
		while(true)
		{
			if(x > r || y > c || x < 1 || y < 1)
			{
				printf("%d step(s) to exit\n",e-1);
				break;
			}
			else if(robot[x][y] == 'N')
			{
				robot[x][y] = 'P';
				pos[x][y] = e++;
				x--;
			}
			else if(robot[x][y] == 'S')
			{
				robot[x][y] = 'P';
				pos[x][y] = e++;
				x++;
			}
			else if(robot[x][y] == 'E')
			{
				robot[x][y] = 'P';
				pos[x][y] = e++;
				y++;
			}
			else if(robot[x][y] == 'W')
			{
				robot[x][y] = 'P';
				pos[x][y] = e++;
				y--;
			}						
			else if(robot[x][y] == 'P')
			{
				printf("%d step(s) before a loop of %d step(s)\n",pos[x][y]-1,e-pos[x][y]);
				break;
			}
		}
	}
}
