#include<iostream>
#include<math.h>
#define MAX 32771
using namespace std;
int cx,cy,sx,sy,start,end,loop,total,n,ax,ay;
class point
{
	public:
	int x;
	int y;
};
point p;
point cordinate(int n)
{
	loop = ceil((ceil(sqrt(n))+1)/2);
	total = (loop-1)*2;
	sx = cx-loop+2;
	sy = cy+loop-2;
	start = (2*loop-3)*(2*loop-3)+1;
	end = (2*loop-1)*(2*loop-1);
	if(n >= start && n < start+total)
	{
		p.x = sx+n-start;
		p.y = sy;
	}
	else if(n >= start+total && n <start+total*2)
	{
		p.x = sx+total-1;
		p.y = sy-1-n+start+total;
	}
	else if(n >= start+total*2 && n < start+total*3)
	{
		p.x = sx-2-n+start+total*3;
		p.y = sy-total;
	}
	else
	{
		p.x = sx-1;
		p.y = sy-end+n;
	}	
	return p;
}
int value(int x,int y)
{
	loop = abs(cx-x) > abs(cy-1-y) ? abs(cx-x)+1 : abs(cy-1-y)+1;
	total = (loop-1)*2;
	sx = cx-loop+2;
	sy = cy+loop-2;
	start = (2*loop-3)*(2*loop-3)+1;
	end = (2*loop-1)*(2*loop-1);
	if(x == sx-1 && sy-y < total)return end-sy+y;
	else if(y == sy && x-sx < total)return start+x-sx;
	else if(x == sx+total-1 && (sy-1-y) < total)return start+total+sy-1-y;
	else return start+3*total+sx-2-x;
}
main()
{	
	cx = 90;
	cy = cx+1;	
	point q;
	while(scanf("%d",&n)!=EOF)
	{		
		if(n == 1)
		{
			printf("7;8;9;\n6;1;2;\n5;4;3;\n");
			continue;
		}
		q = cordinate(n);
		printf("%d;%d;%d;\n%d;%d;%d;\n%d;%d;%d;\n",value(q.x-1,q.y-1),value(q.x-1,q.y),value(q.x-1,q.y+1),value(q.x,q.y-1),n,value(q.x,q.y+1),value(q.x+1,q.y-1),value(q.x+1,q.y),value(q.x+1,q.y+1));
	}
}
