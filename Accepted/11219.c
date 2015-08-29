#include<stdio.h>
#include<string.h>

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	
	int T,count,cd,cm,cy,bd,bm,by,age;
	char curdate[12],birdate[12];
	scanf("%d",&T);
	scanf("\n");
	count = 1;
	while(T--)
	{
		scanf("%s",curdate);
		scanf("%s",birdate);
		
		cd = (curdate[0]-'0')*10 + (curdate[1]-'0');
		cm = (curdate[3]-'0')*10 + (curdate[4]-'0');
		cy = (curdate[6]-'0')*1000 + (curdate[7]-'0')*100 + (curdate[8]-'0')*10 + (curdate[9]-'0');
		
		bd = (birdate[0]-'0')*10 + (birdate[1]-'0');
		bm = (birdate[3]-'0')*10 + (birdate[4]-'0');
		by = (birdate[6]-'0')*1000 + (birdate[7]-'0')*100 + (birdate[8]-'0')*10 + (birdate[9]-'0');
		
		if( (by>cy) || (by==cy && bm>cm) || (by==cy && bm==cm && bd>cd) )
		{
			printf("Case #%d: Invalid birth date",count);
		}
		else
		{
			if((cy==by) || (cy==by+1 && cm<bm) || (cy == by+1 && cm==bm && cd<bd))
				printf("Case #%d: 0",count);
			else
			{
				age = cy-by;
				if( (cm<bm) || (cm==bm && cd<bd) )age--;
				if(age>130)printf("Case #%d: Check birth date",count);
				else printf("Case #%d: %d",count,age);
			}
			
		}
		printf("\n");
		count++;
	}
}
