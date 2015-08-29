#include<iostream>
#include<math.h>

#define PI 0.01745329251994329914588889

using namespace std;

main()
{
   int tc,c;
   double x,y,theta,dt;
   char com[4];
   scanf("%d",&tc);
   while(tc--)
   {
      scanf("%d",&c);
      x = y = theta = dt = 0.0;
      while(c--)
      {
         scanf("%s",com);
         scanf("%lf",&dt);
		 if(com[1] == 't')
		 {
			 theta = (com[0] == 'l') ? theta + dt : theta - dt;
		 }
         else if(com[0] == 'f')
         {
            x += dt*cos(theta*PI);
            y += dt*sin(theta*PI);            
         }
         else if(com[0] == 'b')
         {
            x += -dt*cos(theta*PI);
            y += -dt*sin(theta*PI);            
         }         
      }     
      printf("%0.0lf\n",round(sqrt(x*x+y*y)));
   }
}

