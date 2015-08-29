#include <stdio.h>

int main() {
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	char c;
	int b1,b2,b3;
	b1=b2=0;
	do {
		c=getchar();
		if(c == EOF)break;
		b3=((c>='A' && c<='Z') || (c>='a' && c<='z'));
		if (b1==0 && b3==1) {
			if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
				b2=-1;
				printf("%c",c);
			}else
				b2=c;
				b1=1;

		}else {
			if(b3==0){
				if(b2>0) printf("%cay",b2);
				else if (b2==-1) printf("ay");
				b1=b2=0;
			}
			printf("%c",c);
		}
	}while(1);
	return 0;
}