#include<stdio.h>
#include<iostream.h>
#include<math.h>

bool intersect(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
	int a1,b1,a2,b2,c1,c2,temp;
	float ix,iy;

	a1 = y1-y2;
	b1 = x2-x1;
	c1 = x1*y2 - x2*y1;
	
	a2 = y3-y4;
	b2 = x4-x3;
	c2 = x3*y4 - x4*y3;
	if(!(a1*b2 - b1*a2))return false;
	if(!(a2*b1 - b2*a1))return false;
	ix = (b1*c2- b2*c1) / (a1*b2 - b1*a2);
	iy = (a1*c2- a2*c1) / (a2*b1 - b2*a1);
	
	if(x3>x4 && y3 == y4)
	{
		temp = x4;
		x4 = x3;
		x3 = temp;
	}
	
	if(y3>y4 && x3 == x4)
	{
		temp = y4;
		y4 = y3;
		y3 = temp;
	}

	if(x1>x2)
	{
		temp = x2;
		x2 = x1;
		x1 = temp;

		temp = y2;
		y2 = y1;
		y1 = temp;
	}

	if(ix>=x3 && ix<=x4 && iy == y3)
	{
		if(ix>=x1 && ix<=x2)
		{
			if(y1>y2)
			{
				if(iy>=y2 && iy<=y1)return true;
			}
			else
			{
				if(iy>=y1 && iy<=y2)return true;
			}
		}
	}
	
	if(iy>=y3 && iy<=y4 && ix == x3)
	{
		if(ix>=x1 && ix<=x2)
		{
			if(y1>y2)
			{
				if(iy>=y2 && iy<=y1)return true;
			}
			else
			{
				if(iy>=y1 && iy<=y2)return true;
			}
		}
	}
	return false;
}

bool inside(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
	int temp;
	if(x3>x4)
	{
		temp = x4;
		x4 = x3;
		x3 = temp;
	}
	
	if(y3>y4)
	{
		temp = y4;
		y4 = y3;
		y3 = temp;
	}

	if( x1>=x3 && x1<=x4 && x2>=x3 && x2<=x4 && y1>=y3 && y1<=y4 && y2>=y3 && y2<=y4)return true;
	else return false;
}

void main()
{
	int x1,y1,x2,y2,xl,yl,xr,yr,n;
	cin>>n;
	while(n-->0)
	{
		cin>>x1>>y1>>x2>>y2>>xl>>yl>>xr>>yr;
		if(inside(x1,y1,x2,y2,xl,yl,xr,yr))printf("T\n");
		else if(intersect(x1,y1,x2,y2,xl,yl,xr,yl))printf("T\n");
		else if(intersect(x1,y1,x2,y2,xl,yr,xr,yr))printf("T\n");
		else if(intersect(x1,y1,x2,y2,xl,yr,xl,yl))printf("T\n");
		else if(intersect(x1,y1,x2,y2,xr,yr,xr,yl))printf("T\n");
		else printf("F\n");
	}
}

