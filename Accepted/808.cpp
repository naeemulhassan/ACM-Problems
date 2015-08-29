#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int path;
class point
{
	public:
		int x;
		int y;
		point(){};
		point(int i,int j)
		{
			x = i;
			y = j;
		}
};
point* cordinate(int n)
{
	int sx,sy,c,count,start,mx,my,mid;
	c = (int)floor((sqrt(12*n-15)-3.0)/6.0);
	sx = c;
	sy = 1;
	start = 3*c*c+3*c+2;		
	count = (c+1);
	mid = start+count*3;
	mx = 0-c;
	my = -1;
	if(n==1)return new point(0,0);
	else if(n < count+start)return new point(sx-n+start,sy+n-start);
	else if(n < count+count+start)return new point(0-n+c+start,count);
	else if(n < count+count+count+start)return new point(0-count,start+count+count+c-n);
	else if(n < count+mid)return new point(mx+n-mid,my-n+mid);
	else if(n < count+count+mid)return new point(n-mid-c,0-count);
	else if(n < count+count+count+mid)return new point(count,0-(mid+count+count+c-n));
}
double dist(int ax,int ay,int bx,int by)
{
	
	return sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
}
int gap(point a,point b)
{	
	if(a.x == b.x && a.y == b.y)return path;
	double min = 1000000000.0,t;
	point p;
	t = (dist(a.x,a.y+1,b.x,b.y));
	if(t < min)
	{
		min = t;
		p.x = a.x;
		p.y = a.y+1;
	}
	t = (dist(a.x-1,a.y+1,b.x,b.y));
	if(t < min)
	{
		min = t;
		p.x = a.x-1;
		p.y = a.y+1;
	}
	t = (dist(a.x-1,a.y,b.x,b.y));
	if(t < min)
	{
		min = t;
		p.x = a.x-1;
		p.y = a.y;
	}
	t = (dist(a.x,a.y-1,b.x,b.y));
	if(t < min)
	{
		min = t;
		p.x = a.x;
		p.y = a.y-1;
	}
	t = (dist(a.x+1,a.y-1,b.x,b.y));
	if(t < min)
	{
		min = t;
		p.x = a.x+1;
		p.y = a.y-1;
	}
	t = (dist(a.x+1,a.y,b.x,b.y));	
	if(t < min)
	{
		min = t;
		p.x = a.x+1;
		p.y = a.y;
	}
	path++;
	gap(p,b);
}
main()
{
	
	int n,m;
	point pn,pm;
	while(scanf("%d %d",&n,&m) && n)
	{		
		pn = *cordinate(n);	
		pm = *cordinate(m);		
		gap(pn,pm);
		printf("The distance between cells %d and %d is %d.\n",n,m,path);
		path = 0;
	}
}

 
