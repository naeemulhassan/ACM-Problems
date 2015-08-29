#include<stdio.h>
#include<string.h>
int tns[4][2] = {0,78,1,69,2,83,3,87};
int field[50][50];
void main()
{
	int x,y,o,fx,fy,l,tempx,tempy,num = 0;
	unsigned a;
	char mov[100],orn;
	scanf("%d %d",&fx,&fy);
	do
	{
		scanf("%d %d %c",&x,&y,&orn);
		if(feof(stdin))break;
		scanf("%s",&mov);
		l = 0;
		if(orn == 'N')o = 0;
		else if(orn == 'E')o = 1;
		else if(orn == 'S')o = 2;
		else if(orn == 'W')o = 3;

		for(a = 0;a < strlen(mov);a++)
		{
			if(mov[a] == 'L')
			{
				o = (o + 3)%4;
			}
			else if(mov[a] == 'R')
			{
				o = (o +1)%4;
			}
			if(mov[a] == 'F')
			{
				tempx = x;
				tempy = y;
				if(field[tempx][tempy] == -1 && ((x+1 > fx && o ==1) || (y+1 > fy && o == 0) || (x-1 < 0 && o ==3) || (y-1 < 0 && o == 2)) )continue;
				if(o == 0)y++;
				else if(o == 1)x++;
				else if(o == 2)y--;
				else if(o == 3)x--;

				if(x > fx || y > fy || x < 0 || y < 0)
				{
					l = 1;
					field[tempx][tempy] = -1;
					break;
				}
			}
		}
		
		if(l!=1)printf("%d %d %c\n",x,y,tns[o][1]);
		else printf("%d %d %c LOST\n",tempx,tempy,tns[o][1]);
	}while(!feof(stdin));
}