#include<iostream>
#include<string.h>
#include<math.h>
 
using namespace std;

main()
{
	float hour,min,angle;
	char time[10];
	while(scanf("%s\n",time))
	{
		if(!strcmp(time,"0:00"))break;
		hour = (time[0]-'0');
		if(time[1] != ':')hour = hour*10.0 + (time[1] - '0');
		if(time[2] == ':')
		{
			min = (time[3] - '0')*10;
			min = min + (time[4] - '0');
		}
		else if(time[1] == ':')
		{
			min = (time[2] - '0')*10;
			min = min + (time[3] - '0');
		}
		hour = hour*60.0 + min;
		hour = hour*0.5;
		min = min*6.0;
		angle = fabs(hour - min);
		if(angle > 180.000)angle = 360.0-angle;
		printf("%.3f\n",angle);
	}
}
