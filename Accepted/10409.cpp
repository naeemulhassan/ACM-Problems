#include<stdio.h>
#include<string.h>

main()
{ int i,j,s=5,n=2,w=3,e=4,b=6,t=1,temp=0;
char command[6];

while(scanf("%d",&i) && i){	
	s=5;
	n=2;
	w=3;
	e=4;
	b=6;
	t=1;
	for(j=0;j<i;j++)
	{
		scanf("%s",command);
		if(!strcmp(command,"north"))
		{ temp=b;
		b=n;
		n=t;
		t=s;
		s=temp;
		}
		else if(!strcmp(command,"south"))
		{ temp=b;
		b=s;
		s=t;
		t=n;
		n=temp;
		}
		else if(!strcmp(command,"west"))
		{ temp=b;
		b=w;
		w=t;
		t=e;
		e=temp;
		}
		if(!strcmp(command,"east"))
		{ temp=b;
		b=e;
		e=t;
		t=w;
		w=temp;
		}
	}
	printf("%d\n",t);

}
}
