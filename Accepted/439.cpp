#include<iostream>
 
using namespace std;
int sx,sy,ex,ey;
int board[11][11];
void knight(int x,int y,int count)
{
	if(x == ex && y == ey)
	{
		if(count < board[ex][ey])board[ex][ey] = count;
		return;
	}
	if(count < board[x][y])board[x][y] = count;
	if(board[x+2][y+1] > count+1 && x+2 <= 8 && y+1 <= 8)knight(x+2,y+1,count+1);
	if(board[x+2][y-1] > count+1 && x+2 <= 8 && y-1 >= 1)knight(x+2,y-1,count+1);
	if(board[x-2][y+1] > count+1 && x-2 >= 1 && y+1 <= 8)knight(x-2,y+1,count+1);
	if(board[x-2][y-1] > count+1 && x-2 >= 1 && y-1 >= 1)knight(x-2,y-1,count+1);
	if(board[x+1][y+2] > count+1 && x+1 <= 8 && y+2 <= 8)knight(x+1,y+2,count+1);
	if(board[x+1][y-2] > count+1 && x+1 <= 8 && y-2 >= 1)knight(x+1,y-2,count+1);
	if(board[x-1][y+2] > count+1 && x-1 >= 1 && y+2 <= 8)knight(x-1,y+2,count+1);
	if(board[x-1][y-2] > count+1 && x-1 >= 1 && y-2 >= 1)knight(x-1,y-2,count+1);
	
}
main()
{
	string tmp;
	int i,j;
	while(getline(cin,tmp))
	{
		sy = tmp[0]-'a'+1;
		sx = 57-tmp[1];
		ey = tmp[3]-'a'+1;
		ex = 57-tmp[4];
		for(i = 1; i <= 8; i++)
			for(j = 1; j <= 8; j++)board[i][j] = 10000;
		knight(sx,sy,0);
		printf("To get from %c%c to %c%c takes %d knight moves.\n",tmp[0],tmp[1],tmp[3],tmp[4],board[ex][ey]);
	}
}
