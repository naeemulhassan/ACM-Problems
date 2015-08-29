#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main (void)
{
	char line[256];
	double n,p,k;
	while(fgets(line,sizeof line,stdin))
	{
		n = strtoul(line, NULL, 0);
		fgets(line,sizeof line,stdin);
		p = strtod (line, NULL);
		k = exp (log (p) / n);
		printf ("%0.0f\n", k);
	}
}